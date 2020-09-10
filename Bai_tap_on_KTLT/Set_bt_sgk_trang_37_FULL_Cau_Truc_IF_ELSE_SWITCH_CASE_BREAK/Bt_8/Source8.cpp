#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào một số nguyên dương tối đa 9 chữ số. Hỏi số đó có bao nhiêu chữ số?
*/
// không khởi tạo giá trị hậu quả là vòng lặp vô hạn??
void XuatSoCoBaoNhieuChuSo();
void main()
{
	int x;
	do 
	{
		XuatSoCoBaoNhieuChuSo();
		cout << "Nhap 0 de thoat!";
		cin >> x;
	} while (x != 0);
	_getch();
}
void XuatSoCoBaoNhieuChuSo()
{
	unsigned long so_nd; //so_nguyen_duong 
	cout << "So nguyen duong: ";
	cin >> so_nd;
	if (so_nd < 10)
		cout << "So nguyen duong " << so_nd << " co 1 chu so.";
	else if (so_nd < 100)
		cout << "So nguyen duong " << so_nd << " co 2 chu so.";
	else if (so_nd < 1000)
		cout << "So nguyen duong " << so_nd << " co 3 chu so.";
	else if (so_nd < 10000)
		cout << "So nguyen duong " << so_nd << " co 4 chu so.";
	else if (so_nd < 100000)
		cout << "So nguyen duong " << so_nd << " co 5 chu so.";
	else if (so_nd < 1000000)
		cout << "So nguyen duong " << so_nd << " co 6 chu so.";
	else if (so_nd < 10000000)
		cout << "So nguyen duong " << so_nd << " co 7 chu so.";
	else if (so_nd < 100000000)
		cout << "So nguyen duong " << so_nd << " co 8 chu so.";
	else if (so_nd < 1000000000)
		cout << "So nguyen duong " << so_nd << " co 9 chu so.";
}