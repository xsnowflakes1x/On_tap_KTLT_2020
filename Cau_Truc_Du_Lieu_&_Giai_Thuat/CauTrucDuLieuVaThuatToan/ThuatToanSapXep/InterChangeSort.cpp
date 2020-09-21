#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);
//int BinarySearch(int *a, int &n);
void InterChangeSort(int *a, int n);
void XuatMang(int *a, int &n);
void main()
{
	int a[MAX] = {12, 2, 8, 5, 1, 6, 4, 15};
	int n = 8;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[] ;

	InterChangeSort(a, n);
	XuatMang(a, n);
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
	cout << "Inter Change Sort: ";
	cout << endl << "Xuat:";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

//void InterChangeSort(int *a, int n) // Thuật toán đổi chỗ trực tiếp!
//{
//	for (int i = 0; i < n-1; i++) // n - 1 mà ghi n ???? //lun nhớ for đầu chỉ chạy tới n-1 ko chạy đến phần tử cuối cùng (nếu để n cũng dc nhưng lại tốn thêm lần ss)
//		for (int j = i+1; j < n; j++) // j++ mà ghi i++ ???
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//}
void swap(int &a, int &b)
{
	int temp;
	temp = a; 
	a = b;
	b = temp;
}