#include <iostream>
#include <math.h>

using namespace std;

void nhapToaDo(float &x, float &y, char tenDiem)
{
    cout << "Nhap toa do diem " << tenDiem << '\n';
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
}

float khoangCachM(float x1, float y1, float x2, float y2)
{
    return fabs(x2 - x1) + fabs(y2 - y1);
}

float btF(float x1, float y1, float x2, float y2, int n)
{
    float F = 0,
        tu = 1,
        P = khoangCachM(x1, y1, x2, y2);

    for(int i = 1; i <= n; i++)
    {
        tu *= P;
        F += tu/(2*i + 1);
    }
    F += 2020*n;
    return F;
}

int main()
{
    float x1, x2, y1, y2;
    int n;
    nhapToaDo(x1, y1, 'A');
    nhapToaDo(x2, y2, 'B');

    cout << "Nhap n: ";
    cin >> n;

    cout << "Khoang cach Manhattan: " << khoangCachM(x1, y1, x2, y2) << '\n';
    cout << "F = " << btF(x1, y1, x2, y2, n);

    return 0;
}
