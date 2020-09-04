#include<iostream>
#include<conio.h>
using namespace std;
/*nhập vào giờ và phút thuê máy, nhập giờ và phút trả máy.
Tính thời gian thuê và tiền phải trả, biết rằng 1 giờ thuê là 3000
*/
void TinhThanhTien();
void TinhThanhTien2();
void main()
{
	cout << "Chuong trinh quan NET online danh cho SV bat dau :v \n";
	TinhThanhTien();
	cout << endl;
	TinhThanhTien2();
	_getch();
}

void TinhThanhTien()
{
	int TongTien = 0, TongTienPhut = 0, TongGioThue = 0, TongPhutThue = 0, GioThue = 0, GioTra = 0, PhutThue = 0, PhutTra = 0;
	cout << "Gio thue: ";
	cin >> GioThue;
	cout << "\n Phut thue: ";
	cin >> PhutThue;
	cout << "==========================" << endl;
	cout << "Gio tra: ";
	cin >> GioTra;
	cout << "\n Phut tra: ";
	cin >> PhutTra;

	TongGioThue = abs(GioThue - GioTra);
	TongPhutThue = abs(PhutThue - PhutTra);

	if (TongPhutThue >= 0 && TongPhutThue <= 15)

		TongTienPhut = 750;

	else if (TongPhutThue > 15 && TongPhutThue <= 30)

		TongTienPhut = 1500;

	else if (TongPhutThue > 30 && TongPhutThue <= 45)
		TongTienPhut = 2250;
	else
		TongTienPhut = 3000;

	TongTien = TongGioThue * 3000 + TongTienPhut;

	cout << "Tong gio choi net cua ban la = " << TongGioThue << " gio :" << TongPhutThue << " phut " << endl;
	cout << "Tong tien cua ban la = " << TongTien;
}

void TinhThanhTien2()
{
	int TongTien = 0, TongTienPhut = 0, TongGioThue = 0, TongPhutThue = 0, GioThue = 0, GioTra = 0, PhutThue = 0, PhutTra = 0, TongGioCongPhut = 0;
	cout << "Gio thue: ";
	cin >> GioThue;
	cout << "\n Phut thue: ";
	cin >> PhutThue;
	cout << "==========================" << endl;
	cout << "Gio tra: ";
	cin >> GioTra;
	cout << "\n Phut tra: ";
	cin >> PhutTra;

	TongGioThue = abs(GioThue - GioTra);
	TongPhutThue = abs(PhutThue - PhutTra);

	TongGioCongPhut = (TongPhutThue + TongGioThue * 60);
	// biết 1 tiếng = 60' thì --> 3000d => x' = (x'*3000)/60 
	TongTien = (TongGioCongPhut * 3000) / 60;
	cout << "Tong gio choi net cua ban la = " << TongGioThue << " gio :" << TongPhutThue << " phut " << endl;
	cout << "Tong tien cua ban la = " << TongTien;
}

