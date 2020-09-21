#include<iostream>;
#include"conio.h";
using namespace std;
void main()
{
	// lưu ý về con trỏ 
	/*
	biến con trỏ có thể khai báo & khởi tạo như sau
	int *p; 
	p = 0; 
	OR  int *p = 0;
	------------------------
	int *p = 0;
	int a = 2;
	cout<< p; OR cout<< &p như nhau --> điều lấy địa chỉ con trỏ
	cout<<p*; --> lấy giá trị;	
	-----------------
	con trỏ đa cấp: point to point to point... 
	int ***p;
	
	Để lấy địa chỉ của một biến, sử dụng address-of operator &.
	
	
	*/
	int a = 3;
	int b = 0;
	int *pta;    
	int **ptb;	 
	int ***ptc;
	int *p_cap1;

	pta = &a;    //pta có địa chỉ của a pta -> địa chỉ a
	p_cap1 = pta; // 2 con trỏ cấp một gán cho nhau KHÔNG CÓ dấu "&"
	ptb = &pta; // ptb có địa chỉ của pta pt
	ptc = &ptb; // ptc có ptb

	cout << "dia chi cua a: " << &a << endl;
	cout << "dia chi cua a: " << pta<< endl;
	cout << "dia chi cua con tro pta: " << &pta << endl;
	cout << "dia chi cua pta: " << ptb << endl;
	cout << "dia chi cua ptb: " << ptc << endl;

	cout <<"&a: "<< &a << endl;
	cout <<"ptb: "<< ptb << endl;
	cout <<"pta: "<<pta << endl;
	cout << "ptc: " << ptc << endl;
	cout << "*ptc: "<<*ptc << endl;
	cout << "**ptc: " << **ptc << endl;
	cout << "***ptc: " << ***ptc << endl;
	**ptc = &b;
	cout << ***ptc << endl;;
	***ptc = *(&b);
	cout << ***ptc << endl;;
	_getch();
}
//Trò chơi tự tạo :))
//int *Xuat();
//void main()
//{
//	int *kq;
//	kq = Xuat();
//	cout << *kq;
//	_getch();
//}
//int *Xuat()
//{
//	int *x;
//	int a = 7;
//	x = &a;
//	*x = *x * 7;
//	return x;
//}

//Trò chơi tự tạo 2 :))
void *Xuat();
void main()
{
	cout << Xuat();
	_getch();
}
void *Xuat()
{
	int *x;
	int a = 7;
	x = &a;
	*x = *x * 7;
	return x; // lúc nào cũng phải return dù nó là void
}