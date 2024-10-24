#include <iostream>
#include <math.h>

using namespace std;

void nhapDien(float& soDien, float& donGia)
{
    cout << "Nhap so dien tieu thu: ";
    cin >> soDien;
    cout << "Nhap don gia: ";
    cin >> donGia;
}

double tienDien(float soDien, float donGia)
{
    return soDien * donGia + ((soDien > 100) ? (soDien - 100) * donGia : 0);
}

double btF(float x, float k, int n)
{
    double Q = tienDien(x, k);

    double f = 2020 * pow(x, n);

    double mau = 1;

    for (int i = 1; i <= n; i++)
    {
        mau *= Q;
        f += n / mau;
    }
    return f;
}

int main()
{
    float x, k;
    int n;
    nhapDien(x, k);
    cout << "Nhap n: ";
    cin >> n;

    cout << "So tien phai tra la: " << tienDien(x, k) << '\n';

    double F = btF(x, k, n);
    cout << "F = " << F << '\t';


    return 0;
}
