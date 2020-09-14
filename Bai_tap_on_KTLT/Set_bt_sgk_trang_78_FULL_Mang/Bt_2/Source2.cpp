#include<iostream>
#include<conio.h>
using namespace std;
/*
MẢNG 2 CHIỀU / MA TRẬN: FULL
2. Viết chương trinh tạo 1 MA TRẬN [VUÔNG] *Mình làm ma trận ko vuông :v* chiều dài N, thực hiện các công việc sau:
a. Tìm giá trị âm lớn nhất trong ma trận
b. Tìm vị trí của giá trị nhỏ nhất trong ma trận (Nếu các giá trị = nhau thì in ra nhiều vị trí)
c. Tính tổng các phần tử nằm trên các cột lẻ trong ma trận
d. In ra các số nguyên tố nằm trên 2 đường chéo của ma trận
e. Tính tổng từng dòng trong ma trận.					---------------------------> tiền đề cho những câu f,g
f. Tìm cột có giá trị trung bình lớn nhất.               ---------------------------> xem kỹ
g. Tính giá trị trung bình của các phần tử nhỏ nhất trên mỗi cột
h. Sắp xếp từ dòng trong ma trận tăng dần
i. Nhập vào 1 số nguyên i (i<N), xóa dòng thứ i trong ma trận.
j*. Sắp xếp ma trận theo thứ tự tăng dần từ trên xuống dưới và từ trái qua phải theo
phương pháp dùng mảng phụ. (Hướng dẫn:
Đổ ma trận sang mảng một chiều, sắp xếp trên mảng một chiều theo thứ tự tăng dần, sau đó
chuyển ngược mảng một chiều thành ma trận kết quả
)
(*)LƯU Ý: KHI TRUYỀN THAM SỐ LÀ MẢNG CHO HÀM THÌ LUÔN LUÔN TRUYỀN DƯỚI HÌNH THỨC LÀ [THAM BIẾN], NHƯNG KO DÙNG DẤU &
*/
#define MAX 100
void ChuongTrinhMang2ChieuMaTranVuong();
void NhapMang(int &d, int &c, int(*MaTran)[MAX]);
void XuatMang(int &d, int &c, int MaTran[][MAX]);
void TimGiaTriAmLonNhat(int &d, int &c, int(*MaTran)[MAX]); // câu a
void TimViTriCuaGiaTriNhoNhat(int &d, int &c, int(*MaTran)[MAX]); // câu b
void TimViTriCua_min(int &DEM, int min, int &d, int &c, int(*MaTran)[MAX]); //câu b phụ
void TinhTongCacPhanTuNamTrenCotLe(int &d, int &c, int(*MaTran)[MAX]);// câu c
void InCacSoNguyenToTren2DuongCheo(int &d, int &c, int(*MaTran)[MAX]);// câu d
void TinhTongTungDongMaTran(int &d, int &c, int(*MaTran)[MAX]);// câu e chưa test đủ
void TimCotCoGiaTriTrungBinhLonNhat(int &d, int &c, int(*MaTran)[MAX]); // câu f  chưa test đủ
void TinhGiaTriTrungBinhCuaCacPhanTuNhoNhatTrenMoiCot(int &d, int &c, int(*MaTran)[MAX]);// câu g
void SapXepTungDongTangDan(int &d, int &c, int(*MaTran)[MAX]);// câu h: dùng thuật toán sort
void Nhap_i_XoaDongThu_i(int &d, int &c, int(*MaTran)[MAX]); // câu i
void SapXepMangTangDanTuTraiQuaPhaiTuTrenXuongDuoi(int &d, int &c, int(*MaTran)[MAX]);// câu j cuối
void DoMang1ChieuVaoMang2Chieu(int a[], int &n, int &d, int &c, int(*MaTran)[MAX]);// câu j phụ
void StraightInterChangeSort(int a[], int &n);
void main()
{
	ChuongTrinhMang2ChieuMaTranVuong();
	_getch();
}
void ChuongTrinhMang2ChieuMaTranVuong()
{
	system("cls");
	int d, c, x, MaTran[MAX][MAX];// i = intMang
	cout << "CHUONG TRINH MA TRAN / MANG 2 CHIEU BAT DAU: " << endl;
	cout << "Nhap [SO DONG] cua ma tran 0-100: ";
	cin >> d;
	cout << endl;
	cout << "Nhap [SO COT] cua ma tran 0-100: ";
	cin >> c;
	NhapMang(d, c, MaTran);
	cout << "Chon 1 trong cac cong viec sau de thuc hien: " << endl;
	cout << "1. Tim gia tri am lon nhat trong ma tran: " << endl;
	cout << "2. Tim vi tri cua gia tri nho nhat trong ma tran: " << endl;
	cout << "3. Tinh tong cac phan tu nam tren cac [COT LE] trong ma tran: " << endl;
	cout << "4. In ra cac so nguyen to nam tren 2 duong cheo cua ma tran: " << endl;
	cout << "5. Tinh tong tung dong trong ma tran: " << endl;
	cout << "6. Tim cot co gia tri trung binh lon nhat: " << endl;
	cout << "7. Tinh gia tri trung binh cua cac phan tu nho nhat tren moi cot: " << endl;
	cout << "8. Sap xep tung dong cua ma tran tang dan: " << endl;
	cout << "9. Nhap i (i<n), xoa dong thu i trong ma tran: " << endl;
	cout << "10 Sap xep ma tran theo thu tu tang dan tu trai qua phai, tu tren xuong duoi: " << endl;
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
		case 1: TimGiaTriAmLonNhat(d, c, MaTran); break;
		case 2: TimViTriCuaGiaTriNhoNhat(d, c, MaTran); break;
		case 3:	TinhTongCacPhanTuNamTrenCotLe(d, c, MaTran); break;
		case 4: InCacSoNguyenToTren2DuongCheo(d, c, MaTran); break;
		case 5: TinhTongTungDongMaTran(d, c, MaTran); break;
		case 6: TimCotCoGiaTriTrungBinhLonNhat(d, c, MaTran); break;
		case 7: TinhGiaTriTrungBinhCuaCacPhanTuNhoNhatTrenMoiCot(d, c, MaTran); break;
		case 8: SapXepTungDongTangDan(d, c, MaTran); break;
		case 9: Nhap_i_XoaDongThu_i(d, c, MaTran); break;
		case 10:SapXepMangTangDanTuTraiQuaPhaiTuTrenXuongDuoi(d, c, MaTran); break;
		case 12:XuatMang(d, c, MaTran); break;
		case 11:ChuongTrinhMang2ChieuMaTranVuong(); break;
		default:
			break;
		}
	} while (true);
}
void NhapMang(int &d, int &c, int(*MaTran)[MAX])// void NhapMang(int &n, int MaTran[][max])
{
	int demPT = 0;
	cout << "Nhap vao " << d*c << " phan tu cho Mang: " << endl;
	for (int i = 0; i < d; i++) // i là dòng 
		for (int j = 0; j < c; j++)
		{
			demPT++;
			cout << "Phan tu thu: " << demPT << " =>[" << i << "][" << j << "] = ";
			cin >> MaTran[i][j];
			cout << endl;
		}
}
void XuatMang(int &d, int &c, int MaTran[][MAX])
{
	cout << endl << endl << "-----------------------------------" << endl;
	cout << "MANG GOM [" << d*c << "] PHAN TU = ";
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			if (i + 1 == d && j + 1 == c)
				cout << MaTran[i][j] << ". ";
			else
				cout << MaTran[i][j] << ",    ";
		}
	//thêm cho dễ nhìn
	cout << endl << "Vitri ";
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			if (i + 1 == d && j + 1 == c)
				cout << "[" << i << "][" << j << "]. ";
			else
				cout << "[" << i << "][" << j << "] ";
		}
}
void TimGiaTriAmLonNhat(int &d, int &c, int(*MaTran)[MAX]) //câu a
{
	int max = MaTran[0][0], ktraSoAm = 0;
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			if (max < 0) // đôi khi dk mỗi cái mỗi cái mỗi riêng (quan trọng !!!)
			{			//ko thể gộp chung ntn if ( max < 0 && max < MaTran[i][j] && MaTran[i][j] < 0)
				if (max < MaTran[i][j] && MaTran[i][j] < 0)
					max = MaTran[i][j];
				ktraSoAm++;
			}
			else
				max = MaTran[i][j];
		}
	if (ktraSoAm > 0)
		cout << "Gia tri Am Lon Nhat = " << max;
	else cout << "Khong co gia tri am nao!";
}
void TimViTriCuaGiaTriNhoNhat(int &d, int &c, int(*MaTran)[MAX]) //câu b
{
	int dem = 0;
	int min = MaTran[0][0];
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			if (min > MaTran[i][j])
				min = MaTran[i][j];
		}

	cout << "Gia tri nho nhat = " << min << " o vi tri: "; TimViTriCua_min(dem, min, d, c, MaTran);
	cout << endl << "Tong cac vi tri = " << dem;
}
void TimViTriCua_min(int &DEM, int min, int &d, int &c, int(*MaTran)[MAX]) // câu phụ của b
{
	for (int i = 0; i < d; i++) //Câu phụ => vòng lặp này dùng để xử lý (Nếu các giá trị = nhau thì in ra nhiều vị trí)
		for (int j = 0; j < c; j++)
		{
			if (min == MaTran[i][j])
			{
				cout << "[" << i << "][" << j << "]" << " ";
				DEM++;
			}
		}
}
void TinhTongCacPhanTuNamTrenCotLe(int &d, int &c, int(*MaTran)[MAX])
{
	cout << "Tong cac phan tu nam tren cot le la: ";
	int Tong = 0;
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			if (j % 2 != 0)
			{
				Tong += MaTran[i][j];
				cout << MaTran[i][j] << " + "; // chưa giải quyết được!
			}
		}
	cout << " = " << Tong;
}
void InCacSoNguyenToTren2DuongCheo(int &d, int &c, int(*MaTran)[MAX]) // câu d
{
	if (d == c)
	{
		//------------------------------ĐƯỜNG CHÉO CHÍNH---------------------------------
		cout << endl << "Cac So Nguyen To Co tren Duong Cheo Chinh La: ";
		int dem = 0, demSNT = 0;

		int n = d = c; // do ma trận vuông
		for (int i = 0; i < n; i++)
		{
			dem = 0; // phần này thiếu là sai 
			for (int nd = 2; MaTran[i][i] >= nd; nd++)
				if (MaTran[i][i] % nd == 0)  // main diagonal: đường chéo chính
					dem++;

			if (dem == 1 && i + 1 == n)
			{
				demSNT++;
				cout << MaTran[i][i] << ".";
			}
			else if (dem == 1)
			{
				demSNT++;
				cout << MaTran[i][i] << ",";
			}
		}
		if (demSNT > 0);
		else cout << "KHONG co so Nguyen To nao tren DUONG CHEO CHINH! " << endl;

		//------------------------------ĐƯỜNG CHÉO PHỤ---------------------------------
	//MaTran[i][n - i - 1]; // second diagonal: đường chéo phụ (you'll maybe need to update index)
		cout << endl << "Cac So Nguyen To Co tren Duong Cheo Phu La: ";
		demSNT = 0; // do sử dụng chung cho toàn hàm nên ko set = 0 lại thì chương trình dưới này sai!
		dem = 0;
		for (int i = 0; i < n; i++)
		{
			dem = 0; // phần này thiếu là sai 
			for (int nd = 2; MaTran[i][n - i - 1] >= nd; nd++)
				if (MaTran[i][n - i - 1] % nd == 0)  // main diagonal: đường chéo chính
					dem++;

			if (dem == 1 && i + 1 == n)
			{
				demSNT++;
				cout << MaTran[i][n - i - 1] << ".";
			}
			else if (dem == 1)
			{
				demSNT++;
				cout << MaTran[i][n - i - 1] << ",";
			}
		}
		if (demSNT > 0);
		else cout << "KHONG co so Nguyen To nao tren DUONG CHEO PHU! ";
	}
	else cout << "KHONG phai ma tran vuong!";
}
void TinhTongTungDongMaTran(int &d, int &c, int(*MaTran)[MAX]) // câu e
{
	int TongDong;
	for (int i = 0; i < d; i++) // Đây là dòng: "Dòng chạy xuống, cột chạy qua/ ngang"
	{
		TongDong = 0;
		cout << endl << "Ma tran tren dong[" << i << "] co Tong la: ";
		for (int j = 0; j < c; j++)  // Đây là cột: "Dòng chạy xuống, cột chạy qua/ ngang"
		{
			TongDong += MaTran[i][j];
			if (j + 1 == c)// xuất pt ma trận
				cout << MaTran[i][j] << "";
			else cout << MaTran[i][j] << " + ";

			if (j + 1 == c)// xuất trên TỪNG dòng
				cout << " = " << TongDong;
		}
	}
}
void TimCotCoGiaTriTrungBinhLonNhat(int &d, int &c, int(*MaTran)[MAX]) //câu f
{
	// ý tưởng: ngược lại với bài e: cho chạy cột trước (giả sử: MaTran[2][2] --> mt[0][1] --> mt[0][2]...) thì bài này ta làm ngược lại là chạy dòng trước :v
	// ta chỉ cần đổi MaTran[i][j] thành MaTran[j][i] là xong! thông minh:v
	/*2 vấn đề cần giải quyết:
	1. Đi tính trung bình từng cột( ép kiểu int -> float)
	2. Đi so sánh các cột tìm cột TB lớn nhất
	*/
	int TongCot, demSoCot, max_ViTri_cot = 0, chay_1_lan = 0;
	float TbCot, max_GiaTri_cot = -1;
	for (int i = 0; i < c; i++) // Đây là cột: "Dòng chạy xuống, cột chạy qua/ ngang"
	{
		TongCot = 0, demSoCot = 0;
		cout << endl << "Ma tran tren cot [" << i << "] co TRUNG BINH COT la: ";
		for (int j = 0; j < d; j++) // Đây là dòng: "Dòng chạy xuống, cột chạy qua/ ngang"
		{
			TongCot += MaTran[j][i];
			demSoCot++;
			if (j + 1 == d)// xuất pt ma trận
				cout << MaTran[j][i] << ")/ " << demSoCot;
			else cout << "(" << MaTran[j][i] << " + ";

			if (j + 1 == d)// xuất trên TỪNG dòng
			{
				TbCot = (float)TongCot / demSoCot;
				cout << " = " << TbCot;

				if (max_GiaTri_cot == -1 && chay_1_lan == 0)// max = bắt buộc gán max = một trong các gtri ss đang có nếu gán giá trị khác rất dễ gặp lỗi  
				{						// dk nều để chắc chắn gán (max bằng các giá trị đang có) chạy đúng 1 lần 
					max_GiaTri_cot = TbCot; chay_1_lan++;
				}

				if (max_GiaTri_cot < TbCot)
				{
					max_GiaTri_cot = TbCot;
					max_ViTri_cot = j;
				}
			}
		}
	}
	cout << endl << "Cot [" << max_ViTri_cot << "] co gia tri TB lon nhat la: " << max_GiaTri_cot;
}
void TinhGiaTriTrungBinhCuaCacPhanTuNhoNhatTrenMoiCot(int &d, int &c, int(*MaTran)[MAX]) //câu g: giống giống 2 câu trên
{
	/*2 vấn đề cần giải quyết:
	1. Đi tìm phần tử nhỏ nhất trên mỗi cột
	2. Đi tính trung bình các phần từ đó
	*/
	int  min_GiaTri, demSoCot = 0;
	float Tong = 0;
	for (int i = 0; i < c; i++) // Đây là cột: "Dòng chạy xuống, cột chạy qua/ ngang"
	{
		min_GiaTri = MaTran[0][i];  // MaTran[i][0]; sai nghiêm trọng!!!
		for (int j = 0; j < d; j++) // Đây là dòng: "Dòng chạy xuống, cột chạy qua/ ngang"
		{
			if (min_GiaTri > MaTran[j][i])
			{
				min_GiaTri = MaTran[j][i];
			}
		}
		demSoCot++;
		Tong += min_GiaTri;
		//Xuất giá trị nhỏ nhất trên mỗi cột
		cout << endl << "Gia tri nho nhat tren cot " << i << " = " << min_GiaTri;  // i trong TH này là cột ko phải dòng nhé
	}

	cout << endl << "Trung Binh cac phan tu nho nhat tren moi cot = " << (float)Tong / demSoCot;
}
void SapXepTungDongTangDan(int &d, int &c, int(*MaTran)[MAX]) //cây h: dùng thuật toán Straight Interchange sort 
{
	for (int i = 0; i < d; i++) // Đây là dòng: "Dòng chạy xuống, cột chạy qua/ ngang"
		for (int j = 0; j < c - 1; j++)  // Đây là cột: "Dòng chạy xuống, cột chạy qua/ ngang"
			for (int k = j + 1; k < c; k++)
			{
				if (MaTran[i][j] > MaTran[i][k])
					swap(MaTran[i][j], MaTran[i][k]);
			}
	XuatMang(d, c, MaTran);
}
void swap(int &a, int &b) // hàm phụ dùng cho câu h và câu j
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Nhap_i_XoaDongThu_i(int &d, int &c, int(*MaTran)[MAX]) // câu i
{
	int ii; //i
	cout << "Nhap vao i: ";
	cin >> ii;
	if (ii < d)
	{
		for (int i = 0; i < d; i++)
			for (int j = 0; j < c; j++)
				if (i == ii)
				{
					MaTran[i][j] = MaTran[i + 1][j];
				}
		--d; //Cập nhật dòng lại
		XuatMang(d, c, MaTran);
	}
	else cout << "Ban phai nhap i < n!!";
}
void SapXepMangTangDanTuTraiQuaPhaiTuTrenXuongDuoi(int &d, int &c, int(*MaTran)[MAX]) // câu j 
{
	int Mang1Chieu[MAX], n = 0;// mảng phụ
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
		{
			Mang1Chieu[n] = MaTran[i][j]; // Mang1Chieu[n++] = MaTran[i][j];
			n++;
		}
	StraightInterChangeSort(Mang1Chieu, n);
	DoMang1ChieuVaoMang2Chieu(Mang1Chieu, n, d, c, MaTran); //Đỗ mảng 1 vào mảng 2 chiều
	XuatMang(d, c, MaTran);
}
void DoMang1ChieuVaoMang2Chieu(int a[], int &n, int &d, int &c, int(*MaTran)[MAX])
{
	n = 0; // Lưu ý: lỗi nghiêm trọng nếu ko gán n = 0
	for (int i = 0; i < d; i++)
		for (int j = 0; j < c; j++)
			MaTran[i][j] = a[n++];
}
void StraightInterChangeSort(int a[], int &n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}