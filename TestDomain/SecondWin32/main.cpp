#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "resource.h"


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    int ret = MessageBox(NULL, TEXT("���ǳ���������"),TEXT("����"), MB_YESNO);
    if (IDYES == ret)
    {
        MessageBox(NULL, TEXT("���ǳ�������"),TEXT("ȷ��"),MB_OK);
    }
    else
    {
        MessageBox(NULL, TEXT("�㲻�ǳ�����"),TEXT("ȷ��"),MB_OK);
    }

    return 0;
}
