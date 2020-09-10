#include<iostream>
#include"conio.h"
using namespace std;
#define max1 3
#define max2 4 
void main()
{
	int sl;
	//cout << "Nhap so luong: " << endl;
	//cin >> sl;
	typedef int MaTran[max1][max2];
	MaTran m;
	/* Tham số kiểu mảng (m) HAY biến mảng truyền cho hàm  void NhapMaTran(int m[max1][max2]) chính
	là địa chỉ của phần tử đầu tiên của mảng &m <=> m <=> &m[0][0] */
	m[0][0] = 3;
	cout <<"dia chi cua mang: " << &m;
	cout << endl;
	cout << "bien mang m : " << m;
	cout << endl;
	cout << "Dia chi cua pt first: " << &m[0][0];
	cout << endl;
	cout << "Dia chi cua pt m[1][0]: " << &m[1][0];
	cout << endl;
	cout << "Dia chi cua pt m[1][2]: " << &m[1][2];
	_getch();
}

