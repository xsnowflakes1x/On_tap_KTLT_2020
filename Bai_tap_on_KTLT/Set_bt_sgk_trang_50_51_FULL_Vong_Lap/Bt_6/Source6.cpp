#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào 1 số nguyên dương N. Cho biết trong khoảng từ 1 đến N
có bao nhiêu số vừa chia hết cho 2, vừa chia hết cho 3.

NOTE: if-else, for, switch-case đều dùng break được nhá !
*/
void SoChiaHetCho2Va3(int n);
void main()
{
	int x;
	do {
		cout << "Chuong trinh: Tim so chia het cho 2 va 3 bat dau\n";
		int n;
		cout << "Nhap vao so nguyen thu n:";
		cin >> n;
		cout << "\nSo chia het cho 2 va 3 cua " << "tu 1 den " << n << " la: "; SoChiaHetCho2Va3(n);
		cout << "\nNhap 0 de thoat: ";
		cin >> x;
	} while (x != 0);
	_getch();
}
void SoChiaHetCho2Va3(int n)
{
/* thay dấu phẩy bằng dấu chấm cho số gần cuối khá khó :((
ý tưởng là trong tất cả các số đã thỏa mà có số nào lớn nhất
thì sẽ thay , bằng . ví dụ: nhập n = 20 => 6, 12, 18. 
Làm sao để máy tính biết được 18 là giá trị thỏa cuối cùng
Dùng hàm + vòng lặp + mảng
*/
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0 && i % 3 == 0 && (i == n))
			cout << i << ".";
		
		else if (i % 2 == 0 && i % 3 == 0)
		{
			cout << i << " ";
		}		
	}
}
