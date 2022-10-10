#include <iostream>	
#include "support.h"
#include "menu.h"
#include "dangnhap.h"
#include "nhapthongtinruou.h"
using namespace std;

int main(){
//	Dangnhap a;
	LoadFileDuLieu();
	docfilechao("manhinhchao.txt");
	SetBGColor(0);
	Sleep(1000);
	system("cls");
	manhinhdangnhap();
	SetBGColor(0);
	system("cls");
	menuchinh();
	_getch();
	inbangmenunhapthongtinruou(6,4,5);
}
