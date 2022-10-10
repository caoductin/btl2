#ifndef menu
#define menu
#include "support.h"
#include "nhapthongtinruou.h"
void thongtinruou();
void BangMenu(int xx,int yy);
void menuchinh();

void kiemtraphimnhap(int x,int y,string a[]);
void menuchinh(){ 
int h=8;//toa do cua y
int w=20;//toa do cua x
string str[10];//dùng mang dê làm thanh sáng
//	SetBGColor(7);
//    textcolor(0);
	str[0]="   1. Nhap thong tin ruou                                             ";
	str[1]="   2. Xem danh sach ruou con trong kho                                ";
	str[2]="   3. Xem danh sach ruou da ban                                       "; 
	str[3]="   4. Tim ten khach hang da mua(theo so dien thoai,theo ten,theo ngay)"; 
	str[4]="   5. Top 10 loai ruou ban chay nhat                                  ";
	str[5]="   6. Tinh toan doanh thu                                             ";
	str[6]="   7. Top 10 khach hang tiem nang                                     ";
	str[7]="   8. Thong tin cho khach hang                                        ";
	str[8]="   9. Thoat                                                           ";
//	str[9]= "                                                                      ";
    BangMenu(15,5);
    gotoxy(w+30,6);   
	setColor(0,3); 
	cout <<"==MENU CHINH==";
	setColor(0,8);
	gotoxy(w,h);cout << "                                                                      ";
    gotoxy(w,h+1);cout <<str[0]; //"   1. Nhap thong tin ruou                                             ";  
    gotoxy(w,h+2);cout << str[1];//"   2. Xem danh sach ruou con trong kho                                "; 
    gotoxy(w,h+3);cout << str[2];//"   3. Xem danh sach ruou da ban                                       "; 
    gotoxy(w,h+4);cout <<str[3]; //"   4. Tim ten khach hang da mua                                       "; 
    gotoxy(w,h+5);cout << str[4];//"   5. Tim khach hang theo so dien thoai                               "; 
    gotoxy(w,h+6);cout <<str[5]; //"   6. Liet ke danh sach cac sach ma 1 doc gia da muon                 "; 
    gotoxy(w,h+7);cout << str[6];//"   7. Danh sach doc gia muon qua han theo thu tu thoi gian giam dan   ";
	gotoxy(w,h+8);cout <<str[7]; //"   8. In 10 sach co so luot muon nhieu nhat                           ";
	gotoxy(w,h+9);cout << str[8];//"   9. Thoat                                                           ";
	gotoxy(w,h+10);cout <<"                                                                      ";
	kiemtraphimnhap(w,h+1,str);
}
void kiemtraphimnhap(int x,int y,string a[]){
	bool kt=true;
	int xcu=x, ycu=y;
	char c;
	int i=0;//index dung de truy cap vao mang 
	int icu;
	while(kt){
		setColor(0,8);//chinh lai mau cu 
		gotoxy(xcu,ycu);
		cout<<a[icu];
		icu=i;
		gotoxy(x,y);//tao mau dong dau tien
		setColor(2,4);
		xcu=x, ycu=y;
		cout<<a[i];
		c=_getch();
		switch(c){
			case 72://phim len
				if(y==9){
					y=17;
					i=8;
				}
				else{
					y--;
					i--;
				}
			break;
			case 80://phim xuong
			if(y==17){
				y=9;
				i=0;
			}
			else {
				y++;
				i++;
			}
			break;
			case 13:
				if(y==9){
					SetBGColor(0);
					system("cls");
					inbangmenunhapthongtinruou(6,4,5);
					kt=false;
				}
			break;
				
		}
		
	}
}


void BangMenu( int xx , int yy ){//in bang ngoài cua menu 
	SetBGColor(7);
	for(int x = 0+xx ; x < 80+xx ; x++ ){
		for( int y = 0+yy ; y < 17+yy ; y++ ){
			gotoxy(x,y);	
			cout<<" ";
		}
		cout<<endl;
	}
//	gotoxy(32,8);
	SetBGColor(0);
//	textcolor(13);cout << char(15) << ten << char(15);
}



#endif

