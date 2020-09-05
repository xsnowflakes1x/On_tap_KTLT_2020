#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập 3 số thực. Hãy thay tất cả các số âm bằng trị tuyệt đối của nó
ví dụ: a = 2 b = -5 c = -8
Kết quả: a = 2 b = 5 c = 8
*/
void ThaySoAmBangTriTuyetDoi();
void main()
{
	ThaySoAmBangTriTuyetDoi();
	_getch();
}
void ThaySoAmBangTriTuyetDoi()
{
	float a, b, c;
	cout << "Nhap 3 so thuc: ";
	cin >> a >> b >> c;
	if (a < 0 || b < 0 || c < 0)
	{
		cout << "a = " << fabs(a) << endl;
		cout << "b = " << fabs(b) << endl;
		cout << "c = " << fabs(c) << endl;
	}
}