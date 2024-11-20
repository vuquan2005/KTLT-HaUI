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


void saoChepPhanTuLe(int*& a, int& n)
{
    int m = n;
    for (int i = 0; i < m; i++)
        if (a[i]%2 == 1)
        {
            a = (int*) realloc(a, (n+1)*sizeof(int));
            a[n] = a[i];
            n++;
        }
}


int main()
{
    int *a, n;
    nhap(a, n);

    saoChepPhanTuLe(a, n);
    xuat(a, n);

    return 0;
}
