#include <iostream>

using namespace std;

void Nhapxn(float &x, int &n)
{
    cout << "Nhap so thuc x: ";
    cin >> x;
    do{
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
        if (n<0)
            cout << "Vui long nhap so nguyen duong n>=0";
    }while(n<0);
}

float Powx(float x, int n)
{
    float X = 1;

    for (int i=1; i<=n; i++)
        X *= x;

    return X;
}

long GiaiThua(int n)
{
    if (n<=0)
        return 0;
    if (n<=1)
        return 1;
    else
    {
        long gt = 1;
        for (int i=2; i <=n; i++)
            gt *= i;
        return gt;
    }
}

int main()
{
    float x;
    int n;
    Nhapxn(x, n);

    float S = x;
    for (int i=2; i <= n; i++)
        S += Powx(x, i)/GiaiThua(i);

    cout << "Gia tri cua bieu thuc S=" << S;

    return 0;
}
