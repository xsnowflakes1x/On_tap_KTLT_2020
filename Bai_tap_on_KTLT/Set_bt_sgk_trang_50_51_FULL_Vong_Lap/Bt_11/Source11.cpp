#include<iostream>
#include<conio.h>
using namespace std;
/*
Viet chuong trinh tim cac so nguyen duong trong khoang tu 100-999 sao cho tong binh phuong cac chu so 25
vi dụ: số 403 có 4^2 + 0^2 + 3^2 = 25
*/
void Tim_TongBinhPhuongCacSoBang25();
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Tim tong binh phuong cac so la 25 (tu 100 den 999) p\n";

		cout << "\KQ: "; Tim_TongBinhPhuongCacSoBang25();
		cout << "\nNhap 0 de thoat: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void Tim_TongBinhPhuongCacSoBang25()
{
	int tr, ch, dv, tong,dem =0;
	for (int i = 100; i <= 999; i++)
	{
		tr = i / 100;
		ch = i % 100 / 10;
		dv = i % 100 % 10;
		tong = tr*tr + ch*ch + dv*dv;
		if (tong == 25)
		{
			cout << dem++<<". ";
			cout << "So " << i << " co: " << tr << "^2 + " << ch << "^2 + " << dv << "^2 = " << tong << endl;;
		}
	}
}

