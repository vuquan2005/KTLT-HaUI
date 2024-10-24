#include <iostream>

using namespace std;

long GiaiThua(long n);

int main()
{
    int a, b;
    cout << "Nhap so nguyen a: "; cin >> a;
    cout << "Nhap so nguyen b: "; cin >> b;

    float c = (GiaiThua(a) + GiaiThua(b))/(GiaiThua(a+b)*1.0);

    cout << c << endl;

    return 0;
}

long GiaiThua(long n)
{
    return (n==1)? 1 : n*GiaiThua(n-1);
}
