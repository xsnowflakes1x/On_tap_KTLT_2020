#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
/*
Giống nhau: đề là chuỗi!
char A[] = “Hello world”;
string A = “Hello world”;

Khác nhau: string vs char[] 
Trên là mảng char chả hạn để char [5] thì chỉ đc ghi 4 kí tự thôi (kí tự cuối cùng là kí tự null)
Còn dưới là string, ghi bao nhiêu kí tự tùy thích vì bàn chất của thằng này là dùng con trỏ (MẢNG ĐỘNG)

string hay đi cùng getline(cin, 'biến'),cout, lấy độ dài chuỗi: x.length() hoặc .size(), ss độ dài 2 chuỗi: (str1.compare(str2) == 0)

char[] hay đi cùng gets_s(), puts(), lấy độ dài chuỗi: strlen(), strcmp(): ss độ dài 2 chuỗi
cin.ignore(1); HOẶC fflush(stdin); Do may tinh se dừng khi gặp ký tự khoảng trắng nên thêm 1 O 2 cái trên hàm nhập

*/

void main()
{
	//char a[5];
	string b;
	cout << "Nhap:\n ";
	fflush(stdin);
	getline(cin,b);
	//gets_s(a);
	cout << "Chuoi ban da nhap: ";
	cout << b;
	//puts(a);
	int dem = 0;
	for (int i = 0; i < b.length(); i++)
		if (b[i] == 't')
			dem++;
	cout << "\n Dem ky tu \"t\"" <<dem;
	//cout<<a[3];
	string n = { "truc" };
	string m = { "truc" };
	if (n.compare(m) == 0)
		cout << "\nBang nhau";
	_getch();
}