#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);
//int BinarySearch(int *a, int &n);
void InsectionSort(int *a, int n);
void XuatMang(int *a, int &n);
void main()
{
	int a[MAX] = { 12, 2, 8, 5, 1, 6, 4, 15 };
	int n = 8;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[];
	InsectionSort(a, n);
	//BinaryInsertionSort(a, n);
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
//void InsectionSort(int *a, int n) // Thuật toán chèn trực tiếp
//{
//	int pos, i;
//	for (int i = 1; i < n; i++)
//	{
//		int x = a[i];
//		pos = i - 1;// vị trí đã sắp xếp (giả sử đã sắp xếp)
//		while (pos >= 0 && a[pos] > x)
//		{
//			a[pos + 1] = a[pos];
//			pos--; //vị trí dời tiếp theo
//		}
//		a[pos + 1] = x; // nếu ko đúng dk trong vòng lặp thì ta đẩy vị trí pos-- này lên lại vị trí cần dời ở hiện tại
//	}
//}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
