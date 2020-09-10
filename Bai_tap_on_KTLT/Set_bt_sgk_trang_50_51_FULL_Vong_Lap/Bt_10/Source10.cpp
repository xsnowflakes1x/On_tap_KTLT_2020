#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình nhập 2 số a, b sao cho:
số lớn nhất trong 2 số phỉa là một số dương và chia hết cho 7.
Nếu nhập sai phải yêu cầu nhập lại cho đến khi đúng
*/
void KiemTraSoDuongChiaHetCho7();
void main()
{
	KiemTraSoDuongChiaHetCho7();
	_getch();
}
void KiemTraSoDuongChiaHetCho7()
{
	for (; ;)
	{
		cout << "\nChuong trinh: Kiem tra so duong chia het cho 7: \n";
		int a, b;
		cout << "Nhap vao so nguyen thu 1:";
		cin >> a;
		cout << "Nhap vao so nguyen thu 2:";
		cin >> b;

		if (a > b && a > 0 && a % 7 == 0)
		{
			cout << "So" << a << "la so thoa. Vi a chia het cho 7: " << a / 7; break;
		}
		else if (b > a  && b > 0 && b % 7 == 0)
		{
			cout << "So" << b << "la so thoa. Vi a chia het cho 7: " << b / 7; break;
		}
		cout << "Nhap lai di. Sai roi ong co";
	}
}