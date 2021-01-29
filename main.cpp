#include <iostream>
#include <windows.h>

using namespace std;

float x = 0;
float y = 0;

int main()
{
    while(true)
    {
        if(GetAsyncKeyState(VK_UP))
        {
            y--;
            Sleep(5);
            SetCursorPos(x, y);
        }
        else if(GetAsyncKeyState(VK_DOWN))
        {
            y++;
            Sleep(5);
            SetCursorPos(x, y);
        }
        else if(GetAsyncKeyState(VK_RIGHT))
        {
            x++;
            Sleep(5);
            SetCursorPos(x, y);
        }
        else if(GetAsyncKeyState(VK_LEFT))
        {
            x--;
            Sleep(5);
            SetCursorPos(x, y);
        }
        else if(GetAsyncKeyState(VK_RETURN))
        {
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
        }
    }
    return 0;
}
