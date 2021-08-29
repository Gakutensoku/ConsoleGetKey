#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    cout << "Aキーを押してください" << endl;
    while (true)
    {
        if (GetAsyncKeyState('A'))
        {
            cout << "Aキーが押されました" << endl;
        }
        Sleep(100);
    }
    return 0;
}