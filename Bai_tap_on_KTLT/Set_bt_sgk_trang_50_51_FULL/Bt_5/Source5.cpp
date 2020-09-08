#include<iostream>
#include<conio.h>
using namespace std;
/*
Tìm bội chung nhỏ nhất của 2 số nguyên dương a và b.
ví dụ: a = 10, b = 4 thì kết quả là 4
NOTE: if-else, for, switch-case đều dùng break được nhá ! 
*/
void BoiChungNhoNhat(int a, int b);
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Tim boi chung nho nhat bat dau\n";
		int a, b;
		cout << "Nhap vao so nguyen thu 1:";
		cin >> a;
		cout << "Nhap vao so nguyen thu 2:";
		cin >> b;

		cout << "\nBoi chung nho nhat cua " << a << " va " << b << " la: "; BoiChungNhoNhat(a, b);
		cout << "\nNhap x: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void BoiChungNhoNhat(int a, int b)
{
	int demthoa = 0,bcnn;
		for (int i = 1; ; i++)
		{
			if (i % a == 0 && i % b == 0)
			{
				demthoa++;
				if (demthoa == 1) // demthoa là vì ta tìm BCNN nên tìm được bội đầu tiên giữa a và b là thỏa yêu cầu 
				{
					bcnn = i;
					break;
				}
			}
		}
		cout << bcnn;
}