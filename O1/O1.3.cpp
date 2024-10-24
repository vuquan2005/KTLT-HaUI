#include <iostream>
#include <math.h>

using namespace std;

float BTF(float x, int n);

int main()
{
    cout << "Nhap so nguyen n: ";
    int n;
    cin >> n;
    cout << "Nhap so thuc x: ";
    float x;
    cin >> x;


    cout << "F(x,n) = " << BTF(x, n);


    return 0;
}

float BTF(float x, int n)
{
    if (n == 1)
        return 2017 + x;
    else
        return pow(x, n) + BTF(x, n-1);
}
