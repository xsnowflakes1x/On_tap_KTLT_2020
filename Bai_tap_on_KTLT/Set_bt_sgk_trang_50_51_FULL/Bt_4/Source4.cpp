#include<iostream>
#include<conio.h>
using namespace std;
/*
Tìm ước số chung lớn nhất của 2 số nguyên dương a và b.
ví dụ: a = 16, b = 12 thì kết quả là 4
*/
void UocChungLonNhat(int a, int b);
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Tim USCLN bat dau:\n";
		int a, b;
		cout << "Nhap vao so nguyen thu 1:";
		cin >> a;
		cout << "Nhap vao so nguyen thu 2:";
		cin >> b;

		cout << "\nUoc chung lon nhat cua " << a << " va "<<b<<" la: "; UocChungLonNhat(a,b);
		cout << "\nNhap 0 de thoat: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void UocChungLonNhat(int a, int b)
{
	int max = 0;
	if (a < b)
	{
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				if (max < i)
					 max = i;
			}
		}
		cout << max;
	}
	else
	{
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				if (max < i)
					max = i;
			}
		}
		cout << max;
	}
}
