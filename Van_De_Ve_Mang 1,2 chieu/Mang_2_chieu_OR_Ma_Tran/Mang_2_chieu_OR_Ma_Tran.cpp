#include<iostream>
#include"conio.h"
using namespace std;
// CHƯƠNG TRÌNH NHẬP XUẤT MẢNG SỐ NGUYÊN 2 CHIỀU
#define max_r 5
#define max_c 10
// thử làm cái bc 2 chuyền thành typedef xem
void NhapMang(int(*iMaTran)[max_c], int r, int c);
void XuatMang(int iMaTran[][max_c], int r, int c);
void main()
{
	int iMaTran[max_r][max_c], r, c; 
	cout << "Nhap r: "<<endl;
	cin >> r;
	cout << "Nhap c: " << endl;
	cin >> c;
	NhapMang(iMaTran, r, c);
	XuatMang(iMaTran, r, c);
	_getch();
}
void NhapMang(int(*iMaTran)[max_c], int r, int c)
{
	int a; 
	for ( a = 0; a < r; a++)
	{ 
		for (int b = 0; b < c ; b++)
		{
			int x, y;
			cout << "Nhap MaTran[" << a << "][" << b << "] = ";
			cin >> x;
			cout << endl;
			iMaTran[a][b] = x;
		}
	}
}
void XuatMang(int iMaTran [][max_c], int r, int c)
{
	for (int a = 0; a < r; a++)
	{
		for (int b = 0; b < c; b++)
		{
			cout << "MaTran[" << a << "][" << b << "] = " << iMaTran[a][b] << endl;
		}
	}
}

/*
NOTE quan trọng:
có 3 cách truyền số lượng phần từ cho tham số kiểu mảng
void NhapMang(int(*iMaTran)[max_c], int r, int c);
void XuatMang(int iMaTran[][max_c], int r, int c);
void NhapMangi int iMaTran[max_r][max_c], int r, int c);
*/