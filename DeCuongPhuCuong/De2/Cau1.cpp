#include <iostream>
#include <math.h>

using namespace std;

void nhap(float& x, int& n)
{
    cout << "Nhap so thuc x: ";
    cin >> x;
    cout << "Nhap so nguyen n: ";
    cin >> n;
}

double gtP(float x, int n)
{
    if (n <= 10)
    {
        int mau = 0; // tao mot bien mau de luu gia tri cua mau
        double tong = 0;
        for (int i = 1; i <= n; i++)
        {
            mau += i; // moi vong lap con them cho mau mot gia tri bang n
            tong += (x - i) / mau;
            // ^ day la tu
        }

        return tong;
    }
    else
    {
        return 2020 * x + sqrtf(n * n * n);
    }
}

int main()
{
    float y;
    int m;

    nhap(y, m); // goi ham nhap de

    cout << "Gia tri cua P la: " << gtP(y, m) << endl;

    return 0;
}
