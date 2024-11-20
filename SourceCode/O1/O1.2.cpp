#include <iostream>

using namespace std;

float BTF(float x, long n);

int main()
{
    float x;
    int n;
    cout << "Nhap so thuc x: "; cin >> x;
    cout << "Nhap so nguyen n: "; cin >> n;

    float F = BTF(x, n);

    cout << "Gia tri cua F = " << F;

    return 0;
}

float BTF(float x, long n)
{
    return (n==1)? x : ((x*1.0)/n)*BTF(x, n-1);
}
