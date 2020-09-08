#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình nhập tính tiền điện hàng tháng với đơn giá như sau:
100Kw đầu tiên giá 1242 đồng/Kw
50Kw tiếp theo giá 1304 đồng/Kw
50Kw tiếp theo giá 1651 đồng/Kw
Từ Kw thứ 201 trở lên giá 1912 đồng/Kw
Nhập vào chỉ số cũ, chỉ số mới. Tính số tiền phải trả (bao gồm 10% thuế VAT).
Ví dụ: 
Nhập chỉ số cũ là 100, chỉ số mới là 270 thì số điên tiêu thụ là 170, số tiền phải trả là:
	100 * 1.242 + 50 * 1.304 + 20 * 1.651 = 222.420 (**)

	(ở đây nó ko nói rõ 100kw đầu tiên sẽ nhân với giá nào thì tôi thêm lun!!
		cứ 100kw thì có hệ số là 1242 nghĩa là: 100kw --> 1242 vậy nhỏ hơn 100kw giả sử 57kw
		57kw là số điện tiêu thụ (so_dien_tieu_thu) 
		thì hệ số = (so_dien_tieu_thu *1242) / 100 thì có hệ số(he_so)
		=> tiền tiêu thụ (TongTienDien) = so_dien_tieu_thu * he_so;)

		GỢI Ý: đặt 2 biến 1 cái là kiểm tra điều kiện, 1 cái là dùng để tách giống cái trên này => (**) 

Áp dụng thử toán tử 3 ngôi - toán tử điều kiện. 
*/
void TinhTienDien();
void main()
{
	TinhTienDien();
	_getch();
}
void TinhTienDien()
{

	int chi_so_cu, chi_so_moi, so_dien_tieu_thu, TongTienDien, he_so, chi_so_da_dung_dau_tien, so_dien_con_lai;
	cout << "Nhap chi so cu: ";
	cin >> chi_so_cu;
	cout << endl;
	cout << "Nhap chi so moi: ";
	cin >> chi_so_moi;
	so_dien_tieu_thu = abs(chi_so_cu - chi_so_moi);
	chi_so_da_dung_dau_tien = so_dien_tieu_thu;
	//int _100Wk_dautien;
	//_100Wk_dautien = so_dien_tieu_thu % 10; //%100 / %1000
	if (so_dien_tieu_thu < 100) // phần này là bổ sung thêm ko có trong bài
	{
		he_so = (so_dien_tieu_thu * 1242) / 100;
		TongTienDien = so_dien_tieu_thu * he_so;
	}

	else  // giả sử sdtt = 170kw
	{
		TongTienDien = 100 * 1242;
		so_dien_con_lai = so_dien_tieu_thu - 100;
			if (so_dien_con_lai >= 50)
			{
				TongTienDien += 50 * 1304;
				so_dien_con_lai = so_dien_con_lai - 50;
				if (so_dien_con_lai >= 50)
				{
					TongTienDien += 50 * 1651;
					so_dien_con_lai = so_dien_con_lai - 50;
					if (so_dien_con_lai >= 50)
					{
						so_dien_con_lai = so_dien_tieu_thu - 200;
						TongTienDien += so_dien_con_lai * 1912; //Điện tiêu thụ còn dư 
					}
					else 
					{
						TongTienDien += so_dien_con_lai * 1912;
					}
				}
				else
				{
					TongTienDien += so_dien_con_lai * 1651;
				}
			}
			else
			{
				TongTienDien += so_dien_con_lai * 1304;
			}
		}
	cout << "Chi so cu: " << chi_so_cu << " va " << "Chi so moi: " << chi_so_moi <<"\n==> Chi so da tieu thu = "<< so_dien_tieu_thu<<endl;
	int VAT;
	VAT = TongTienDien *0.1;
	TongTienDien += VAT;
	cout << "Tong tien phai tra la: " << TongTienDien <<" dong";
}
