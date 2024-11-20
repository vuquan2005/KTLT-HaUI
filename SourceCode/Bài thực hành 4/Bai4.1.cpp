#include <iostream>

using namespace std;

void NhapDS(float DS[], int n);
void XuatDS(float DS[], int n);
float MaxDS(float DS[], int n);
float MinDS(float DS[], int n);
void HoanVi(float *a, float &b);
void SapXepA(float DS[], int n);
void SapXepD(float DS[], int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua day so: ";
    cin >> n;
    float DS[n];
    NhapDS(DS, n);

    cout << "Phan tu lon nhat la: " << MaxDS(DS, n) << endl;
    cout << "Phan tu nho nhat la: " << MinDS(DS, n) << endl;

    cout << "Sap xep theo thu tu tang dan\n";
    SapXepA(DS, n);
    XuatDS(DS, n);

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

float MaxDS(float DS[], int n)
{
    float Max = DS[1];
    for (int i=2; i<=n; i++)
    {
        if (Max < DS[i])
            Max = DS[i];
    }
    return Max;
}

float MinDS(float DS[], int n)
{
    float Min = DS[1];
    for (int i=1; i<=n; i++)
    {
        if (Min > DS[i])
            Min = DS[i];
    }
    return Min;
}

void HoanVi(float &a, float &b)
{
    float Temp = a;
    a = b;
    b = Temp;
}

void SapXepA(float DS[], int n)
{
    for (int i=1; i<=n; i++)
        for (int j=i+1; j<=n; j++)
            if (DS[i] > DS[j])
                HoanVi(DS[i], DS[j]);
}

void SapXepD(float DS[], int n)
{
    for (int i=1; i<=n; i++)
        for (int j=i+1; j<=n; j++)
            if (DS[i] < DS[j])
                HoanVi(DS[i], DS[j]);
}
