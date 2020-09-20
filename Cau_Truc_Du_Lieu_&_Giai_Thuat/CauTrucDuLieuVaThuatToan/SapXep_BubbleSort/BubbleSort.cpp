#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);
//int BinarySearch(int *a, int &n);
void BubbleSort(int *a, int n);
void XuatMang(int *a, int &n);
void main()
{
	int a[MAX] = { 12, 2, 8, 5, 1, 6, 4, 15 };
	int n = 8;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[];
	BubbleSort(a, n);
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
	cout << "Thuat toan sap xep - Selection Sort: ";
	cout << endl << "Xuat:";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
//void BubbleSort(int *a, int n) // Thuật toán nổi bọt
//{
//	for (int i = 0; i < n; i++)
//		for (int j = n - 1; j > i; j--)
//			if (a[j] < a[j - 1])
//				swap(a[j], a[j - 1]);
//}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
