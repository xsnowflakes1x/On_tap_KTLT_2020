#include<iostream>
#include<conio.h>
//#include <cstdlib>
//#include <time.h>
using namespace std;
/*
Xây dựng chương trình mô phỏng trò chơi đóa số cùng máy tính như sau:
- Tạo 1 số nguyên ngẫu nhiên nằm trong khoảng từ 1 đến 100 (ẩn số)
- Người chơi nhập vào 1 số. Nếu chưa đoán đúng ẩn số thì người chơi sẽ đoán lại.
- Trò chơi sẽ kết thúc khi người chơi đoán chúng ẩn số (người chơi thắng), hay khi người chơi đã đoán 7 lần
(người chơi thua)
Hướng dẫn:
Dùng lệnh srand() để khởi tạo cơ chế tạo số ngẫu nhiên.
Dùng lệnh rand() % (max - min + 1) + min để tạo 1 số nguyên dương ngẫu nhiên nằm trong khoảng từ 0 đến N - 1
*/
#include<time.h>
void XSKT();
void main()
{
	int x;
	do {
		XSKT();
		cout << "\nNhap x: ";
		cin >> x;
		system("cls");
	} while (x != 0);
	_getch();
}
void XSKT()
{
	int n, kq;
	cout << "Tro choi trung so doc dac: \n";
	cout << "Nhap vao so bat ki tu 0 - 10: " << endl;
	cin >> n;
	srand((int)time(0)); // hàm cho ra số ngẫu nhiên
	kq = rand() % (10 - 0 + 1) + 0;
	cout << "So ban da nhap: " << n<<endl; // hàm cho ra số từ [0 - 10]
	if (kq == n)
	{
		cout << "=> XIN CHUC MUNG BAN DA TRUNG 10.000.000.000 TY"<<endl;
		cout << "KET QUA XSKT: " << kq << endl;
	}
	else 	cout << "KET QUA XSKT: " << kq << endl;
	
}
