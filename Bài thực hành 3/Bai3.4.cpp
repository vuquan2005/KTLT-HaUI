#include <iostream>
#include <math.h>

using namespace std;

void PTB2(float a, float b, float c, float &delta, float &x1, float &x2);

int main()
{
    cout << "Giai PT"<< endl ;
    float a = 0, b = 0, c = 0;

    cout << "NHap A: "; cin >> a;
    cout << "NHap B: "; cin >> b;
    cout << "NHap C: "; cin >> c;


    if (a==0)
        cout << "Phuong trinh da nhap co dang: bx - c = 0\nNghiem cua PT la: x=" << (float)-c/b;
    else
    {

        float delta = 0, x1 = 0, x2 = 0;
        PTB2(a, b, c, delta, x1, x2);

        cout << "Delta: " << delta << endl;

        if (delta > 0)
            cout << "Vay PT co 2 nghiem phan biet:\nx1 = " << x1 << endl << "x2 = " << x2;
        else if (delta == 0)
            cout << "Vay phuong trinh co nghiem kep:" << x1;
        else cout << "Vay PT vo nghiem";
    }
    return 0;
}


void PTB2(float a, float b, float c, float &delta, float &x1, float &x2)
{
    delta = (b*b) - (4 * a * c);

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        x2 = -b / (2 * a);
    }
}



