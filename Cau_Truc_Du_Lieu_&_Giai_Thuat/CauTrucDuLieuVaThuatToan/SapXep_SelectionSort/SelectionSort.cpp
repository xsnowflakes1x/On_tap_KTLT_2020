#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);
//int BinarySearch(int *a, int &n);
void SelectionSort(int *a, int n);
void XuatMang(int *a, int &n);
void main()
{
	int a[MAX] = { 12, 2, 8, 5, 1, 6, 4, 15 };
	int n = 8;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[];
	SelectionSort(a, n);
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

void SelectionSort(int *a, int n) // Thuật toán đổi chỗ trực tiếp!
{
	for (int i = 0; i < n - 1; i++) //  vòng lặp 1 có thể đặt i<n ? =>có thể nhưng vì nếu đặt i<n vòng lặp sẽ TỐN THÊM 1 lần ss lại với chính nó => thuật toán ko hiệu quả
	{
		int min = i; // gán min = a[i] vì thay đổi giá trị?? // min ở đây là chỉ số!! 
		for (int j = i; j < n; j++) //tương tự vòng lặp 2 có thể đặt i = j ? => CÓ THỂ NHƯNG vì nếu đặt i = j vòng lặp sẽ TỐN THÊM 1 lần ss lại với chính nó
		{
			if (a[min] > a[j])
				min = j;// a[min] = a[j];
		}
		swap(a[min], a[i]);
	}
}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
