#include <iostream>
#include <math.h>

using namespace std;

void NhapVectorxy(float VectorX[], int n);
float Chuan0(float VTX[], int n);
float Chuan1(float VTX[], int n);
float Chuan2(float VTX[], int n);
float ChuanIfi(float VTX[], int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua vector: ";
    cin >> n;
    float VTX[n];
    NhapVectorxy(VTX, n);

    cout << "Chuan 0: " << Chuan0(VTX, n) << endl
        << "Chuan 1: " << Chuan1(VTX, n) << endl
        << "Chuan 2: " << Chuan2(VTX, n) << endl
        << "Chuan vo cuc: " << ChuanIfi(VTX, n) << endl;

    return 0;
}

void NhapVectorxy(float VectorX[], int n)
{
    cout << "Nhap vector X(x1, x2, x3, ..., x" << n << ")\n";
    for (int i=1; i<=n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> VectorX[i];
    }
}

float Chuan0(float VTX[], int n)
{
    float dem = 0;
    for (int i=1; i<=n; i++)
        if (VTX[i] != 0)
            dem++;
    return dem;
}

float Chuan1(float VTX[], int n)
{
    float Sum = 0;
    for (int i=1; i<=n; i++)
        Sum += fabs(VTX[i]);
    return Sum;
}

float Chuan2(float VTX[], int n)
{
    float S = 0;
    for (int i=1; i<=n; i++)
        S += VTX[i]*VTX[i];
    return sqrt(S);
}

float ChuanIfi(float VTX[], int n)
{
    float Max = VTX[1];
    for (int i=2; i<=n; i++)
    {
        if (Max < VTX[i])
            Max = VTX[i];
    }
    return Max;
}
