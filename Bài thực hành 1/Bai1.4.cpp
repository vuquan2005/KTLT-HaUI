#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float  x1 = 0, x2 = 0, y1 = 0, y2 = 0;

	cout << "Diem A(x1,y1)\n";
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;


	cout << "Diem B(x2,y2)\n";
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;

	float euc = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float man = fabs(x2 - x1) + fabs(y2 - y1);


	float cos = 1- ( (x1*x2 + y1*y2) / (sqrt(x1*x1 + y1*y1) * sqrt(x2*x2 + y2*y2)));


	cout << "Khoang cach Euclidean: " << euc << endl;
	cout << "Khoang cach Manhattan: " << man << endl;
	cout << "Khoang cach Cosin: " << cos << endl;



	return 0;
}
