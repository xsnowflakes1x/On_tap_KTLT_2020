#include<iostream>
#include"conio.h"
using namespace std;
/* tìm hiểu lại khối khai báo, khối hàm main, khối định nghĩa hàm
01_OOP_OnTapKTLT - thầy Vân
*/
//------------------------------------------------------------
//code thường
//
//void Hieu(int &a, int &b);
//void Tong(int &a, int &b);
//void main()
//{
//	cout << "aa";
//	void (*tinh)(int &a, int &b); // void *tinh(int a);--> đây có phải con trỏ hàm?
//	tinh = &Hieu;
//	int c = 5, d = 6, T = 0;
//	cout << "\n Ket qua: "; (*tinh)(c, d);
//	_getch();
//}
//
//void Tong(int &a, int &b) 
//{
//	int t = 0;
//	t = a + b;
//	cout << "Tong la: " << t;
//}
//
//void Hieu(int &a, int &b)
//{
//	int h = 0;
//	if (a < b)
//		cout << "Ko hop le!!";
//	else
//	{
//		h = a - b;
//		cout << "Hieu la:" << h;
//	}
//}

//------------------------------------------------------------
// Nâng cấp code
/* do ta vừa "định nghĩa" kiểu (con trỏ hàm) void (*tinh)(int &a, int &b); TRONG HÀM MAIN
và muốn sử dụng nó lại nhiều lần thì cần dùng từ khóa "typedef" cho tiện khỏi phải
"định nghĩa" lại với keyword! 
*/
void Hieu(int &a, int &b);// khai báo hàm
void Tong(int &a, int &b); // khai báo hàm
typedef void(*tinh)(int &a, int &b); // định nghĩa kiểu con trỏ hàm
void main()
{
	cout << "CON TRO HAM";
	//void(*tinh)(int &a, int &b);  // bỏ dòng này
	//tinh = &Hieu; // bỏ dòng này
	tinh t1,t2; // khai báo biến t1, t2 để sử dụng
	t1 = Hieu;// GÁN ĐỊA CHỈ HÀM HIỆU CHO T1 (có 2 cách gán)
	t2 = &Tong;
	int c = 5, d = 6, T = 0;// khai báo và khởi tạo giá trị
	cout << "\n Ket qua Hieu: "; t1(d, c); /*(*tinh)(c, d);*/ //bỏ đoạn này
	cout << "\n Ket qua Tong: "; t2(c, d);// GỌI HÀM -> nhớ mấy thuật ngữ này
	_getch();
}

void Tong(int &a, int &b) // định nghĩa hàm
{
	int t = 0;
	t = a + b;
	cout << "Tong la: " << t;
}

void Hieu(int &a, int &b)// định nghĩa hàm
{
	int h = 0;
	if (a < b)
		cout << "Ko hop le!!";
	else
	{
		h = a - b;
		cout << "Hieu la:" << h;
	}
}