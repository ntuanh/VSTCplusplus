#include"includes.h"

// Hàm thiết lập màu sắc văn bản
void setColor(int textColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor);
}
    // Các mã màu cơ bản:
    // 0 = Black       8 = Gray
    // 1 = Blue        9 = Light Blue
    // 2 = Green       10 = Light Green
    // 3 = Aqua        11 = Light Aqua
    // 4 = Red         12 = Light Red
    // 5 = Purple      13 = Light Purple
    // 6 = Yellow      14 = Light Yellow
    // 7 = White       15 = Bright White

    // Đặt màu sắc văn bản là đỏ, nền là đen
    //setColor(4, 0);


// ve hinh vuong
void retangle(int left, int top, int size_col, int size_row) {
    size_row *= 2;
    setCursor(left, top);
    cout << char(201);
    for (int i = 0; i < size_row; i++)cout << char(205);
    cout << char(187);
    int cnt = 0;
    while (cnt < size_col) {
        setCursor(left, top + cnt + 1);
        cout << char(186);
        setCursor(left + size_row + 1, top + cnt + 1);
        cout << char(186);
        cnt++;
    }
    setCursor(left, top + size_col + 1);
    cout << char(200);
    for (int i = 0; i < size_row; i++)cout << char(205);
    cout << char(188);

}

// ve logo 
void logo(int x , int y) {
    setCursor(x, y);
    cout << "     __________" << endl;
    setCursor(x, y + 1);
    cout << "     \\_   ___  \\______ _______  ____ " << endl;
    setCursor(x, y + 2);
    cout << "     /     \\ \\ /\\__   \\\\_  __ \\/  _ \\  " << endl;
    setCursor(x, y + 3);
    cout << "     \\      \\____/ __  \\|  | \\(  <_> )  " << endl;
    setCursor(x, y + 4);
    cout << "      \\_______  (____  /|__|   \\____/  " << endl;
    setCursor(x, y + 5);
    cout << "              \\/     \\/  ";
}

void set_player_1(bool boolen, int score) {
    setCursor(10, 10);
    setColor(10, int(boolen));
    cout << "Player 1 Score : "<< score;
}

void set_player_2(bool boolen, int score) {
    setCursor(130, 10);
    setColor(10, int(boolen));
    cout << "Player 2 Score : "<< score;
}