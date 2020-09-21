#include <iostream>
#include<conio.h>
using namespace std;
typedef struct Node // kiểu thành phần trong danh sách
{
	int info;
	Node *pNext;
}N;
typedef struct
{
	Node *pHead;
	Node *pTail;
}List;

void ManHinhChinh(int &x, List &l);
void ThemCacPhanTuVaoDauDS(List &l);
void ThemCacPhanTuVaoCuoiDS(List &l);
Node* KiemTraCoNode_q(Node *q, List &l);
Node* GetNode(int x)
{
	Node *e = new Node;// cấp phát vùng nhớ cho biến động kiểu Node
	if (e == NULL)
	{
		cout << "Khong The Cap Phat Bo Nho!";
		exit(1);
	}
	else
	{
		e->info = x; // biến động nè pà kon =))
		e->pNext = NULL;
	}
	return e; //trả về địa chỉ đối tượng mà e lưu 
}
void InsertHead(int x, List &l) // thêm đầu
{
	Node *e = GetNode(x); // thiếu chỗ này!!
	if (l.pHead == NULL)
		l.pHead = l.pTail = e; // sai chỗ này!!!!  -- con trỏ gán phằng con trỏ @@
	else // chèn vào đầu danh sách
	{
		e->pNext = l.pHead;
		l.pHead = e;
	}
}
void InsertTail(int x, List &l) // Thêm cuối
{
	N *p = GetNode(x);
	if (l.pTail != NULL)  //(p != NULL) => sai //Khi đặt (p != NULL) thì điều kiện đầu tiên sẽ thỏa mà l.pTail
						  //chưa đc gán bằng địa chỉ p, nên ko có thuộc tính "pTail -> next"
						  //=>nên sẽ gây lỗi chương trình  
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
	else
	{	
		l.pHead = l.pTail = p;
	}
}
void InsertAfter(List &l)
{
	cout << "\n	Ban muon them sau node q nao:)";
	int node_q, x;
	cin >> node_q;
	Node * q = GetNode(node_q);
	cout << "\n Nhap x ban muon chen vao " << q->info<<"<- ";
	cin >> x;
	Node *p = GetNode(x);
	q = KiemTraCoNode_q(q,l); // phải trả về địa chỉ q có trong danh sách mới ra nhá !!
	if (q != NULL)
	{
		p->pNext = q->pNext;
		q->pNext = p;
		if (l.pTail == q) // 2 địa chỉ bằng nhau 
			l.pTail = p;
	}
	else
		InsertHead(x, l);
}
Node* KiemTraCoNode_q(Node *q, List &l)
{
	for (Node *i = l.pHead; i != NULL; i = i->pNext)
		if (i->info == q->info)
		{
			q = i;
			return q; // trả về q - mang địa chỉ trong ds 
		}
	return NULL;
}
//void OutPut(List &l) // sẽ có lỗi khi ta thêm danh sách cũ vào ds mới
//{
//	cout << endl << "Xuat Danh Sach Lien Ket: ";
//	l.pHead;
//	while (l.pHead != NULL)
//	{
//		cout << l.pHead->info;
//		if (l.pHead->pNext == NULL)
//			cout << ".";
//		else cout << ", ";
//		l.pHead = l.pHead->pNext;
//	}
//}
void OutPut(List &l)
{
	cout << endl << "Xuat Danh Sach Lien Ket: ";
	Node * dsTam;
	dsTam = l.pHead;
	while (dsTam != NULL)
	{
		cout << dsTam->info;
		if (dsTam->pNext == NULL)
			cout << ".";
		else cout << ", ";
		dsTam = dsTam->pNext;
	}
}
void main()
{
	List l;
	l.pHead = l.pTail = NULL;
	int x;
	do
	{
	system("cls");
	ManHinhChinh(x, l);
	cout << endl << "\t Nhan ESC de thoat chuong trinh...Enter de tiep tuc! ";
	} while (_getch() != 27);

	_getch();
}

void ManHinhChinh(int &x, List &l)
{
	int tt;// thao tác
	cout << endl << "\t-------------------------------Begin-------------------------------";
	cout << endl << "\t\t CHUONG TRINH DANH SACH LIEN KET - LINK LIST 2020";
	cout << endl << "\t\t Moi ban chon thao tac: ";
	cout << endl << "\n\t\t 1. Them phan tu vao vi tri dau danh sach: ";
	cout << endl << "\t\t 2. Them phan tu vao vi tri cuoi danh sach:";
	cout << endl << "\t\t 3. Them phan tu vao danh sach sau mot phan tu q:";
	cout << endl << "\n\t\t Nhan 0 de xem DSLK: ";
	cout << endl << "\t--------------------------------End--------------------------------";
	cout << endl << "\t=>Nhap tt: ";
	cin >> tt;
	cout  << " \t=>Ban dang lua chon thao so " << tt<<".";
	switch (tt)
	{
			case 1: ThemCacPhanTuVaoDauDS(l); break;
			case 2: ThemCacPhanTuVaoCuoiDS(l); break;
			case 3:	InsertAfter(l); break;
			case 0: OutPut(l); break;
			default: cout << "\t\t!!!Ban phai chon dung SO trong MENU!!!";
	}
}
void ThemCacPhanTuVaoDauDS(List &l)
{
	int x, i = 0;
	cout << endl << "Nhan phim 0 de dung nhap!";
	do
	{
		cout << endl << "Nhap phan tu " << i++ << " : ";
		cin >> x;
		if (x != 0)
		{
			InsertHead(x, l);
		}
	} while (x != 0);
}
void ThemCacPhanTuVaoCuoiDS(List &l)
{
	int x, i = 0;
	cout << endl << "Nhan phim 0 de dung nhap!";
	do
	{
		cout << endl << "Nhap phan tu " << i++ << " : ";
		cin >> x;
		if (x != 0)
		{
			InsertTail(x, l);
		}
	} while (x != 0);
}