#include"includes.h"
//int f[40][40];
int f[40][40];
int size;
void set_value() {
	size = 36;
	
	for (int i = 0; i < 37; i++) {
		f[0][i] = 4;
		f[36][i] = 4;
		f[i][0] = 4;
		f[i][36] = 4;
	}
}

// y hang ; x cot
bool check(int x, int y) {
	if (f[y][x] == 0)return false;
	int cnt = 1;
	// row 
	for (int i = x + 1; i < x + 5; i++)
		if (f[y][x] == f[y][i])cnt++;else break;
	for (int i = x - 1; i > x - 5; i--)
		if (f[y][x] == f[y][i])cnt++;else break;
	if (cnt > 4)return true;
	cnt = 1;
	//col 
	for (int i = y + 1; i < y + 5; i++)
		if (f[y][x] == f[i][x])cnt++;else break;
	for (int i = y - 1; i > y - 5; i--)
		if (f[y][x] == f[i][x])cnt++;else break;
	if (cnt > 4)return true;
	//  /
	cnt = 1;
	for (int i = 1; i < 5; i++)
		if (f[y][x] == f[y - i][x + i])cnt++;else break;
	for (int i = 1; i < 5; i++)
		if (f[y][x] == f[y + i][x - i])cnt++;else break;
	if (cnt > 4)return true;
	//  "\"
	cnt = 1;
	for (int i = 1; i < 5; i++)
		if (f[y][x] == f[y - i][x - i])cnt++;else break;
	for (int i = 1; i < 5; i++)
		if (f[y][x] == f[y + i][x + i])cnt++;else break;
	if (cnt > 4)return true;
	return false;
}

void print() {
	set_value();
	//f[1][1] = 2;
	for (int i = 0 ; i < 37; i++) {
		for (int j = 0; j < 37; j++)cout << f[i][j] << " ";
		cout << endl;
	}
}