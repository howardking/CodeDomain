#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "resource.h"


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    int ret = MessageBox(NULL, TEXT("你是成年人了吗？"),TEXT("提问"), MB_YESNO);
    if (IDYES == ret)
    {
        MessageBox(NULL, TEXT("你是成年人了"),TEXT("确认"),MB_OK);
    }
    else
    {
        MessageBox(NULL, TEXT("你不是成年人"),TEXT("确认"),MB_OK);
    }

    return 0;
}
