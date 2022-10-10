#ifndef nhapthongtinruou
#define nhapthongtinruou
#include <iostream>
#include "support.h"
#include "dangnhap.h"
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}
typedef struct data{
	string ma;
	string tensp;
	string xuatxu;
	float  dungtich;
	float nongdo;
	double giaban;
}data;
class node{
	private:
		
	public:
		data data;
		node *next;
		node(){//khoi tao constructor default
			this->next=NULL;
			this->data.ma="";
			this->data.tensp="";
			this->data.nongdo=0;
			this->data.xuatxu="";
			this->data.giaban=0;
		}
		void inputdata(int x,int y);
		void nhapdulieunhieucot(node *head,int x,int t,int sobang);
		void display();
		
	
		
		
};
void node::display(){
		cout<<this->data.ma<<endl;
		cout<<this->data.tensp<<endl;
		cout<<this->data.xuatxu<<endl;
		cout<<this->data.dungtich<<endl;
		cout<<this->data.nongdo<<endl;
		cout<<this->data.giaban;
}
void node::inputdata(int x,int y){
	string temp;
	fflush(stdin);
	gotoxy(x+10,y);
	getline(cin,this->data.ma);
	gotoxy(x+20,y);
	fflush(stdin);
	getline(cin,data.tensp);
	gotoxy(x+50,y);
	fflush(stdin);
	getline(cin,data.xuatxu);

	do{
		thanhsang(x+69,y,1,10,7,0);
		gotoxy(x+69,y);
		getline(cin,temp);
	
	}while(isNumber(temp)==false);
	data.dungtich=stoi(temp);//bat nguoi dung nhap lai neu nguoi dung nhap ky tu
	do{
		thanhsang(x+83,y,1,8,7,0);
		gotoxy(x+83,y);
		getline(cin,temp);
	} while(isNumber(temp)==false);//bat nguoi dung nhap lai neu nguoi dung nhap ky tu
	data.nongdo=stoi(temp);	
	do{
		thanhsang(x+97,y,1,12,7,0);
		gotoxy(x+97,y);
		getline(cin,temp);
	}while(isNumber(temp)==false);//bat nguoi dung nhap lai neu nguoi dung nhap ky tu
	 data.giaban=stoi(temp);
}
/*void node::nhapdulieunhieucot(node *head,int x,int y,int sobang){
	for(int i=1;i<=sobang;i++){
		node *b=new node;
		b->inputdata(x,y+1+i*3);
	    b->next=head;
        head=b;
	}
}*/
void nhapthongtin(int &sobang);//ham nay lay so luong bang tu nguoi dung 
void insobangthongtincanthem(int x,int y,int dem);//tao ra so bang theo so luong nguoi dung nhap vao
/*void thongtin::nhandulieu(int x,int y,thongtin &a,int sobang){// in theo chieu ngang de nhap thong tin tung hang
	for(int j=y+3;j<3+y+sobang*3;j++){
  	for(int i=x;i<110+x;i++){
  	//	gotoxy(i,j);
  	//	cout<<"0";
  	}
}

}*/

void inbangmenunhapthongtinruou(int x,int y,int sobang);
void inbangmenunhapthongtinruou(int x,int y,int sobang){//bang nay in theo chieu doc //nay lam ham chinh 
	nhapthongtin(sobang);
	node *head=new node;
	head=NULL;//new khong cap phat bo nho dong thi se khong input du lieu vao duoc
  for(int i=x;i<110+x;i++){
  	for(int j=y;j<3+y;j++){
  		gotoxy(i,j);
  		SetBGColor(1);
  		if(i==13 || i==23 || i==55 || i==70 || i==85 || i==97){
  			textcolor(0);
  			cout<<char(179);
		  }
  		else
  		cout<<" "<<endl;
  		
	  }
	  SetBGColor(1);
	textcolor(10);
	gotoxy(8,5); cout<<"STT";
	gotoxy(17,5); cout<<"MA";
	gotoxy(34,5); cout<<"TEN SAN PHAM";
	gotoxy(59,5); cout<<"XUAT XU";
	gotoxy(72,5); cout<<"DUNG TICH(ml)";
	gotoxy(88,5); cout<<"NONG DO";
	gotoxy(103,5);cout<<"GIA BAN";
  }
  insobangthongtincanthem(x,y,sobang);
//  head->inputdata(x,y);
//	head->nhapdulieunhieucot(head,x,y,sobang);
	for(int i=1;i<=sobang;i++){//dung de nhap nhieu thanh data vao trong bang thong tin
		node *b=new node;
		b->inputdata(x,y+1+i*3);
		if(head==NULL){
			head=b;
		}
		else{
		//	b->next=head;
        //	head=b;
        node *temp=new node ;
        temp=head;
        while(temp->next!=NULL){//them vao cuoi danh sach lien ket
        	temp=temp->next;
		}
		temp->next=b;
		}
	}
	node *temp = new node ;//in thong tin vua nhap vao
    temp=head;
	do{
		temp->display();
		cout<<"\n";
		temp=temp->next;
		cout<<"ham de ket thuc";
	}while(temp!=NULL);
	
	
	
//	cout<<head->data.ma;
	
}
void insobangthongtincanthem(int x,int y,int dem){
	int sothutu=1;
	for(int i=x;i<110+x;i++){
		for(int j=y+3;j<dem*3+y+3;j++){
			SetBGColor(7);
			if(i==13 || i==23 || i==55 || i==70 || i==85 || i==97){//in thanh doc 
  				textcolor(0);
  				gotoxy(i,j);
  				cout<<char(179);
		  }
		  else if((j-y-2)%3==0){//in thanh ngang 
		  	if(i==x+4){
		  		gotoxy(i-2,j-1);//in dich lui 2 don vi neu khong se bi ví du in 10 nhung neu bi dè thì chi in 10
		  	//	SetBGColor(2);
		  		textcolor(0);
		  		cout<<sothutu;
		  		sothutu++;
			  }
		 // 	int count=0;
		  	SetBGColor(7);
		  	textcolor(0);
		  	gotoxy(i,j);
		  	cout<<char(95);
		
		  	
		  }
		  else{
		  	
			gotoxy(i,j);
			cout<<" ";
		}
		}
		
	//	cout<<sothutu;
	}
//	gotoxy(1,1);
}
void nhapthongtin(int &sobang){//in so luong bang mà nguoi dung muôn nhâp
	string temp;
	KhungTieuDe(5,0,38,2,2,7);
	gotoxy(6,1);
	setColor(0,7);
	cout<<"Nhap so luong san pham can nhap";
	KhungTieuDe(55,0,10,2,2,7);
	gotoxy(57,1);
	setColor(0,7);
	do{
		thanhsang(57,1,1,4,0,7);
		setColor(0,7);
		gotoxy(57,1);
		getline(cin,temp);
	}while(isNumber(temp)==false);
	sobang=stoi(temp);//chuyen chuoi thanh so 
}
#endif
