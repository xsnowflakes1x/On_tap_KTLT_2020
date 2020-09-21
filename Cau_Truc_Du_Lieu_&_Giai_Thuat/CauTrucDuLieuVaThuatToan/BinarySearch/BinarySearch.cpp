#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);

int BinarySearch(int *a, int n);
void XuatMang(int *a, int &n);
void main()
{
	//int a[MAX] = { 12, 2, 8, 5, 1, 6, 4, 15 };
	int a[MAX] = { 1, 2, 4, 5, 6, 8, 12, 15 }; // PHẢI SẮP XẾP THEO THỨ TỰ !!

	int n = 8;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[] ;
	do {
		system("cls");
		cout << "\nChuong trinh kiem tra pt trong mang: ";
		XuatMang(a, n);
		cout << endl;
		int kq = BinarySearch(a, n);
		if (kq == -1)
			cout << "khong";
		else cout << "co x = " << a[kq];
		cout << "\n nhan ESC de thoat!";
	} while (_getch() != 27);

	_getch();
}
//void NhapMang(int *a, int &n)
//{
//	cout << endl << "Nhap mang: ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << "nhap pt[" << i << "] = ";
//		cin >> a[i];
//	}
//}
void XuatMang(int *a, int &n)
{
	cout << endl << "Xuat:";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

//int BinarySearch(int *a, int n) //NOTE: Thuật toán này yêu cầu bắt buộc là đã phải sắp xếp theo thư tự thì mới thực hiện được! 
//{
//	int x;
//	cout << "Thuat toan tim kiem BinarySearch: ";
//	int left = 0, right = n - 1;
//	cout << "nhap x: ";
//	cin >> x;
//	do {
//		int mid = (left + right) / 2;
//		if (a[mid] == x)
//			return mid;
//		else if (a[mid] > x)
//			right = mid - 1;
//		else 
//			left = mid + 1;
//	} while (left <= right); // => DẤU "<=" bắt buộc phải có dấu "="  
//	return -1;       // 1 trong 2 cái return này chắc chắn 1 cái được sử dụng nếu cái này dc sử dùng thì cái còn lại KHÔNG DÙNG!!
//}

int BinarySearch(int *a, int n)
{
	cout << "Nhap x: ";
	int x; cin >> x;
	int left = 0, right = n - 1;
	do
	{
		int mid = (left + right) / 2;
		if (a[mid] == x)
			return mid;
		else if (a[mid] > x)
			right = mid - 1;
		else left = mid + 1;
	}while (left <= right);
	return -1;
}