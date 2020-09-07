#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình nhập vào tháng, năm. Hãy cho biết tháng đó có bao nhiêu ngày. Lưu ý: Năm có thể là năm thường 
hoặc năm nhuận (Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100 hoặc là chia hết cho 400).
Ví dụ: 
- Nhập vào tháng 3 năm 2013 thì kết quả là: tháng có 31 ngày
- Nhập vào tháng 2 năm 2000 thì kết quả là: tháng có 29 ngày
*/
void ChonDeTinhDienTich();
void main()
{
	ChonDeTinhDienTich();
	_getch();
}
void ChonDeTinhDienTich()
{
	int m, y;
	cout << "Nhap thang: ";
	cin >> m;
	cout << endl;
	cout << "Nhap nam: ";
	cin >> y;
	switch (m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "Thang " << m << " co 31 ngay."; break;
		case 4: case 6: case 9: case 11: cout << "Thang " << m << " co 30 ngay."; break;
		default: if (y % 4 == 0 && y % 100 != 0) 
				 {
					cout << "Thang " << m << " co 29 ngay."; break;
				 }
				 else if (y % 400 == 0)
				 {
					 cout << "Thang " << m << " co 29 ngay."; break;
				 }
				 else 
				 {
					 cout << "Thang " << m << " co 28 ngay."; break;
				 }
	}
}