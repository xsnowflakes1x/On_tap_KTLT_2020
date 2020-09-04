#include<iostream>
#include<conio.h>
using namespace std;

/*Nhập vào tổng số giây. Đổi số giây thành giờ, phút và giây rồi xuất ra.
*/
void DoiGiay(int &s);
void main()
{
	int s = 0;
	cout << "Nhap vao tong giay: "; 
	cin >> s;
	DoiGiay(s);
	_getch();
}
void DoiGiay(int &s)
{
	int h = 0, m = 0, du = 0, ss = 0;
	h = s / 3600;
	du = s % 3600; // du = dư nghĩa là lấy số dư trong phần giờ để tính phút và dây
	m = du / 60; // 
	(m < 60) ? (m, ss = du % 60) : (ss = m % 60, m = (m-ss)/60 );
	/*nếu biểu thức 1: (m < 60) đúng sẽ thì sẽ qua biểu thức 2: (m, ss = du % 60) tính số giay còn dư 
	sai : tức là m > 60 nghĩa là: m lớn nhất thì chỉ là 60' còn phần dư còn lại của m sẽ là ss theo ct: (ss = m % 60, m = (m-ss)/60 )

	Cách làm: Tôi lấy ví dụ thức tế từ số 7285 và suy ra được công thức này (ss = m % 60, m = (m-ss)/60 )  
	*/
	cout << h << "h : " << m << "m : " << ss <<"ss";
}
