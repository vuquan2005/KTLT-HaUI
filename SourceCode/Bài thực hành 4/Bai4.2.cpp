#include <iostream>

using namespace std;

void NhapDS(int DS[], int n);
void XuatDS(int DS[], int n);
void HoanVi(int &a, int &b);
void SapXepA(int DS[], int n);
void SapXepD(int DS[], int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua day so: "; cin >> n;
    int DS[n];
    NhapDS(DS, n);

    cout << "Sap xep theo thu tu tang dan\n";
    SapXepA(DS, n);
    XuatDS(DS, n);

    cout << "Sap xep theo thu tu giam dan\n";
    SapXepD(DS, n);
    XuatDS(DS, n);

    return 0;
}

void NhapDS(int DS[], int n)
{
    for (int i=1; i<=n; i++)
    {
        cout << "DS[" << i << "] = ";
        cin >> DS[i];
    }

}

void XuatDS(int DS[], int n)
{
    for (int i=1; i<=n; i++)
        cout << "[" << i << "] = " << DS[i] << endl;
}

void HoanVi(int &a, int &b)
{
    int Temp = a;
    a = b;
    b = Temp;
}

void SapXepA(int DS[], int n)
{
    for (int i=1; i<=n; i++)
        for (int j=i+1; j<=n; j++)
            if (DS[i] > DS[j])
                HoanVi(DS[i], DS[j]);
}

void SapXepD(int DS[], int n)
{
    for (int i=1; i<=n; i++)
        for (int j=i+1; j<=n; j++)
            if (DS[i] < DS[j])
                HoanVi(DS[i], DS[j]);
}



