#include<iostream>
#include<conio.h>
using namespace std;
/* 
GIỚI THIỆU VỀ NGOẠI LỆ:
Try – cast – throw  là 3 từ khóa  được sử dụng để xử lý ngoại lệ, nghĩa là nó xử lý các vấn đề ngoài rìa, những vấn đề không mong muốn xảy ra.

+ Ví dụ: Phép chia một số cho 0

+ Việc cấp phát vùng nhớ không đủ.

+ Dữ liệu quá lớn gây ra hiện tượng tràn vùng nhớ.

+ Xử lý file có vấn đề….

Tất cả những vấn đề trên đều có thể xảy ra bấ kỳ một thời điểm nào, một lúc nào trong chương trình mà chúng ta không thể biết.

Và nếu không có cớ chết try – cast thì khi xảy ra lỗi như vậy, chương trình sẽ bị crash.

Nếu một chương trình mà xảy ra hiện tượng crash quá nhiều, thì đó là một phần mềm có chất lượng kém.

Do đó người ta phải tìm cách quản lý các xử lý ngoại lệ không mong muốn xảy ra.

Do đó try – cast được xử dụng.
-------------------------------
Exception là một loại lỗi đặc biệt. Lỗi này xuất hiện vào lúc thực thi chương trình. 
Các trạng thái không bình thường xảy ra trong khi thi hành chương trình tạo ra các exception. 
Những trạng thái này không được biết trước trong khi ta đang xây dựng chương trình. 
Nếu bạn không xử lý các trạng thái này thì chương trình có thể bị kết thúc đột ngột.
Ví dụ, việc chia cho 0 sẽ tạo một lỗi trong chương trình. Ngôn ngữ Java cung cấp cơ chế dùng để xử lý ngoại lệ rất hiệu quả. 
Việc xử lý này làm hạn chế tối đa trường hợp hệ thống bị hỏng (crash) hay hệ thống bị ngắt đột ngột. 
Tính năng này làm cho Java trở thành một ngôn ngữ lập trình mạnh.
Mục đích của việc xử lý ngoại lệ
Một chương trình nên có cơ chế xử lý ngoại lệ thích hợp. 
Nếu không, chương trình sẽ bị ngắt khi một ngoại lệ xảy ra. 
Trong trường hợp đó, tất cả các nguồn tài nguyên mà hệ thống đã cấp không được giải phóng. 
Điều này gây lãng phí tài nguyên. Để tránh trường hợp này, tất cả các nguồn tài nguyên mà hệ thống cấp nên được thu hồi lại. 
Tiến trình này đòi hỏi cơ chế xử lý ngoại lệ thích hợp.

*/
class TuyChinh : public exception
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
		{
			throw "nhap so di ba!";
			cout << "Nhap tuoi di BA:))";
			cin >> age;
		}
		//VIẾT THÊM VÒNG LẶP NỮA LÀ OK - DÙ cho ngoại lệ xảy ra thì vẫn chạy tiếp được chương trình nhé (vì ta đã xử lý (catch) nó rồi)
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