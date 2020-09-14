#include<iostream>
#include<conio.h>
using namespace std;
/*
MẢNG 1 CHIỀU:
	1. Viết chương trinh tạo 1 mảng số nguyên 1 chiều có N phần tử, thực hiện các công việc sau:
a. Tính tổng các phần tử trong mảng.
b. Tính trung bình các phần tử ở vị trí lẻ trong mảng.
c. Tìm phần tử chẳn dương và nhỏ nhất trong mảng.
d. In ra các số nguyên tố có trong mảng.
e. Nhập số nguyên X, cho biết trong mảng có bao nhiêu số bằng X
f. Nhập số nguyên X và số nguyên i( i<N), chèn X vào vị trí i trong mảng.
g. Nhập số nguyên X, xóa phần tử có giá trị bằng X xuất hiện đầu tiên trong mảng.
h. Nhập số nguyên X, cho biết vị trí bằng X cuối cùng trong mảng.
i. Cho biết mảng có đối xứng hay không. VÍ DỤ: Mảng đối xứng: 1 2 3 4 3 2 1 (Ấn tượng nhất câu này khá hay) 
j. Đảo ngược mảng.

(*)LƯU Ý: KHI TRUYỀN THAM SỐ LÀ MẢNG CHO HÀM THÌ LUÔN LUÔN TRUYỀN DƯỚI HÌNH THỨC LÀ [THAM BIẾN], NHƯNG KO DÙNG DẤU &

Câu hỏi: Khi nào dùng hàm có giá trị trả về? - Khi ta cần đưa ra MỘT giá trị bên trong hàm ra ngoài hàm ĐỂ NHỮNG HÀM KHÁC SỬ DỤNG
*/
#define max 100
void NhapMang(int &n, int *iMang);
void XuatMang(int &n, int iMang[]);
void ChuongTrinhMangSoNguyen1Chieu();
void TinhTongCacPhanTu(int &n, int *iMang); // câu a
void TinhTrungBinhCacPhanTuOViTriLe(int &n, int iMang[]); // câu b
void TimPhanTuChanDuongVaNhoNhat(int &n, int iMang[]); // câu c
void InCacSoNguyenTo(int &n, int iMang[]); // câu d
void TimX(int &n, int *iMang);	//câu e 
void ChenxVaoViTriCuai(int &n, int *iMang); // câu f
void DoiMang(int x, int &vt, int &n, int *iMang); // hàm phụ cho câu f
void XoaPhanTuCoGiaTri_X_XuatHienDauTien(int &n, int *iMang); // câu g
void XoaPhanTuDauTien(int &n, int *iMang, int &x); // hàm phụ cho câu g
void XuatViTri_X_CuoiCung(int &n, int *iMang); // câu h
void KiemTraMangCoDoiXung(int &n, int *iMang); // câu i
void DaoNguocMang(int &n, int *iMang); // câu j
void main()
{
	ChuongTrinhMangSoNguyen1Chieu();
	_getch();
}
void ChuongTrinhMangSoNguyen1Chieu()
{
	system("cls");
	int n, x, iMang[max];// i = intMang
	cout << "CHUONG TRINH MANG SO NGUYEN 1 CHIEU BAT DAU: " << endl;
	cout << "Nhap vao N (so luong) phan tu cua mang 0-100: ";
	cin >> n;
	NhapMang(n, iMang);
	cout << "Chon 1 trong cac cong viec sau de thuc hien: " << endl;
	cout << "1. Tinh tong cac phan tu trong mang: " << endl;
	cout << "2. Tinh trung binh cac phan tu o vi tri le trong mang: " << endl;
	cout << "3. Tim phan tu duong nho nhat trong mang: " << endl;
	cout << "4. In cac so nguyen to co trong mang: " << endl;
	cout << "5. Tim X, cho biet co bao nhieu X trong mang: " << endl;
	cout << "6. Chen X vao vi tri i trong mang (i < n): " << endl;
	cout << "7. Xoa phan tu co gia tri bang X xuat hien dau tien trong mang: " << endl;
	cout << "8. Cho biet vi tri bang X cuoi cung trong mang: " << endl;
	cout << "9. Cho biet mang co doi xung hay khong?: " << endl;
	cout << "10.Dao nguoc mang: " << endl;
	cout << "12. Xuat Mang: " << endl;
	cout << " Nhan so 11 de nhap lai MANG: " << endl;
	cout << "Nhan 0 de thoat." << endl;
	do
	{
		cout << endl;
		cout << endl << "----------------";
		cout << endl << "Nhap cong viec.";
		cout << endl << "Nhap = ";
		cin >> x;
		cout << "KQ: ";

		switch (x)
		{
		case 0: exit(1); break;
		case 1: TinhTongCacPhanTu(n, iMang); break;
		case 2: TinhTrungBinhCacPhanTuOViTriLe(n, iMang); break;
		case 3: TimPhanTuChanDuongVaNhoNhat(n, iMang); break;
		case 4: InCacSoNguyenTo(n, iMang); break;
		case 5: TimX(n, iMang); break;
		case 6: ChenxVaoViTriCuai(n, iMang); break;
		case 7: XoaPhanTuCoGiaTri_X_XuatHienDauTien(n, iMang); break;
		case 8: XuatViTri_X_CuoiCung(n, iMang); break;
		case 9: KiemTraMangCoDoiXung(n, iMang); break;
		case 10: DaoNguocMang(n, iMang); break;
		case 12: XuatMang(n, iMang); break;
		case 11: ChuongTrinhMangSoNguyen1Chieu(); break;
		default:
			break;
		}
	} while (true);
	XuatMang(n, iMang);
}
void NhapMang(int &n, int *iMang)// void NhapMang(int &n, int iMang[])
{
	cout << "Nhap vao phan tu cho Mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu [" << i << "] = ";
		cin >> iMang[i];
		cout << endl;
	}
}
void XuatMang(int &n, int iMang[])
{
	cout << endl << endl << "-----------------------------------" << endl;
	cout << "MANG = ";
	for (int i = 0; i < n; i++)
	{
		if (i + 1 == n)
			cout << iMang[i] << ". ";
		else
			cout << iMang[i] << ", ";
	}
	//thêm cho dễ nhìn
	cout << endl << "Vitri ";
	for (int i = 0; i < n; i++)
	{
		if (i + 1 == n)
			cout << "[" << i << "]" << ". ";
		else
			cout << "[" << i << "]" << " ";
	}
}
void TinhTongCacPhanTu(int &n, int *iMang) //câu a
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += iMang[i];
	}
	cout << "Tong cac phan tu trong mang = " << tong;
}
void TinhTrungBinhCacPhanTuOViTriLe(int &n, int iMang[]) //câu b
{
	int dem = 0, tong = 0;
	float Tb = 0;
	for (int i = 1; i < n; i = i + 2) // vị trí lẽ
	{
		dem++;
		tong += iMang[i];
	}
	if (tong != 0 && dem != 0)
	{
		Tb = (float)tong / dem;
		cout << "Trung binh cac phan tu o vi tri le = " << Tb;
	}
	else cout << "khong hop le!";
}
void TimPhanTuChanDuongVaNhoNhat(int &n, int iMang[]) //câu c: hơi phức tạp nếu iMang[0] là số âm- phải xử lý 
{
	int min = iMang[0];
	for (int i = 0; i < n; i++)
	{
		if (iMang[i] % 2 == 0 && iMang[i] > 0)
		{
			if (min > iMang[i])
				min = iMang[i];
			else if (min < 2) // cái này dùng để loại TH mà min = iMang[0] là: -1, 1..~ số âm thì phải gán gtri kế tiếp trong mảng
				min = iMang[i];
		}
	}
	if (min < 2)
		cout << "Khong co phan tu CHAN duong!";
	else
		cout << "Phan tu chan duong va nho nhat la: " << min;
}
void InCacSoNguyenTo(int &n, int iMang[]) //câu d
{
	cout << "Cac So Nguyen To Co Trong Mang La: ";
	int dem, coSoNT = 0;
	for (int i = 0; i < n; i++)
	{
		dem = 0;// phần này thiếu là sai 
		for (int nd = 2; nd <= iMang[i]; nd++) // nd :nguyen duong 
			if (iMang[i] % nd == 0)
				dem++;

		//Kiểm tra và Xuất Số nguyên tố
		if (dem == 1 && (i + 1 == n))
		{
			cout << iMang[i] << "." << endl;
			coSoNT++;
		}
		else if (dem == 1)
		{
			cout << iMang[i] << ", ";
			coSoNT++;
		}
	}
	if (coSoNT >= 1);
	else cout << "Khong co so nguyen to nao!";
}
void TimX(int &n, int *iMang) // câu e
{
	int x, dem = 0;
	cout << "Nhap so X can tim trong mang: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (iMang[i] == x)
			dem++;
	}
	if (dem > 0)
		cout << "Tong so [" << x << "] co trong mang la: " << dem;
	else cout << "Khong co X nao trong mang!";
}
void ChenxVaoViTriCuai(int &n, int *iMang)
{
	int x, vt;
	cout << "Nhap vao so x = ";
	cin >> x;
	cout << "Vi tri i can chen = ";
	cin >> vt;
	if (vt < 0)
		cout << endl << "vi tri khong hop le! ";
	else DoiMang(x, vt, n, iMang);
}
void DoiMang(int x, int &vt, int &n, int *iMang)  // câu f: chèn X vào i mảng
{
	for (int i = n; i >= vt; i--)
	{
		iMang[i] = iMang[i - 1];
		if (i == vt) // WTF?? -> (iMang[i] == vt) - giá trị đi so sánh với vt
			iMang[i] = x;
	}
	n++;// tăng số phần tử trong mảng trước khi xuất lưu ý: tham số n truyền vào phải là tham biến!!
	XuatMang(n, iMang);
}
void XoaPhanTuCoGiaTri_X_XuatHienDauTien(int &n, int *iMang)
{
	int x, ktraX = 0;
	cout << "Nhap vao \[GIA TRI\] x muon xoa = "; // LƯU Ý - NGUY HIỂM: VỊ TRÍ VỚI GIÁ TRỊ KHÁC NHAU NHA BA! LÀM MẢNG PHẢI ĐỂ Ý!
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (iMang[i] == x)
		{
			ktraX++;
			if (ktraX == 1) // xóa phần tử xuất hiện đầu tiên
				XoaPhanTuDauTien(n, iMang, i);
		}
	}
	if (ktraX > 0);
	else cout << "Khong co " << x << " trong mang";
}
void XoaPhanTuDauTien(int &n, int *iMang, int &vitri_i) // câu g
{
	for (int i = vitri_i; i < n; i++)
	{
		iMang[i] = iMang[i + 1];
	}
	--n;
	XuatMang(n, iMang);
}
void XuatViTri_X_CuoiCung(int &n, int *iMang) //câu h: thật chất là đi so sánh là ra cmnr =))
{
	int x, ktraX = -1; // đỉnh suy nghĩ đỉnh của đưỡng =)))
	int max_vitri = 0;
	cout << "Nhap X: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (iMang[i] == x)
		{
			ktraX++;
			if (max_vitri < i)
			{
				max_vitri = i;
			}
		}
	}
	if (ktraX < 0)
		cout << "Khong co " << x << " trong mang!";
	else
		cout << "x = " << x << " nam o vi tri thu: [" << max_vitri << "] trong mang";
}
void KiemTraMangCoDoiXung(int &n, int *iMang) //câu i: 16 dòng @@ : trên mạng giải rắc rối vc //1 PHẦN LÀ NHỜ DEBUG! CẢM ƠN DEBUG!!!
{
	int vitri_giu = -1, dem = -1;
	if ((n - 1) % 2 == 0) // có thể đối xứng
	{
		vitri_giu = (n - 1) / 2;
		for (int i = 0, ii = n - 1; (i<vitri_giu && ii > vitri_giu); i++, ii--)
		{
			if (iMang[i] == iMang[ii])
				dem++;
		}
		if (dem == vitri_giu - 1)
			cout << " ==> Mang doi xung. ";
		else cout << "Mang [khong] doi xung!!";
	}
	else cout << "Mang [khong] doi xung!!";
}
void DaoNguocMang(int &n, int *iMang) // CÂU CUỐI
{
	cout << "Mang da bi dao nguoc :V ";
	for (int i = n - 1; i >= 0; i--)
	{
		if (i == 0)
			cout << iMang[i] << ". ";
		else
			cout << iMang[i] << ", ";
	}
}