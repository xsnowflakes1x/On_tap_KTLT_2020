#include<iostream>
#include<conio.h>
using namespace std;
// Viết chương trình nhập vào 4 số a, b, c, d. Tìm số lớn nhất trong 4 số.
void TimSoLonNhat();
void main()
{
	TimSoLonNhat();
	_getch();
}
void TimSoLonNhat()
{
	int a, b, c, d, max;
	cout << "Nhap vao 4 so: ";
	cin >> a >> b >> c >> d;	
	if (a > b)
	{
		max = a;
		if (c > max)
		{
			max = c;
			if (d > max)
				max = d;
		}	
		else
		{
			if (d > max)
				max = d;
		}
	}
	else
	{
		 max = b;
		 if (c > max)
		 {
			 max = c;
			 if (d > max)
				 max = d;
		 }
		 else
		 {
			 if (d > max)
				 max = d;
		 }
	}
	cout << "So Lon Nhat: " << max;
}