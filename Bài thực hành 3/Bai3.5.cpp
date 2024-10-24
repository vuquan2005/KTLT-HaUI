#include <iostream>
#include <conio.h>

using namespace std;

float Nhap(char Ten_bien_can_nhap);
short GiaiHPT(float a1, float b1, float c1, float a2, float b2, float c2, float &x, float &y);

int main()
{
    cout << "Giai HPT 2 an 2 phuong trinh:\n"
        << " a*x + b*y = c \n d*x + e*y = f\n";
    float a1 = Nhap('a'),
        b1 = Nhap('b'),
        c1 = Nhap('c'),
        a2 = Nhap('d'),
        b2 = Nhap('e'),
        c2 = Nhap('f'),
        x = 0, y = 0;

    cout << "\n\nHe phuong trinh:\n"
        << a1 << " x + " << b1 << "y = " << c1 << endl
        << a2 << " x + " << b2 << "y = " << c2 << endl;

    short kq = GiaiHPT(a1, b1, c1, a2, b2, c2, x, y);
    if (kq == 1) cout << "Co nghiem duy nhat:\n"
                        << " x = " << x
                        << "\n y = " << y;
    if (kq == 0) cout << "Vo nghiem";
    if (kq == 2) cout << "Co vo so nghiem";

    return 0;
}

float Nhap(char Ten_bien_can_nhap)
{
    cout << "Nhap " << Ten_bien_can_nhap << ": ";
    int x;
    cin >> x;
    return x;
}

short GiaiHPT(float a1, float b1, float c1, float a2, float b2, float c2, float &x, float &y)
{
    float Det = a1*b2 - a2*b1;
    float Detx = c1*b2 - c2*b1;
    float Dety = a1*c2 - a2*c1;

    if (Det != 0)
    {
        x = Detx/Det;
        y = Dety/Det;
        return 1;
    }
    if (Detx != 0 || Dety != 0)
        return 0;
    return 2;
}
