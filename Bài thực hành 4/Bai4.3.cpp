#include <iostream>
#include <math.h>

using namespace std;

void NhapVectorxy(float Vectorx[], float Vectory[], int n);
float DoDaiVT(float Vector[], int n);
float ToaDoTVH(float Vectorx[], float Vectory[], int n);
float Cosxy(float Vectorx[], float Vectory[], int n);
float TichVoHuong(float Vectorx[], float Vectory[], int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua vector: ";
    cin >> n;
    float VTx[n], VTy[n];
    NhapVectorxy(VTx, VTy, n);

    float TVH = TichVoHuong(VTx, VTy, n);

    cout << "Tich vo huong hai vector x, y la: " << TVH;

    return 0;
}

void NhapVectorxy(float Vectorx[], float Vectory[], int n)
{
    cout << "Nhap vector x(x1, x2, x3, ..., x" << n << ")\n";
    for (int i=1; i<=n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >> Vectorx[i];
    }
    cout << "Nhap vector y(y1, y2, y3, ..., y" << n << ")\n";
    for (int i=1; i<=n; i++)
    {
        cout << "y[" << i << "] = ";
        cin >> Vectory[i];
    }
}

float DoDaiVT(float Vector[], int n)
{
    float S = Vector[1]*Vector[1];
    for (int i=2; i<=n; i++)
        S += Vector[i]*Vector[i];
    return sqrt(S);
}

float ToaDoTVH(float Vectorx[], float Vectory[], int n)
{
    float S = Vectorx[1]*Vectory[1];
    for (int i=2; i<=n; i++)
        S += Vectorx[i]*Vectory[i];
    return S;
}

float Cosxy(float Vectorx[], float Vectory[], int n)
{
    return ToaDoTVH(Vectorx, Vectory, n)/(DoDaiVT(Vectorx, n)*DoDaiVT(Vectory, n));
}

float TichVoHuong(float Vectorx[], float Vectory[], int n)
{
    return DoDaiVT(Vectorx, n)*DoDaiVT(Vectory, n)*Cosxy(Vectorx, Vectory, n);
}
