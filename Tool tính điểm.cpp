#include <iostream>
#include <malloc.h>
#include <math.h>
#include <conio.h>

using namespace std;

void xuatDiem(float *a, int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] << '\t';
    cout << "\n";
}

void xuatHeSo(float *a, int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] * 100 << "%\t";
    cout << "\n";
}

void nhapDiem(float *&a, int n)
{
    bool check;
    do{
        check = false;
        for (int i=0; i<n; i++)
        {
            cout << "   TX[" << i+1 << "] = ";
            cin >> a[i];
        }


        for (int i=0; i<n; i++)
            if (a[i] <0 || a[i] > 10)
                check = true;
        if (check)
            cout << "  Diem TX loi!\n";
    } while(check);
}

float hsdTHi(float *hs, int n)
{
    float sumHSTX = 0;
    for (int i=0; i < n; i++)
        sumHSTX += hs[i];

    return 1 - sumHSTX;
}

void nhapHeSo(float *&a, int n, float &hsdt)
{
    bool check;
    do{
        check = false;
        for (int i=0; i<n; i++)
        {
            cout << "   HS[" << i+1 << "] = ";
            cin >> a[i];
        }

        hsdt = hsdTHi(a, n);

        bool check = false;
        for (int i=0; i<n; i++)
            if (a[i] <=0)
                check = true;

        if (hsdt <= 0 || check)
            cout << "  He so diem TX loi!\n";
    } while(hsdt <= 0 || check);
}

float tinhDiemTong(float *tx, float *hs, int n)
{
    float sum = 0;
    for (int i=0; i < n; i++)
        sum += tx[i] * hs[i];
    return sum;
}

float timDiemThi(float sum, float hsdt, float diemCanDat)
{
    return (diemCanDat - sum)/hsdt;
}

void xuatDiemCanDat(float sum, float hsdt)
{
    cout.precision(2);
    cout << "D : " << (timDiemThi(sum, hsdt, 4.0))  << " \n";
    cout << "D+: " << (timDiemThi(sum, hsdt, 4.7)) << "\n";
    cout << "C : " << (timDiemThi(sum, hsdt, 5.5)) << "\n";
    cout << "C+: " << (timDiemThi(sum, hsdt, 6.2)) << "\n";
    cout << "B : " << (timDiemThi(sum, hsdt, 7.0)) << "\n";
    cout << "B+: " << (timDiemThi(sum, hsdt, 7.7)) << "\n";
    cout << "A : " << (timDiemThi(sum, hsdt, 8.5)) << "\n";
}

int main()
{
    int n;
    cout << "Nhap so diem thuong xuyen: ";
    cin >> n;

    float *tx = (float*) calloc(n, sizeof(float)),
        *heso = (float*) calloc(n, sizeof(float)),
        hsdt = 0;

    cout << "Nhap he so diem thuong xuyen:\n";
    nhapHeSo(heso, n, hsdt);
    cout << "Nhap diem thuong xuyen:\n";
    nhapDiem(tx, n);

    cout << "---------------------------------\n";
    cout << "Diem cua ban la:\n";
    xuatHeSo(heso, n);
    xuatDiem(tx, n);

    cout << "He so diem thi la: " << hsdt*100 << "%\n";

    float sum = tinhDiemTong(tx, heso, n);
    cout << "Ban da co: " << sum << "/10 diem\n";

    cout << "\nDiem ban can dat:\n";
    xuatDiemCanDat(sum, hsdt);

    return 0;
}
