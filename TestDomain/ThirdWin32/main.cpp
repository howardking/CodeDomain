#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "resource.h"


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    int ret = MessageBox(NULL, TEXT("你是好人吗？"), TEXT("提问"), MB_YESNO|MB_ICONQUESTION);

    if (IDYES == ret)
    {
        MessageBox(NULL, TEXT("一看就不是好人，点击确定开始格式化C盘！"), TEXT("惩罚"),MB_OK|MB_ICONWARNING);
    }
    else
    {
        MessageBox(NULL, TEXT("点击确定尝试把你变成好人"), TEXT("变成好人"), MB_OK|MB_ICONWARNING);
        MessageBox(NULL, TEXT("坏人就是坏人变不成好人"), TEXT("ERROR"), MB_OK|MB_ICONERROR);
    }
    return 0;
}
