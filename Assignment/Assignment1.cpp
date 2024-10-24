#include <iostream>
#include <math.h>

using namespace std;

float Nhapx();
int Nhapn(char Ten_bien_can_nhap);
int add1(int &n);
int sub1(int &n);
float gtP(float x, int n);
int SumChan5(int n, int m);

int main()
{
    float x = Nhapx();
    int n = Nhapn('n'), m = Nhapn('m');

    cout << "Gia tri cua n sau khi tang 1 don vi la: " << add1(n) << endl;
    cout << "Gia tri cua m sau khi tang 1 don vi la: " << add1(m) << endl;
    cout << "Gia tri cua P = " << gtP(x, n) << endl;

    cout << "Tong cac so chan lon hon 5 trong doan [n, m] la: " << SumChan5(n, m) << endl;

    return 0;
}


float Nhapx()
{
    cout << "Nhap x: ";
    float x;
    cin >> x;
    return x;
}

int Nhapn(char Ten_bien_can_nhap)
{
    cout << "Nhap " << Ten_bien_can_nhap << ": ";
    int n;
    cin >> n;
    return n;
}

int add1(int &n)
{
    n++;
    return n;
}

int sub1(int &n)
{
    n--;
    return n;
}

float gtP(float x, int n)
{
    float P = 2018*pow(x, n);
    float tu = x;
    int mau = 1;
    for (int i = 2; i <= n; i++)
    {
        tu *= x;
        mau *= 3;
        P += tu/mau;
    }
    return P;
}

int SumChan5(int n, int m)
{
    if (n > m)
    {
        cout << "...\nLoi n > m";
        return 0;
    }
    else
    {
        int sum;
        for (int i = (n%2==0)? n:n+1; i <= m; i +=2)
            sum += i;
        return sum;
    }
}
