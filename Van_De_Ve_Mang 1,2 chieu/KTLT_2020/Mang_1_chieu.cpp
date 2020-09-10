#include<iostream>
#include"conio.h"
using namespace std;
// CHƯƠNG TRÌNH NHẬP XUẤT MẢNG  SỐ NGUYÊN 1 CHIỀU
#define n 4 //const int n = ; 
void NhapMang(int *m1, int &sl); // prototype: hàm nguyên mẫu
void XuatMang(int m1[], int &sl);
void main()
{
	int mang1[n], sl;
	cout << "Nhap so luong:";
	cin >> sl;	
	NhapMang(mang1, sl);
	XuatMang(mang1, sl);
	_getch();
}
void NhapMang(int *m1, int &sl) 
{
	for (int i = 0; i <= sl-1; i++)
	{
		int p;
		cout << "p[" << i + 1 << "] = ";
		cin >> p;
		m1[i] = p;
		cout << endl;
	}
}
void XuatMang(int m1[], int &sl)
{
	cout << "p[1]-->[" << sl  <<"] = ";
	for (int i = 0; i <= sl-1; i++)
	{
		cout<< m1[i] << ", ";
	}
}
/*

void NhapMang(int *m1, int &sl); //NOTE quan trọng: Tham số của kiểu mảng được phép dùng kiểu con trỏ mảng(*m1) (trỏ đến mảng m1)
void XuatMang(int m1[], int &sl); 

==> int *m1 và int m1[] là như nhau
*/