#include <iostream>

using namespace std;

void Nhap3(float &a,float &b,float &c);
float Min3(float a,float b,float c);
float Max3(const float &a, const float &b, const float &c);

int main()
{
    float a=0, b=0, c=0;
    Nhap3(a, b, c);

    cout << "So nho nhat trong 3 so a, b, c la: " << Min3(a, b ,c) << endl;
    cout << "So lon nhat trong 3 so a, b, c la: " << Max3(a, b ,c) << endl;

    float d=0, e=0;
    cout << "Nhap d: "; cin >> d;
    cout << "Nhap e: "; cin >> e;

    cout << "So nho nhat trong 5 so a, b, c, d, e la: " << Min3(d, e, Min3(a, b ,c)) << endl;
    cout << "So lon nhat trong 5 so a, b, c, d, e la: " << Max3(d, e, Max3(a, b ,c)) << endl;

    return 0;
}

void Nhap3(float &a,float &b,float &c)
{
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c: "; cin >> c;

}

float Min3(float a,float b,float c)
{
    return (a<b)? ((a<c)? a : c) : ((b<c)? b : c);
}

float Max3(const float &a, const float &b, const float &c)
{
    return (a>b)? ((a>c)? a : c) : ((b>c)? b : c);
}
