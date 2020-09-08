#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào 1 số nguyên N, cho biết N có phải là số hòa thiện hay không. 
Biết một số hoàn thiện là một số có tổng các ước số của nó (không kể nó) bằng chính nó.
Ví dụ: số 6 là số hoàn thiện vì tổng các ước số là 1+2+3 = 6; 
CASE TEST các số hoàn hảo: 6,28, 496 và 8128.
*/
void KiemTraSoHoanThien(int n);
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Kiem tra so hoan thien\n";
		int n;
		cout << "Nhap vao so nguyen n:";
		cin >> n;
		cout << "\KQ: "; KiemTraSoHoanThien(n);
		cout << "\nNhap 0 de thoat: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void KiemTraSoHoanThien(int n)
{
	int TongCac_UC = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			TongCac_UC += i;
				cout << i << " + ";
		}
	}
	if (TongCac_UC == n)
		cout << " = " << TongCac_UC<<" => La so hoan thien"<<endl;
	else cout << "\nKhong phai so hoan thien!";
}