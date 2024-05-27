#include "includes.h"



void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
/*
int main()
{
    std::cout << "Hello World" << std::endl;
    int n;
    std::cin >> n;
    std::cout << ++n;
    ShowConsoleCursor(false);
    system("pause");
}*/

void setCursor(int x, int y) {
    // Tạo một cấu trúc COORD để lưu trữ tọa độ x, y
    COORD coord;
    coord.X = x;
    coord.Y = y;

    // Lấy handle của console output
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Sử dụng hàm SetConsoleCursorPosition để di chuyển con trỏ
    SetConsoleCursorPosition(hConsole, coord);
}

void control(int* ptr_x, int* ptr_y, int X, int Y, int* ptr_cnt) {//41 6
    int left = X - 1;
    int top = Y - 1;
    int x = *ptr_x, y = *ptr_y;
    int cnt = *ptr_cnt;
    string s[4] = { "  " , "><" , "()" , "[]" };
    int keys[] = { 13, 'W', 'S', 'A', 'D', };
    for (int i = 0; i < 5; i++) {
        int v = GetAsyncKeyState(keys[i]);

        if (v & 1) {
            setCursor(x, y);
            cout << s[f[y - top][(x - left) / 2 + 1]];
            switch (keys[i])
            {
                //setColor(10, 0);
                //se

            case 'W':
                if (f[y - top - 1][(x - left) / 2 + 1] != 4) y--;
                break;
            case 'S':
                if (f[y - top + 1][(x - left) / 2 + 1] != 4) y++;
                break;
            case 'A':
                if (f[y - top][(x - left) / 2 + 1 - 1] != 4)x -= 2;
                break;
            case 'D':
                if (f[y - top][(x - left) / 2 + 1 + 1] != 4)x += 2;
                break;
            case 13:
                if (f[y - top][(x - left) / 2 + 1] == 0) {
                    if (cnt % 2 == 0)f[y - top][(x - left) / 2 + 1] = 2;else
                        f[y - top][(x - left) / 2 + 1] = 1;
                    cnt++;
                }
                break;
            }
            //setCursor(0, *ptr_cnt);
            //cout << x << " " << y << " " << "nhan phim " << ch <<" f : " <<f[y-top][(x-left)/2+1];
        }
        *ptr_x = x;
        *ptr_y = y;
        *ptr_cnt = cnt;
        //setCursor(0, 0);
        //cout << *ptr_cnt;
        setColor(10, 0);
        setCursor(x, y);
        cout << s[3];
        //delay(300);
        //setCursor(x, y);
        //cout << s[3];
        //delay(300);
    }
}
