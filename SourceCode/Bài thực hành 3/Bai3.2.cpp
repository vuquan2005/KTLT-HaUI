#include <iostream>

using namespace std;

float F(float x, int n);

int main()
{
    float x = 0, y = 0;
    int n = 0;
    cout << "Nhap so thuc x: "; cin >> x;
    cout << "Nhap so thuc y: "; cin >> y;
    cout << "Nhap so nguyen n: "; cin >>n;

    float P = F(x, n) + F(y, n) - F(x+y, n);

    cout << "Gia tri cua bieu thuc: P = F(x, n) + F(y, n) - F(x+y, n) la: " << P << endl;

    return 0;
}

float F(float x, int n)
{
    return (float)(2*x*x + n*x + n);
}
