#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình giải phương trình bậc 2 dạng ax^2+bx + c =0
ĐÃ DÙNG CASE TEST: https://freetuts.net/ref/c++-giai-phuong-trinh-bac-hai-ax2-+-bx-+-c-0-342.html
*/
void GiaiPhuongTrinhBac2();
void GiaiPhuongTrinhBac1(float &a, float &b);
void main()
{
	GiaiPhuongTrinhBac2();
	_getch();
}
void GiaiPhuongTrinhBac2()
{
	float a, b, c, kq;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	if (a != 0)
	{
		int dental;
		dental = pow(b, 2) - 4 * a * c;
		if (dental == 0)
		{
			int kq;
			kq = (float)-b / (2 * a);
			cout << "PT co nghiem kep: " << kq;
		}
		else if (dental > 0)
		{
			float x1, x2;
			x1 = (-b + sqrt(dental)) / (2 * a); // Lưu ý: để vậy là sai nè con:  -b + sqrt(dental) / (2 * a) 
			x2 = (-b - sqrt(dental)) / (2 * a);
			cout << "PT co 2 nghiem: " << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x1 = " << x2 << endl;
		}
		else
			cout << "phuong trinh vo nghiem!";
	}
	else
	{
		GiaiPhuongTrinhBac1(b, c);
	}
}
void GiaiPhuongTrinhBac1(float &a, float &b)
{
	float x;
	cout << "PT bac 1: ";
	if (a != 0)
	{
		x = -b / a;
		cout << "PT co 1 nghiem duy nhat x = " << x;
	}
	else
		if (b == 0)
			cout << "PT \"VO\" so nghiem ^^";
		else
			cout << "PT vo nghiem!";
}