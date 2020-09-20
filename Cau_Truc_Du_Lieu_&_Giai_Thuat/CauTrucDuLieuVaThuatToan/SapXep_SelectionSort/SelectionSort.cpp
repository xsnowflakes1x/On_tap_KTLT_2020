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

//void SelectionSort(int *a, int n) // Thuật toán chọn trực tiếp!
//{
//	for (int i = 0; i < n - 1; i++) //  vòng lặp 1 có thể đặt i<n ? =>có thể nhưng vì nếu đặt i<n vòng lặp sẽ TỐN THÊM 1 lần ss lại với chính nó => thuật toán ko hiệu quả
//	{
//		int min = i;	/* VẤN ĐỀ VỀ vị trí và giá trị: min ở đây là chỉ số (VỊ TRÍ)!! Nên gán min = a[i] vị trị = giá trị là ko hợp lí! 
//						(HAY TƯỞNG TƯỢNG CÓ 1 CÔ GÁI ĐI SHOPPING CÙNG 1 CHIẾC CART VÀ LỰA \ CHỌN: SELECT MÓN HÀNG CÓ GIÁ TRỊ NHỎ NHẤT TRONG HÀNG ĐỂ BỎ VÀO CART ĐÓ 
//						VỚI MIN - I LÀ VỊ TRÍ 1 CHIẾC XE ĐẨY (CART) CHỨA MÓN HÀNG (ITEM) CHÍNH LÀ GIÁ TRỊ a[i]/ a[j]/a[min] 
//						VÀ CHIẾC XE ĐẤY DI CHUYỂN TỪ VỊ TRÍ ĐẦU ĐẾN VỊ TRÍ CUỐI HÀNG (MẢNG)) VÀ NHỮNG MÓN HÀNG LÀ CÁI MÀ TA PHẢI SẮP XẾP*/
//		for (int j = i + 1; j < n; j++) //tương tự vòng lặp 2 có thể đặt i = j ? => CÓ THỂ NHƯNG vì nếu đặt i = j vòng lặp sẽ TỐN THÊM 1 lần ss lại với chính nó
//		{									// thật ra 2 vòng lặp này đang xử lý cho công việc: - Chọn phần tử nhỏ nhất trong N phần tử đâu tiên 
//			if (a[min] > a[j])
//				min = j;// a[min] = a[j];
//		}
//		swap(a[min], a[i]);
//	}
//}

//Bên dưới là cách làm và tư duy sai!! 
//Lưu ý: khi ta tạo min ta hay nhầm tưởng min chứa giá trị nên gán min = a[i] là lấy min này đi ss với a[j] khác trong mảng! và đổi!  
/*void SelectionSort(int *a, int n) // Thuật toán đổi chỗ trực tiếp!
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = a[i];
		for (int j = i + 1; j < n; j++)
		{
			if (min> a[j])
				min = a[j];// a[min] = a[j];
		}
		swap(min, a[i]); // thật ngớ ngẩn khi lấy min: 1 giá trị ngoài mảng so sánh với a[i] trong mảng!
	}
}*/
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
