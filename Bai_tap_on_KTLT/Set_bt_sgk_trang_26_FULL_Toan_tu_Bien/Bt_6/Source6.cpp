#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập ba số. Xuất ra ba số theo trận tự từ nhỏ đến lớn (khó)
*/
void SapXep();

void SapXep2();
void main()
{
	SapXep2();
	cout << endl;
	SapXep();
	_getch();
}
void SapXep()
{
	int a = 0 , b = 0 , c = 0, max = 0, min = 0, mid = 0;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	min = (a > b) ? b : a;
	min = (min > c) ? c : min;
	mid = (min != a && max != a) ? a : ((min != c && max != c) ? c : b);

	cout << "KQ: "<<max<<" > "<< mid<<" > "<<min;
}
void SapXep2()
{
	int a = 0, b = 0, c = 0, max = 0, min = 0, mid = 0;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	min = (a > b) ? b : a;
	min = (min > c) ? c : min;
	mid = (a > min && a < max) ? a : ((b > min && b < max) ? b : c);
	
		cout << "KQ: " << max << " > " << mid << " > " << min;
}