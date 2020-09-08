#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào 1 số nguyên N. Viết chương trình in ra bảng cửu chương N.
*/
void XuatBangCuuChuong();
void main()
{
	int x;
	do {
		cout << "Chuong trinh bat dau\n";
		XuatBangCuuChuong();
		cout << "\nNhap x: ";
		cin >> x;
	} while (x!=0);
	_getch();
}
void XuatBangCuuChuong()
{
	int a;
	cout << "Nhap vao 1 so nguyen:"<<endl;
	cin >> a;
	cout <<"   "<< "------Bang Cuu Chuong "<<a<< endl;
	for (int i = 1; i <= 10 ; i++)
	{
		cout <<"          "<< a << " * " << i << " = " << a*i << endl;
	}
	cout <<"   "<<"------****___****------" << endl;
}