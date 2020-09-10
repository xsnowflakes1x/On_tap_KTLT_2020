#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào 1 số nguyên dương N. Nhập vào N số nguyên dương. Cho biết trong N số vừa nhập có bao nhiêu
số chẵn, bao nhiêu số lẻ, bao nhiêu số âm, dương và bao nhiêu số bằng 0.
ví dụ: Nếu nhập N = 5 thì yêu cầu nhập thêm 5 số.
Giả sử nhập vào 5 số là: 4, -9, 24, 61, -48 thì kết quả là có 2 số âm, 3 số chẵn, 2 lẽ và không có số 0.
*/
void XuatKetQuaTheoYeuCauDeBai(int n);
void main()
{
	unsigned int x, n;
	do {
		cout << "Chuong trinh: Nhap N cac so va cho biet trong cac so do co bao nhiu so chan, le, am, duong va bao nhieu so 0.\n";
		cout << "Nhap so N: ";
		cin >> n;
		cout << "Ban phai nhap vao: " << n << " so.";
		cout << "\KQ: "; XuatKetQuaTheoYeuCauDeBai(n);
		cout << "\nNhap 0 de thoat: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void XuatKetQuaTheoYeuCauDeBai(int n)
{
	int a, soChan = 0, soLe = 0, soAm = 0, soDuong = 0, soKhong = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << "So thu " << i<<": ";
		cin >> a;
		if (a % 2 == 0)
			soChan++;
		else soLe++;
		if (a > 0)
			soDuong++;
		else if (a < 0)
			soAm++ ;
		else 
			soKhong++;
	}
	cout << "Co: " << soChan << " so chan." << endl;
	cout << "Co: " << soLe << " so le." << endl;
	cout << "Co: " << soDuong<< " so duong." << endl;
	cout << "Co: " << soAm << " so am." << endl;
	cout << "Co: " << soKhong << " so 0." << endl;
}