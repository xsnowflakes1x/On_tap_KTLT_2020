#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập 1 số nguyên dương N. Cho biết trong khoảng từ 1 đến N, tìm N số nguyên tố đầu tiên. Ví dụ N = 8
thì kết quả là: 2,3,5,7,11,13,17,19.
NOTE: if-else, for, switch-case đều dùng break được nhá !
*/
void TimNSoNguyenToDauTien(int n);
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Tim N so nguyen\n";
		int n;
		cout << "Nhap vao so nguyen thu n:";
		cin >> n;
		cout << "\nSo chia het cho 2 va 3 cua " << "tu 1 den " << n << " la: "; TimNSoNguyenToDauTien(n);
		cout << "\nNhap x: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void TimNSoNguyenToDauTien(int n)
{
	int dem; /* dùng để kiểm tra số nguyên tố: Đếm xem số đó có chia hết cho chính nó ko.
			 Nếu chia hết CHỈ cho chính nó thì đếm sẽ là 1 thôi biến dem > 1 không phải là sô nguyên tố
			 */
	int demSoLuongSNT = 0; // tương ứng số N người dùng nhập
	for (int a = 1; demSoLuongSNT < n; a++)
	{
		dem = 0; // dem PHẢI được gán = 0. Nếu 0 sẽ ko ra SỐ NGUYÊN TỐ (=> CHƯƠNG TRÌNH SAI)
		for (int i = 2; a >= i; i++)
		{
			if (a % i == 0)
			{
				dem++;
			}
		}
		if (dem == 1)// NẾU THỎA KẾT QUẢ NÀY => nó là số nguyên tố!
		{
			demSoLuongSNT++;
			cout << a << " ";
		}
		//if (demSoLuongSNT == n)  //<=> 	for (int a = 1; demSoLuongSNT <n ;a++)
			//break;
	}
}