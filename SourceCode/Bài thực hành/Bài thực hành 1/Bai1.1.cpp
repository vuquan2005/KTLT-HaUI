#include <iostream>

using namespace std;

int main()
{
  int a, b;
  cout << "Nhap a: ";
  cin >> a;
  cout << "Nhap b: ";
  cin >> b;

  int sum = a + b;
  int sub = a - b;
  int tich = a * b;
  //Nhan voi 1.0 la dau cham dong de co ket qua dau cham dong
  //float chia = (1.0*a)/b;
  int thuong = a / b;
  int du = a % b;

  cout << "\nTong a+b la: " << sum << endl;
  cout << "Hieu a-b la: " << sub << endl;
  cout << "Tich a*b la: " << tich << endl;
  //cout << "a/b = " << chia << endl;
  cout << "Thuong a/b la: " << thuong << endl;
  cout << "Du: " << du << endl;



  return 0;
}
