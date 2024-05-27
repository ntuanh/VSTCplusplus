#include "includes.h"

using namespace std;

const int load = 176;

void delay(int delaytime) {
	std::this_thread::sleep_for(std::chrono::milliseconds(delaytime));
}

void print_ascii() {
	for (int i = 100; i < 255; i++)cout << i << " " << char(i) << endl;
	// loading 176 
}
class Introduction {
public :
	void loading() {
		for (int i = 0; i < 45; i++)cout << " ";
		for (int i = 45; i <= 75; i++) {
			cout << char(load);
			delay(100);
		}
		cout << endl;
	}
	void print_name() {
		//for (int i = 0; i < 6; i++)cout << ln[i] << endl;
		
	}
};



int main() {
	set_value();
	int cnt = 1;
	int left = 42;
	int top = 7;
	ShowConsoleCursor(false);
	setColor(7, 0);
	retangle(left - 1, top - 1, size, size);
	setColor(10, 0);
	logo( 52, 0 );
	char ch;
	int* ptr_x = &left;
	int* ptr_y = &top;
	int* ptr_cnt = &cnt;
	int plr_1 = 0;
	int plr_2 = 0;
	while (true) {
		//f[1][1] = 1;
		setColor(10, 0);
		control(ptr_x, ptr_y , 42 , 7 , ptr_cnt);
		//setCursor(0, 0);
		//cout << *ptr_cnt;
		set_player_1(*ptr_cnt % 2, plr_1);
		set_player_2((*ptr_cnt + 1) % 2, plr_2);
		if (check((*ptr_x - 41) / 2 + 1, *ptr_y - 6) == true){
			setCursor(2, 2);
			if (f[(*ptr_x - 41) / 2 + 1][*ptr_y - 6] == 1 || f[(*ptr_x - 41) / 2 + 1][*ptr_y - 6] == 0)cout << "Player 1 Win!!!";
			else cout << "Player 2 Win !!!";
			//cout << f[(*ptr_x - 41) / 2 + 1][*ptr_y - 6];
			delay(3000);
			break;
		}	
		//setCursor(0, 0);
		//cout << *ptr_x << " " << *ptr_y;
		//delay(1000);
		if (_kbhit()) {
			ch = _getch() ;
			if (ch == 'q')
				print();
		}
	}
	return 0 ;
}
