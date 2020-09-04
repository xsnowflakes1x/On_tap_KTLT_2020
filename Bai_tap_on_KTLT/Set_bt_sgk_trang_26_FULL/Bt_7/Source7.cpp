#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập 4 số. Xuất ra ba số theo trật tự từ nhỏ đến lớn
Bonus sắp xếp lun :)) (thuật toán sắp xếp - dùng toán tử điều kiện 
- Cách làm là: tìm max với min trước sau đó tìm mid nếu nhiều mid thì đặt mid1, mid2, mid3...)
rồi loại trừ từ từ là ra
*/
void TimSoNhoNhat_LonNhat();
void SapXep();
void main()
{
	//TimSoNhoNhat_LonNhat();
	SapXep();
	_getch();
}
void TimSoNhoNhat_LonNhat()
{
	int a, b, c, d;
	int max, min;
	cout << "Nhap vao 4 so:";
	cin >> a >> b >> c >> d;
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	cout << "so co gia tri lon nhat la: " << max;
	min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	cout << "so co gia tri nho nhat la: " << min;
}
void SapXep()
{
	int a, b, c, d;
	int max, min, mid1, mid2;
	cout << "Nhap vao 4 so:";
	cin >> a >> b >> c >> d;
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	min = (a < b) ? a : b;
	min = (min < c) ? min : c; 
	min = (min < d) ? min : d;

	mid1 = (max != a && min != a) ? a : ((max != b && min != b) ? b : ((max != c && min != c) ? c : d));
	mid2 = (max != a && min != a && mid1 != a) ? a : ((max != b && min != b && mid1 != b) ? b : ((max != c && min != c && mid1 != c) ? c : d));
	int mid_lon_nhat, mid_nho_nhat;					//dư
	mid_lon_nhat = (mid1 > mid2) ? mid1 : mid2;		// dư
	mid_nho_nhat = (mid2 < mid1) ? mid2 : mid1;		//dư
 	cout << "KQ: " << max << ", "<< mid_lon_nhat << ", "<< mid_nho_nhat << ", " << min;
	cout << "KQ: " << max << ", " << mid1<<", " << mid2<< ", " << min;
}