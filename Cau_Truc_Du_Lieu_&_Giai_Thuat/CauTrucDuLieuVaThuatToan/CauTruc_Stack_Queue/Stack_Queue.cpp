/*
Stack và queue được biểu diễn trên mảng 1 chiều và danh sách liên kết đơn
Cơ chế Stack = LIFO - vào sau ra trước
Cơ chế Queue = FIFO - vào trước ra trước
Tưởng tượng Stack, Queue là 1 container - THÙNG CHỨA và cho item vào đó. Nếu container đầy thì sẽ được lấy ra theo các khác nhau như sau
- Đối với Stack ta có thao tác Push(): đưa vào và thao tác Pop(): lấy ra,
đồng thời để biết container rỗng hay đầy ta dựng thêm isEmpty() và isFull()
và Top() dùng cho để xem thông tin giá trị phần tử ở đầu stack.
- Đối với Queue ta có thao tác EnQueue(): đưa vào và DeQueue: lấy ra, ta cũng dựng thêm isEmpty() và isFull()
và dùng Front() dùng cho để xem thông tin giá trị phần tử ở đầu queue.
. Lưu ý cơ chế isfull() chỉ xây dựng cho mảng
*/

// Biểu diễn stack bằng mảng 1 chiều
#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;
void createStack(int s[], int &n, int &t);
int isEmpty(int s[], int &t);
int isFull(int &t, int &n);
void Pop(int s[], int &n, int &t);
void showStack(int s[], int n, int t);
void ChuongTrinhStack();
void main()
{
	do
	{	
		system("cls");
		ChuongTrinhStack();
	} while (_getch() != 27);
	_getch();
}
void ChuongTrinhStack()
{
	int s[MAX];
	int n, x;
	int t = 0; // Top - vị trí đầu tiên của stack	
	s[t] = -1;
	cout << endl << "Chuong trinh Stack";
	cout << endl << "Nhap do dai thung chua - Stack: ";
	cin >> n;
	do
	{
		system("cls");
		cout << endl << "1. Push";
		cout << endl << "2. Pop";
		cout << endl << "3. Show";
		cout << endl << "Chon = ";
		cin >> x;
		switch (x)
		{
		case 1: createStack(s, n, t); break;
		case 2: Pop(s, n, t); break;
		case 3: showStack(s, n, t); break;
			cout << "Nhan ESC de thoat. Nhan enter de tiep tuc...";
		}
	} while (_getch() != 27);

}
void Push(int s[], int &n, int &t)// tạo stack;
{
	if (t < n)
	{
		int x;
		cout << endl << "Phan tu thu [" << t + 1<<"] = ";
		cin >> x;
		s[t] = x;
		t++;
	}
}
void createStack(int s[], int &n, int &t)// tạo stack;
{

	if (isEmpty(s, t))
	{
		t = 0;
		Push(s, n, t);
	}
	else if (isFull(t, n))
		cout <<endl << "stack day!";
	else Push(s, n, t);
}
void showStack(int s[], int n, int t)
{
	if (isEmpty(s, t))
		cout << "Stack rong khong co gi de show ca!";
	else 
	{
		cout << endl << "Phan tu trong stack hien tai: ";
		for (int i = 0; i < t; i++)
			cout << " " << s[i];
	}
}
int isFull(int &t, int &n)
{
	if (t >= n) return 1;
	return 0;
}
int isEmpty(int s[], int &t)
{
	if (s[t] == -1)
		return 1; // stack rỗng
	return 0;
}
void Pop(int s[], int &n, int &t)
{
	if (t > 0)
	{
		cout << endl << "xoa " << s[t-1] << " ra stack.";
		t--;
	}
}
// Biểu diễn stack bằng Queue 1 chiều