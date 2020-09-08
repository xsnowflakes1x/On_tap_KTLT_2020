#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào ngày, tháng, năm. Kiểm tra xem ngày, tháng năm đó có hợp lệ hay không?
ví dụ:
	- Nhập vào ngày là 27, tháng là 2, năm là 2013 thì kết quả là hợp lệ
	- Nhập vào ngày là 31, tháng là 4, năm là 2012 thì kết quả là không hợp lệ (tháng 4 chỉ có ngày từ 1 đến 30)
*/
// Dùng if - else thì đừng thiếu break !!!!
//Lưu ý không khởi tạo giá trị hậu quả là vòng lặp vô hạn!!
void KiemTraNgayThangNam();
void main()
{
	char x;
	do
	{
		KiemTraNgayThangNam();
		cout << "\nNhap 00 de thoat!";
		cin >> x;
	} while (x != 00);
	_getch();
}
void KiemTraNgayThangNam()
{
	int d, m, y;
	cout << "Chuong trinh bat dau:"<<endl;
	cout << "Nhap vao ngay, thang, nam: " << endl;
	cout << "Nhap ngay: ";
	cin >> d;
	cout << "Nhap thang: ";
	cin >> m;
	cout << "Nhap nam: ";
	cin >> y;
	if ((y > 1000 && y <= 2100) && (m > 0 && m <= 12) && (d >= 1 && d <= 31)) // kiểm tra năm nhập vào 
	{
		if ((y % 4 == 0 && y % 100) != 0 || y % 400 == 0) // nếu là năm nhuận
		{
			switch (m)
			{
			case 2: if (d > 29)
						 { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Khong hop le!"; break; }
					else { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Hop le!";  break; }

			case 4: case 6: case 9: case 11: if (d > 30)
												  { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Khong hop le!"; break; }
											 else { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Hop le!"; break; }

			default: if (d > 31)
						  { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Khong hop le!"; break; }
					 else { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Hop le!"; break; }
			}
		}
		else // năm ko nhuận
		{
			switch (m)
			{
			case 2: if (d > 28)
						 { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Khong hop le!"; break; }
					else { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Hop le!";  break; }
			case 4: case 6: case 9: case 11: if (d > 30)
												  { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Khong hop le!"; break; }
											 else { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Hop le!"; break; }
			default: if (d > 31)
						  { cout << "Ngay: " << d << "  Thang: " << m << " Nam: " << y << " => Khong hop le!"; break; }
					 else { cout << "Ngay: " << d << " Thang: " << m << " Nam: " << y << " => Hop le!"; break; }
			}
		}
	}
	else cout << "Ban nhap vao cac gia tri ko hop le! Vui long nhap lai nha!";
}

