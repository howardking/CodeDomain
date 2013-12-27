#define WIN32_LEAN_AND_MEAN

#include <windows.h>

#include "resource.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
            MessageBox(NULL, TEXT("师姐你好"),TEXT("问好"), MB_YESNOCANCEL);
            return 0;
}
