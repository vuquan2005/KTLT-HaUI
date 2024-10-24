#include <iostream>

using namespace std;

void NhapDS(float DS[], int n);
void KTSort(float DS[], int n);

int main()
{
    int n;
    cout << "Nhap so phan tu cua day so: ";
    cin >> n;
    float DS[n];
    NhapDS(DS, n);

    KTSort(DS, n);

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

void KTSort(float DS[], int n)
{
    int Asc = 0,
        AscB = 0,
        Desc = 0,
        DescB = 0;
    for (int i=1; i<n; i++)
    {
        if(DS[i] < DS[i+1]) Asc++;
        if(DS[i] <= DS[i+1]) AscB++;
        if(DS[i] > DS[i+1]) Desc++;
        if(DS[i] >= DS[i+1])DescB++;
    }

    if(Desc==n-1) cout << "Mang duoc sap giam ngat";
    else if(Asc==n-1) cout << "Mang duoc sap tang ngat";
    else if(AscB==n-1 && DescB==n-1) cout << "Mang bang nhau";
    else if(AscB==n-1) cout << "Mang duoc sap tang";
    else if(DescB==n-1) cout << "Mang duoc sap giam";
    else cout << "Mang khong duoc sap xep";
}
