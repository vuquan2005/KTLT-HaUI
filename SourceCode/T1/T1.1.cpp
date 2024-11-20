#include <iostream>
#include <math.h>

using namespace std;

float nhap(char bien);
float dienTichHCN(float canhA, float canhB);
int tongSoChan(int n);
float BTF1(float x, int n);
float BTF2(float x, int n);

int main()
{
    float x = nhap('x'),
        y = nhap('y');
    int n = nhap('n');

    cout << "Dien tich hinh chu nhat la: " << dienTichHCN(x, y) << '\n';
    int tong = tongSoChan(n);
    cout << "Tong cac so chan, chia het cho 3 trong doan [1, " << n << "] : " << tong << '\n';

    cout << "Gia tri cu bieu thuc F1(x,n) = " << BTF1(x, n) << '\n';
    cout << "Gia tri cu bieu thuc F2(x,n) = " << BTF2(x, n) << '\n';

    return 0;
}

float nhap(char bien)
{
    cout << "Nhap " << bien << " : ";
    float a;cin >> a;
    return a;
}

float dienTichHCN(float canhA, float canhB)
{
    return canhA*canhB;
}

int tongSoChan(int n)
{
    int sum = 0;
    for (int i = 6; i <= n; i += 2)
        if (i%3 == 0)
            sum += i;
    return sum;
}

float BTF1(float x, int n)
{
    float sum = 0,
        tu = 1;
    int mau = 1;

    for (int i = 1; i <= n; i++)
    {
        tu *= x;
        mau *= 3;
        sum += tu/mau;
    }

    sum += 2016 * tu;
    return sum;
}

float BTF2(float x, int n)
{
    if (n > 10)
        return 2016 * x;
    else{
        float sum = exp(x);
        for (int i = 1; i <= n; i++)
            sum += i;
        return sum;
    }
}
