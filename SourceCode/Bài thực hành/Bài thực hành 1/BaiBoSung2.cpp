#include <iostream>
#include <string>

using namespace std;

int main()
{
	string HoTen, QueQuan;
	cout << "Nhap ho ten: ";
	getline(cin, HoTen);
	cout << "Nhap que quan: ";
	getline(cin, QueQuan);
	int NgayCong;
	cout << "Nhap so ngay cong: ";
	cin >> NgayCong;

	long Luong = NgayCong * 50000;

	cout << "Thong tin ban vua nhap la:\n";
	cout << "Ho ten: " << HoTen << "\nQue quan: " << QueQuan;
	cout << "\nSo ngay cong: " << NgayCong << "\nLuong: " << Luong;


	return 0;
}
