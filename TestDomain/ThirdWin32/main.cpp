#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "resource.h"


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    int ret = MessageBox(NULL, TEXT("���Ǻ�����"), TEXT("����"), MB_YESNO|MB_ICONQUESTION);

    if (IDYES == ret)
    {
        MessageBox(NULL, TEXT("һ���Ͳ��Ǻ��ˣ����ȷ����ʼ��ʽ��C�̣�"), TEXT("�ͷ�"),MB_OK|MB_ICONWARNING);
    }
    else
    {
        MessageBox(NULL, TEXT("���ȷ�����԰����ɺ���"), TEXT("��ɺ���"), MB_OK|MB_ICONWARNING);
        MessageBox(NULL, TEXT("���˾��ǻ��˱䲻�ɺ���"), TEXT("ERROR"), MB_OK|MB_ICONERROR);
    }
    return 0;
}
