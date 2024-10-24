#include <iostream>
#include <malloc.h>

using namespace std;

void nhap(int*& a, int& n)
{
    cout << "Nhap so phan tu cua mang n: ";
    cin >> n;
    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat(int* a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << '\t';
    cout << '\n';
}

void xoaPhanTuChan(int*& a, int& n)
{
    int sPTC = 0;
    for (int i = 0; i < n; i++)
        if (a[i]%2 == 0)
        {
            a[i] = NULL;
            sPTC++;
        }

    int *b = new  int[n-sPTC],
        j = 0;

    for (int i = 0; i < n; i++)
        if (a[i] != 0)
        {
            b[j] = a[i];
            j++;
        }

    delete[] a;
    n -= sPTC;
    a = b;
}

int main()
{
    int *a, n;
    nhap(a, n);
    xuat(a, n);
    xoaPhanTuChan(a, n);
    xuat(a, n);

    return 0;
}
