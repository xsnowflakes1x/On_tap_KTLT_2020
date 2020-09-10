#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình giải phương trình bậc 2 dạng ax^2+bx + c =0
*/
class TuyChinh: public exception
{
	const char* whatch()
	{
		throw "may nhap qua kich thuoc roi thang ngu lol!";
	}
}Ngoailecuatoi;

void Ham_nao_do()
{
	try
	{
		throw Ngoailecuatoi;
	}
	catch (TuyChinh& e)
	{
		cerr << e.what();
		// report here according to err
	}
}
//------------------TRÊN ĐÂY LÀ NGOẠI LỆ TÙY CHỈNH----------------------
void nhap();
void main()
{
	nhap();
	_getch();
}

void nhap()
{
	int age;
		cout << "Nhap tuoi di BA:))";
	try
	{
		cin >> age;
		if (std::cin.fail()) // std::cin.fail(): ngoại lệ này nghĩa là chỉ được nhập số thôi
			throw "nhap so di ba!";
		if (age < 0 || age > 122)
		{
			throw "nhap tuoi nho thoi dmm";
		}
		cout << "Tuoi ban la: " << age;
	}
	catch (const char* loi)
	{
		cerr << loi;
		// report here according to err
	}
}