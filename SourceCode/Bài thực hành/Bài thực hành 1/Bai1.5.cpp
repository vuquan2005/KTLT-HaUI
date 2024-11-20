#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float  x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;

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

    cout << "Diem C(x3,y3)\n";
    cout << "Nhap x3: ";
    cin >> x3;
    cout << "Nhap y3: ";
    cin >> y3;

    float xk = (x1 + x2 + x3) /3;
    float yk = (y1 + y2 + y3) /3;

    cout << "Trong tam K cua tam giac ABC la: (" << xk << "," << yk << ")\n";

    float euca = sqrt( pow(x1 -xk,2) + pow(y1 -yk,2) );
	float eucb = sqrt( pow(x2 -xk,2) + pow(y2 -yk,2) );
	float eucc = sqrt( pow(x3 -xk,2) + pow(y3 -yk,2) );

	float inter = euca + eucb + eucc;

	cout << "Do do inter: " << inter;


    return 0;
}
