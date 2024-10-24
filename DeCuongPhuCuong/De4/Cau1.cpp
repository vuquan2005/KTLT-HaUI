#include <iostream>
#include <math.h>

using namespace std;

void nhap(float& x, int& n, int& m)
{
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
}

float gtL(int n, int m)
{
    if (n+m != 0)
    {
        float temp = 1.0/(n + m) +n;
        if (temp > 0)
            return sqrt(temp);
        else return -1;
    } else return -1;
}

float gtP(float x, int n)
{
    float P = 9*exp(n*x),
        tu = 1;

    for (int i = 1; i <= n; i++)
    {
        tu *= 2;
        P += tu/(2*i + 1);
    }
    return P;
}

int main()
{
    float x;
    int n, m;

    nhap(x, n, m);
    cout << "L(n,2m) = " << gtL(n, 2*m) << '\n';
    cout << "P(x,n) = " << gtP(x, n) << '\n';

    return 0;
}
