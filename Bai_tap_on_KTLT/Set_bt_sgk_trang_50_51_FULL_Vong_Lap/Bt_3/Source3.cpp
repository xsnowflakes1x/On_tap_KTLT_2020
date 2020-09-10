#include<iostream>
#include<conio.h>
using namespace std;
/*
Hãy liệt kê tất cả các ước số của số nguyên dương n.
Ví dụ: n = 15 thì in ra màn hình 1,3,5,15
*/
void UocSo(int n);
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Tim US bat dau:\n";
		int n;
		cout << "Nhap vao 1 so nguyen N:";
		cin >> n;
		cout << "N = " << n << " => Uoc cua no la: "; UocSo(n);
		cout << "\nNhap 0 de thoat: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void UocSo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		
		if (n % i == 0)
		{
			dem++;
			if (i == n)
			cout << i<<"."<<"\n                     Co tong cong "<<dem<<" so.";
			else cout << i<<", ";
		}
	}

}
