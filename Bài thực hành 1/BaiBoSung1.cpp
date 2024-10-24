#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float Fx = sin(x)*sin(x) + fabs(x) + exp(log(x));

	cout.precision(2);
	cout << "Gia tri cua F(" << x << ") = " << Fx;	`

	return 0;
}
