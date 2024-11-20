#include <iostream>
#include <math.h>

using namespace std;

void nhap(float &x, int &n, int &m)
{
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Nhap so nguyen m: ";
    cin >> m;
}

float tinhH(int n, int m)
{
    if (n != 0)
        if (m + 1.0/n >= 0)
            return sqrt(m + 1.0/n);
    return 0;
}

double tinhT(float x, int n)
{
    double sum = 10 * exp(abs(n-5)),
        tu = 1;
    for (int i = 1; i <= n; i++)
    {
        tu *= x;
        sum += tu/(2*i - 1);
    }
    return sum;
}

int main()
{
    float x;
    int n, m;
    nhap(x, n, m);

    cout << "H(n, m) = " << tinhH(n, m) << endl;
    cout << "T(x, n+m) = " << tinhT(x, n + m) << endl;

    return 0;
}
