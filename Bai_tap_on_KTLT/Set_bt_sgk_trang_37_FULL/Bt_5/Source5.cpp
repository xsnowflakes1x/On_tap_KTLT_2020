#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình nhập vào 2 số nguyên dương a và b
Nếu cả a và b đều là số chẵn thì xuất câu: "a va b la 2 so chan"
Nếu trong 2 số a và b chỉ có một số chẵn thì xuất ra câu: "chi co mot so chan"
Nếu trong 2 số a và b không có số chẵn nào thì xuất ra câu: "a, b la hai so le"
*/
void ChonDeTinhDienTich();
void main()
{
	ChonDeTinhDienTich();
	_getch();
}
void ChonDeTinhDienTich()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << endl;
	cout << "Nhap y: ";
	cin >> y;
	if (x % 2 == 0 && y % 2 == 0)
		cout << "a va b la 2 so chan.";
	else if (x % 2 != 0 && y % 2 != 0)
		cout << "a va b la 2 so le.";
	else 
		cout << "chi co mot so chan.";
}