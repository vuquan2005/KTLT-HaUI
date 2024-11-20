#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x;
	cout << "Hay nhap gia tri cua x: ";
	cin >> x;
	int n;
	cout << "Hay nhap gia tri cua so nguyen n: ";
	cin >> n;

	float P = 2020 * exp(fabs(x)) * sqrt(x * x + 1) + pow(x, 0.2) + n;
	cout << "Gia tri cua bieu thuc P la: " << P;
	return 0;
}
