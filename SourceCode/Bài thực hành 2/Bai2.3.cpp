#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, S;
    int n;

    cout << "NHap so thuc x: ";
    cin >> x;
    cout << "NHap so nguyen n: ";
    cin >> n;

    S=0;

    if (n%2 == 0)
    {
        S = 2016*x;
        float tu = x;
        long mau = 1;

        for (int i=2; i<=n; i++)
        {
            tu *=x;
            mau *=3;
            S += tu/mau;
        }
    }

    cout << "Gia tri cua S la: " << S;

    return 0;
}
