#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);
//int BinarySearch(int *a, int &n);
void QuickSort(int *a, int l, int r);
void XuatMang(int *a, int &n);
void main()
{
	//int a[MAX] = { 12, 2, 8, 5, 1, 6, 4, 15 };
	int a[MAX] = { 2, 8, 5, 4, 7, 1 };
	int n = 6;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[];
	int l = 0, r = n-1;
	QuickSort(a,l,r);
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
	cout << "Thuat toan sap xep - Quick Sort: ";
	cout << endl << "Xuat:";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void QuickSort(int *a, int l, int r) // Thuật toán sắp xếp nhanh
{
	int i, j, x;
	i = l;
	j = r;
	x = a[(l + r) / 2];
	do
	{
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <=j) // Quan trọng! - Nếu i ko bằng j thì i++ j-- sẽ ko thỏa j>i để THOÁT vòng lặp
		{
			swap(a[i], a[j]);
			i++; j--;
		}
	} while (i < j);
	if (l < j)
	QuickSort(a, l, j);
	if (i < r)
	QuickSort(a, i, r);
}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}