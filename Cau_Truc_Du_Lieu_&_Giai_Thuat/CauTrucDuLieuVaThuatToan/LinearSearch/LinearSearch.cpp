#include <iostream>
#include<conio.h>
using namespace std;
#define MAX 10
//void NhapMang(int *a, int &n);
//int BinarySearch(int *a, int &n);
int LinearSearch(int *a, int n);
int LinearSearch2(int *a, int n);
void XuatMang(int *a, int &n);
void main()
{
	int a[MAX] = { 12, 2, 8, 5, 1, 6, 4, 15 };
	int n = 8;
	//cout << "nhap vao n phan tu: ";
	//cin >> n;
	//NhapMang(a, n);
	//cout << a[] ;
	do{
		system("cls");
		cout << "\nChuong trinh kiem tra pt trong mang: ";
		XuatMang(a, n);
		if (LinearSearch(a, n) == 1)
			cout << "co";
		else cout << "khong";
		cout << endl;
		int kq = LinearSearch2(a, n);
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

int LinearSearch(int *a, int n) // sắp xếp tăng dần
{	
	int x;
	cout << endl<< "Tim kiem LinearSearch => ";
	cout << "nhap x: ";
	cin >>x;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return 1;
	return -1;
}
/*Tim kiem LinearSearch2 - co linh canh sắp xếp tăng dần 
- Thuật toán này cải thiện: giảm được số lần so sánh!
- để lính cánh ở cuối để chắc chắn là sẽ TÌM THẤY X - để thỏa dk
- MÀ khi tìm thấy x thì TH: tìm thấy x ở cuối mảng là ko hợp lệ! => mục đích này
vừa bớt được 1 phép so sánh (i<n) mà lại còn thỏa dk để ngắt vòng lặp
*/
int LinearSearch2(int *a, int n) 
{
	int x, i;
	cout << endl << "Tim kiem LinearSearch2 - co linh canh => ";
	cout << "nhap x: ";
	cin >> x;
	a[n] = x;
	for (i = 0; a[i] != x; i++);
	if (i == n)
		return -1;
	return i;
}
