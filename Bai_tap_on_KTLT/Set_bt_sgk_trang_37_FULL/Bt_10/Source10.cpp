#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập 3 số nguyên dương. Xét xem 3 số vừa nhập có phải là số đo 3 cạnh của tam giác hay không? 
Nếu đúng, thì tam giác gì (đều, vuông cân, cân, vuông, thường)
*/
void XetTamGiac();
void main()
{
	char x;
	do
	{
		XetTamGiac();
		cout << "\nNhap 00 de thoat!";
		cin >> x;
	} while (x != 00);
	_getch();
}
void XetTamGiac()
{
	int a, b, c;
	cout << "Chuong trinh bat dau:" << endl;
	cout << "Nhap vao 3 so nguyen duong: " << endl;
	cout << "So a: ";
	cin >> a;
	cout << "So b: ";
	cin >> b;
	cout << "So c: ";
	cin >> c;
	if (a + b > c || b + c > a || a + c > b)
	{
		if ((a == b) && (b == c) && (c == a))
			cout << " => Tam giac dieu.";
		else if ((a*a == b*b + c*c && b == c) || (b*b == a*a + c*c && a == c) || (c*c == b*b + a*a && b == a)) // nhập căn 8-2-2 mà nhập căn ko được nên ko test dc :v
			cout << " => Tam giac vuong can.";
		else if (a == b || a == c || b == c)
			cout << " => Tam giac can.";
		else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b + a*a)// nhập 3 - 4 -5
			cout << " => Tam giac vuong.";
		else if ((a != b && a != c) || (a != c && b != c) || (b != c && a != b))
			cout << " => Tam giac thuong.";
	}
	else cout << "=> Day khong phai la tam giac!";
}