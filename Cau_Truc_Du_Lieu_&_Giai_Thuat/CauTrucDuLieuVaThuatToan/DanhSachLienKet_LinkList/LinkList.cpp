//XÂY DỰNG DANH SÁCH LIÊN KẾT ĐƠN
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
Node* KiemTraCoNode_q(Node *q, List &l); // của hàm thêm vào sau
Node* KiemTraX(int &x, List &l);
Node* KiemTraCoNode_q_TruocKhiHuy(Node *q, List &l); // của hàm hủy nút sau
void HuyPhanTuCoKhoaK(List &l); // Hủy khóa K (xem kỹ)
void HuyToanBoNho(List &l); // Hủy toàn bộ bộ nhớ
Node* GetNode(int x)
{
	Node *e = new Node;// cấp phát vùng nhớ cho biến động kiểu Node
	if (e == NULL)
	{
		cout << "\t =>Khong The Cap Phat Bo Nho!";
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
		l.pHead = l.pTail = p;
}
void InsertAfter(List &l) // thêm sau một phần tử q
{
	cout << "\n\t	Ban muon them sau node q nao:)";
	int node_q, x;
	cin >> node_q;
	Node * q = GetNode(node_q);
	cout << "\n\t Nhap x ban muon chen vao " << q->info << "<- ";
	cin >> x;
	Node *p = GetNode(x);
	q = KiemTraCoNode_q(q, l); // phải trả về địa chỉ q có trong danh sách mới ra nhá !!
	if (q != NULL)
	{
		p->pNext = q->pNext;
		q->pNext = p;
		if (l.pTail == q) // 2 địa chỉ bằng nhau (đoạn này phải có! TH thêm pt vào cuối khi q->next là NULL)
			l.pTail = p;
	}
	else
	{
		cout << endl << "\t => Khong co node " << node_q << ". Phan tu " << p->info << " se dc them vao dau sach sach!";
		InsertHead(x, l);
	}
}
Node* KiemTraCoNode_q(Node *q, List &l) // mục đích của hàm này là trả về địa chỉ có trong danh sách mà người dùng cần tìm
{
	for (Node *i = l.pHead; i != NULL; i = i->pNext)
		if (i->info == q->info)
		{
			q = i;
			return q; // trả về q - mang địa chỉ trong ds 
		}
	return NULL;
}
void TimKiemTuyenTinh(List &l)// tìm kiếm phần tử bằng pp tuyến tính: do xâu yêu cầu là truy xuất tuần tự nên phải dùng pp tìm kiếm tuyến tính
{
	int x;
	cout << endl << "Nhap x muon tim: ";
	cin >> x;
	Node *p = KiemTraX(x, l);
	if (p == NULL)
		cout << "\t => khong co " << x << " trong danh sach :((";
	else cout << "\t => YEAH!! Co => " << p->info << " trong danh sach :) ";
}
Node* KiemTraX(int &x, List &l) {
	for (Node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if (i->info == x)
			return i;
	}
	return NULL;
}
void HuyPhanTuDauDanhSach(List &l) // Hủy phần tử đầu trong danh sách
{
	Node *rac = l.pHead;;
	if (l.pHead != NULL)
	{
		l.pHead = l.pHead->pNext;
		cout << endl << "\t Ban se huy " << rac->info;
		delete rac;
		cout << endl << "\t =>Ban vua huy " << rac << " huhu... ";
		if (l.pHead == NULL) // thiếu cái này ăn cám!
			l.pTail = NULL;
	}
	else cout << "\n\t => Danh sach khong co phan tu nao de huy!";
}
void HuyPhanTuCuoiDanhSach(List &l)
{
	Node* rac = l.pTail;
	if (l.pHead != NULL)
	{
		if (l.pHead->pNext == NULL)  //  TH: có 1 phần tử - khi thực hiện thao thác xóa cuối
			HuyPhanTuDauDanhSach(l);
		for (Node* i = l.pHead; i != NULL; i = i->pNext)
			if (i->pNext == l.pTail)
			{
				l.pTail = i;
				l.pTail->pNext = NULL;// nếu không cập nhật lại l.pTail->next = null sẽ bị lỗi!
				cout << endl << "\t Ban se huy " << rac->info;
				delete rac;
				cout << endl << "\t =>Ban vua huy " << rac << " huhu... ";
			}
			else if (l.pHead == l.pTail)// TH: còn 1 phần tử trong ds 
				HuyPhanTuDauDanhSach(l);
	}
	else cout << "\n\t => Danh sach khong co phan tu nao de huy!";
}
void HuyPhanTuSauPhanTuSau_q(List &l) // Hủy phần tử sau phần tử q trong danh sách
{
	if (l.pHead != NULL)
	{
		Node *q; int x;
		cout << endl << "\t Nhap phan tu q (truoc) phan tu can huy: ";
		cin >> x;
		q = GetNode(x);
		q = KiemTraCoNode_q_TruocKhiHuy(q, l);
		// phần tử sau q - cũng là phần tử cần xóa
		if (q != NULL && q->pNext != NULL)
		{
			Node *rac = q->pNext; //rac tương đương p (trong sách)
			if (rac == l.pTail) l.pTail = q; // TH: Sau q là phần tử cuối nghĩa là Tail - thì phải cập nhật lại Tail
			q->pNext = rac->pNext;
			cout << endl << "\t Ban se huy " << rac->info;
			delete rac;
			cout << endl << "\t => Ban vua huy " << rac << " huhu... ";
		}
		//else if (l.pHead->pNext == NULL) // TH: q là phần tử cuối cùng (thêm vô chơi:v chứ sách ko có!)
		//	HuyPhanTuDauDanhSach(l);
		else
			cout <<"\t => khong co phan tu sau de huy! ";
	}
	else cout << "\n\t => Danh sach khong co phan tu nao de huy!";
}
Node* KiemTraCoNode_q_TruocKhiHuy(Node *q, List &l)
{
	for (Node* i = l.pHead; i != NULL; i = i->pNext)
		if (i->info == q->info)
			return i;
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
	Node * dsTam;

	dsTam = l.pHead;
	if (dsTam != NULL)
	{
		int dem = 0;
		cout << endl << "\t Danh Sach Lien Ket La: ";
		while (dsTam != NULL)
		{
			cout << dsTam->info;
			if (dsTam->pNext == NULL)
				cout << ".";
			else cout << ", ";
			dsTam = dsTam->pNext;
			dem++;
		}
		cout << endl << "\t => Trong danh sach co [ " << dem<< " ] phan tu.";
	}
	else cout <<endl<< "\t\t\t !! Chua co danh sach !!";
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
	cout << endl << "\t\t CHUONG TRINH DANH SACH LIEN_KET_DON - LINK LIST 2020";
	cout << endl << "\t\t Moi ban chon thao tac: ";
	cout << endl << "\n\t\t 1. Them phan tu vao vi tri dau danh sach: ";
	cout << endl << "\t\t 2. Them phan tu vao vi tri cuoi danh sach:";
	cout << endl << "\t\t 3. Them phan tu vao danh sach sau mot phan tu q:";
	cout << endl << "\t\t 4. Tim kiem 1 phan tu trong danh sach don:";
	cout << endl << "\t\t 5. Huy 1 phan tu dau danh sach:";
	cout << endl << "\t\t 6. Huy 1 phan tu cuoi danh sach:";
	cout << endl << "\t\t 7. Huy 1 phan tu sau q trong danh sach:";
	cout << endl << "\t\t 8. Huy 1 phan tu co khoa k:";
	cout << endl << "\t\t 9. Huy toan bo nho/ Xoa ca danh sach:";
	cout << endl << "\n\t\t Nhan 0 de xem DSLK: ";
	cout << endl << "\t--------------------------------End--------------------------------";
	cout << endl << "\t=>Nhap tt: ";
	cin >> tt;
	cout << " \t=>Ban dang lua chon thao so " << tt << ".";
	switch (tt)
	{
	case 1: ThemCacPhanTuVaoDauDS(l); break;
	case 2: ThemCacPhanTuVaoCuoiDS(l); break;
	case 3:	InsertAfter(l); break;
	case 4: TimKiemTuyenTinh(l); break;
	case 5: HuyPhanTuDauDanhSach(l); break;
	case 6:	HuyPhanTuCuoiDanhSach(l); break;
	case 7:	HuyPhanTuSauPhanTuSau_q(l); break;
	case 8:	HuyPhanTuCoKhoaK(l); break;
	case 9: HuyToanBoNho(l); break;
	case 0: OutPut(l); break;
	default: cout << "\n\t\t!!!Ban phai chon dung so trong MENU!!!";
	}
}
void ThemCacPhanTuVaoDauDS(List &l)
{
	int x, i = 1;
	cout << endl << "\t Nhan phim 0 de dung nhap!";
	do
	{
		cout << endl << "\t Nhap phan tu " << i++ << " : ";
		cin >> x;
		if (x != 0)
		{
			InsertHead(x, l);
		}
	} while (x != 0);
}
void ThemCacPhanTuVaoCuoiDS(List &l)
{
	int x, i = 1;
	cout << endl << "\t Nhan phim 0 de dung nhap!";
	do
	{
		cout << endl << "\t Nhap phan tu " << i++ << " : ";
		cin >> x;
		if (x != 0)
		{
			InsertTail(x, l);
		}
	} while (x != 0);
}
void HuyPhanTuCoKhoaK(List &l)
{
	Node *p = l.pHead;
	Node *q = NULL; // ĐẶT q giống đặt i trong vòng lặp for !
	int k;
	cout << "\n\t Nhap vao phan tu K muon huy: ";
	cin >> k;
	while (p != NULL)
	{
		if (p->info == k)
			break;
		q = p;
		p = p->pNext;
	}
	if (p == NULL)
	{
		cout << "\t => Khong co so " <<k <<" de xoa!";
		return; // KĨ THUẬT =)) dùng tương tự như break // Nếu ko có đoạn lệnh này chương trình sẽ chạy tiếp và gây ra lỗi
	}
	if (q != NULL)
	{
		if (l.pTail == p) // nút cuối // sai khúc này debug mệt vồn vãi =)) if (l.pTail == p->pNext) // nút cuối
			l.pTail = q;
		q->pNext = p->pNext;
		cout << endl << "\t Ban se huy " << p->info;
		delete p;
		cout << endl << "\t => Ban vua huy " << p << " huhu... ";
	}
	else // phần tử ở đầu
	{
		l.pHead = l.pHead->pNext;
		cout << endl << "\t Ban se huy " << p->info;
		delete p;
		cout << endl << "\t => Ban vua huy " << p << " huhu... ";
		if (l.pHead == NULL) l.pTail = NULL;// chỉ có 1 phần tử duy nhất trong ds là l.pHead == l.pTail nên khi ta dời l.pHead = l.pHead->next lên thì l.pTail vẫn có giá trị ở l.pHead. Vì vậy phải set l.pTail lại = null
	}
}
void HuyToanBoNho(List &l)
{
	Node *p;
	while (l.pHead != NULL)
	{
		p = l.pHead;
		l.pHead = l.pHead->pNext;
		delete p;
	}
	l.pTail = NULL;
	cout << endl<< "\t => Bo nho trong!";
}
/* bài tập thêm
cout << "\n\n\n\t\-------------------------------Begin-------------------------------";
cout << "\n\t\tCAU TRUC DU LIEU & THUAT TOAN -- DANH SACH LIEN KET";
cout << "\n\n\n\tNhap 3 de tim gia tri nho nhat, nhap phim bat ki de thoat";
cout << "\n\n\n\tNhap 5 de them NODE A VAO TRUOC NODE B, nhap phim bat ki de thoat";
cout << "\n\n\n\tNhap 6 de them GIA TRI X VAO VI TRI BAT KI TRUOC 1 NODE TRONG DSLK, nhap phim bat ki de thoat";

cout << "\n\n\n\tNhap 0 de gia phong bo nho, nhap phim bat ki de thoat";
cout << "\n\n\n\t\--------------------------------End--------------------------------";
*/