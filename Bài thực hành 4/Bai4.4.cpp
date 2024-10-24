#include <iostream>

using namespace std;

void NhapDS(float DS[], int n);
void XuatDS(float DS[], int n);
void HoanVi(float &a, float &b);
void SapXepD(float DS[], int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua day so: "; cin >> n;
    float DS[n];
    NhapDS(DS, n);

    cout << "Sap xep theo thu tu giam dan\n";
    SapXepD(DS, n);
    XuatDS(DS, n);

    return 0;
}

void NhapDS(float DS[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cout << "DS[" << i << "] = ";
        cin >> DS[i];
    }
}

void XuatDS(float DS[], int n)
{
    for (int i=1; i<=n; i++)
        cout << "[" << i << "] = " << DS[i] << endl;
}

void HoanVi(float &a, float &b)
{
    float Temp = a;
    a = b;
    b = Temp;
}

void SapXepD(float DS[], int n)
{
    for (int i=1; i<=n; i++)
        for (int j=i+1; j<=n; j++)
            if (DS[i] < DS[j])
                HoanVi(DS[i], DS[j]);
}