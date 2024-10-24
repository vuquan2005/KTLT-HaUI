#include <iostream>
#include <math.h>

using namespace std;

void PTB2(float a, float b, float c);

int main()
{
    cout << "Giai PT"<< endl ;
    float a = 0, b = 0, c = 0;

    cout << "NHap A: ";
    cin >> a;
    cout << "NHap B: ";
    cin >> b;
    cout << "NHap C: ";
    cin >> c;


    if (a==0)
        cout << "Phuong trinh da nhap co dang: bx - c = 0\nNghiem cua PT la: x=" << (float)-c/b;
    else
    {
        PTB2(a, b, c);



    }
    return 0;
}


void PTB2(float a, float b, float c)
{
    double delta = (b*b) - (4 * a * c);
    cout << "Delta: " << delta << endl;

    if (delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);

        cout << "Vay PT có 2 nghiem phan biet:\nx1 = " << x1 << endl << "x2 = " << x2;
    }
    else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Vay phuong trinh co nghiem kep:" << x;
    }
    else {
        cout << "Vay PT vo nghiem";
    }
}



