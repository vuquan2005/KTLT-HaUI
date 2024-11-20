#include <iostream>
#include <malloc.h>

using namespace std;

void nhapMang(int*& a, int& n)
{
    do {
        cout << "Nhap so phan tu n: ";
        cin >> n;

        if (n >= 30 || n <= 3)
            cout << "Nhap lai!\n"; // "\n" chi de xuong dong thoi, dung "endl" cung duoc

    } while (n >= 30 || n <= 3);

    // cap phat bo nho dong kieu int cho mang a co n phan tu
    a = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat(int* a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << endl;
}

void xuatChan(int* a, int n)
{
    cout << "Cac phan tu chan cua mang a:\n";

    for (int i = 0; i < n; i++) // duyet mang
        if (a[i] % 2 == 0) // neu cac phan tu nay chan
            cout << a[i] << "\t"; // xuat phan tu nay ra man hinh
    cout << endl;
}

void xoa(int* a, int &n)
{
    int x;
    cout << "Nhap phan tu can xoa x: ";
    cin >> x;

    int dem = 0;
    int* b = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
        if (a[i] != x)
        {
            b[dem] = a[i];
            dem++;
        }

    // sua lai kich thuoc mang sau khi xoa
    n = dem;
    // thay doi kich thuoc mang
    a = (int*)realloc(a, n);

    //sao chep b
    for (int i = 0; i < n; i++)
        a[i] = b[i];
    // thu hoi b
    free(b);
}

void Xoa(int* a, int &n)
{
    int x;
    cout << "Nhap phan tu can xoa x: ";
    cin >> x;

    for (int i = 0; i < n; i++)
        if (a[i] == x)
        {
            int d = 0;
            // tim khoang cach tu vi tri can xoa den vi tri isOk tiep theo
            for (int j = i + 1; j < n; j++)
                if (a[j] != x)
                {
                    d = j - i;
                    break;
                }

            for (int j = i; j < n; j++)
                a[j] = a[j + d];

            n -= d;
        }
    a = (int*) realloc(a, n);
}

int demMax(int *a, int n)
{
    int Max = 0;

    for (int i = 0; i < n; i++)
        if (Max < a[i])
            Max = a[i];

    int dem = 0;

    for (int i = 0; i < n; i++)
        if (a[i] == Max)
            dem++;

    return dem;
}

int main()
{
    int* a;
    int n;

    nhapMang(a, n);

    xuatChan(a, n);

    xoa(a, n);
    cout << "Mang sau khi xoa:\n";
    xuat(a, n);

    cout << "So phan tu lon nhat trong mang la: " << demMax(a, n) << '\n';

    return 0;
}
