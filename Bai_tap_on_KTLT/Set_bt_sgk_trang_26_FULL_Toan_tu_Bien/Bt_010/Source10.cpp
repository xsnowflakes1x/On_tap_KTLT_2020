#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào 2 phân số, mỗi phân số gồm tử và mẫu. Tính tổng và tích hai phân số rồi xuất kết quả dạng số thập phân
*/
void TinhTong_TichPhanSo();
void main()
{
	TinhTong_TichPhanSo();
	_getch();
}
void TinhTong_TichPhanSo()
{
	int mau1, mau2, tu1, tu2, Tich_tu, Tich_mau, Cong_tu;
	cout << "Nhap tu 1: ";
	cin >> tu1;
	cout << "Nhap tu 2: ";
	cin >> tu2;
	cout << "Nhap mau 1: ";
	cin >> mau1;
	cout << "Nhap mau 1: ";
	cin >> mau2;
	Tich_tu = tu1 * tu2;
	Tich_mau = mau1 * mau2;
	Cong_tu = tu1 * mau2 +  tu2 * mau1;
	cout << "Tich = " << Tich_tu << " \\ " << Tich_mau<<endl;
	cout << "Cong = " << Cong_tu << " \\ " << Tich_mau;

}
