#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào 1 số nguyên dương N tính:
s1 = 1 + 1/2 + 1/3 + ... 1/N
s2 = 1 + (1+2) + (1+2+3) +...+ (1+2+3...+N)
*/
void XuatS1(int n);
void XuatS2(int n);
void TinhTongSCuaN();
void main()
{
	int x;
	do {
		cout << "Chuong trinh bat dau\n";
		TinhTongSCuaN();
		cout << "\nNhap x: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void TinhTongSCuaN()
{
	int n;
	cout << "Nhap vao 1 so nguyen N:" << endl;
	cin >> n;
	XuatS1(n);
	cout << endl;
	XuatS2(n);
}
void XuatS1(int n)
{
	float s1 = 0;
	cout << "Ket qua = ";
	for (float i = 1; i <= n; i++)
	{
		s1 += 1 / i;
		if (i == n)
			cout << 1 << "/" << i << " = " << s1;
		else cout << 1 << "/" << i << " + ";
	}
}
void XuatS2(int n)
{
	int s2 = 0;
	cout << "Ket qua = ";
	for (int i = 1; i <= n; i++)
	{
		s2 += i;
		if (i == n)
			cout << i << " = " << s2;
		else cout << i << " + ";
	}
}