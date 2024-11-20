#include <iostream>
#include <math.h>

using namespace std;

#pragma region Definition
void Bai_11();
void Bai_12();
void Bai_13();
void Bai_14();
void Bai_15();
void Bai_16();
void Bai_17();
void Bai_18();
void Bai_19();
void Bai_110();
void Bai_111();
void Bai_112();
void Bai_113();
void Bai_114();
void Bai_115();
void Bai_116();
void Bai_117();
void Bai_118();
void Bai_119();
void Bai_120();
void Bai_121();
void Bai_122();

void Bai_21();
void Bai_22();
void Bai_23();
void Bai_24();
void Bai_25();
void Bai_26();
void Bai_27();
void Bai_28();
void Bai_29();
void Bai_210();
short NhapN();
#pragma endregion

int main()
{
    bool check = false;
    do {
        short bt;

        do {

            cout << "   Nhap bai tap: ";
            cin >> bt;
            check = false;
            cout << "-------------------------------------------------------\n\n";
            switch (bt)
            {
            case 11: Bai_11(); break;
            case 12: Bai_12(); break;
            case 13: Bai_13(); break;
            case 14: Bai_14(); break;
            case 15: Bai_15(); break;
            case 16: Bai_16(); break;
            case 17: Bai_17(); break;
            case 18: Bai_18(); break;
            case 19: Bai_19(); break;
            case 110: Bai_110(); break;
            case 111: Bai_111(); break;
            case 112: Bai_112(); break;
            case 113: Bai_113(); break;
            case 114: Bai_114(); break;
            case 115: Bai_115(); break;
            case 116: Bai_116(); break;
            case 117: Bai_117(); break;
            case 118: Bai_118(); break;
            case 119: Bai_119(); break;
            case 120: Bai_120(); break;
            case 121: Bai_121(); break;
            case 122: Bai_122(); break;

            case 21: Bai_21(); break;
            case 22: Bai_22(); break;
            case 23: Bai_23(); break;
            case 24: Bai_24(); break;
            case 25: Bai_25(); break;
            case 26: Bai_26(); break;
            case 27: Bai_27(); break;
            case 28: Bai_28(); break;
            case 29: Bai_29(); break;
            case 210: Bai_210(); break;

            default:
                cout << "Bai tap khong hop le. Bai 1: 1x (x: 1-22), bai 2: 2x (x: 1-10)\n";
                check = true; cin;
                break;
            }
        } while (check);

        cout << "\n\n-------------------------------------------------------\n";
        cout << " Ban co muon lam mot bai tap khac(yes:1 / no : 0) : ";
        short a = 0; cin >> a;
        cout << "-------------------------------------------------------\n";
        check = static_cast<bool>(a);
    } while (check);

    return 0;
}

short NhapN()
{
    short n;
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n < 0) cout << "Vui long nhap n >= 0\n";
    } while (n < 0);
    return n;
}

#pragma region Baitap1
void Bai_11()
{
    int n = NhapN(), kq = 0;

    for (int i = 2; i <= n + 2; i += 2)
        kq += i;

    cout << "S(n) = " << kq;
}

void Bai_12()
{
    int n = NhapN(), kq = 0;

    for (int i = 1; i <= n + 1; i += 2)
        kq += i;

    cout << "S(n) = " << kq;
}

void Bai_13()
{
    int n = NhapN(), kq = 1;

    if (n == 0)
        kq = 0;
    else
        for (int i = 2; i <= n; i++)
            kq += i * i;

    cout << "S(n) = " << kq;
}

void Bai_14()
{
    int n = NhapN(), kq = 1;
    n = NhapN();

    if (n == 0)
        kq = 0;
    else
        for (int i = 2; i <= n; i++)
            kq += (i % 2 == 0 ? -1 : 1) * i*i;

    cout << "S(n) = " << kq;
}

void Bai_15()
{
    float kq = 1;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        for (int i = 2; i <= n; i++)
            kq += 1.0 / i;

        cout << "S(n) = " << kq;
    }
}

void Bai_16()
{
    float kq = 0.5;
    int n = NhapN();
    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        for (int i = 2; i <= n; i++)
            kq += 1.0 / (i * 2);

        cout << "S(n) = " << kq;
    }
}

void Bai_17()
{
    float kq = 1;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        for (int i = 1; i <= n; i++)
            kq += 1.0 / (i * 2 + 1);

        cout << "S(n) = " << kq;
    }
}

void Bai_18()
{
    float kq = 0.5;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        for (int i = 2; i <= n; i++)
            kq += 1.0 / (i * (i + 1));

        cout << "S(n) = " << kq;
    }
}

void Bai_19()
{
    float kq = 0.5;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        for (int i = 2; i <= n; i++)
            kq += (float)i / (i + 1);

        cout << "S(n) = " << kq;
    }
}

void Bai_110()
{
    float kq = 0.5;
    int n = NhapN();

    for (int i = 1; i <= n; i++)
        kq += (float)(i * 2 + 1) / (i * 2 + 2);

    cout << "S(n) = " << kq;
}

void Bai_111()
{
    int n = NhapN(), kq = 1;

    if (n == 0)
        kq = 0;
    else
        for (int i = 2; i <= n; i++)
            kq *= i;

    cout << "S(n) = " << kq;
}

void Bai_112()
{
    int n = NhapN(), kq = 1, t = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
            t *= j;
        kq += t;
    }

    cout << "S(n) = " << kq;
}

void Bai_113()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();
    double kq = x, temp = x;

    cout << "T(x,n) = " << pow(x, n);
}

void Bai_114()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "S(x,n) = 1";
    else
    {
        double kq = x, temp = x;
        for (short i = 2; i <= n; i++)
        {
            temp *= x;
            kq += temp;
        }
        cout << "S(x,n) " << kq;
    }
}

void Bai_115()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "S(x,n) = 1";
    else
    {
        double kq = 0, temp = 1;
        for (short i = 1; i <= n; i++)
        {
            temp *= x * x;
            kq += temp;
        }
        cout << "S(x,n) = " << kq;
    }
}

void Bai_116()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "S(x,n) = 1";
    else
    {
        double kq = x, temp = x;
        for (short i = 1; i <= n; i++)
        {
            temp *= x * x;
            kq += temp;
        }
        cout << "S(x,n) = " << kq;
    }
}

void Bai_117()
{
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        float kq = 1;
        for (int i = 2; i <= n; i++)
        {
            int t = 1;
            for (int j = 2; j <= i; j++)
                t += j;
            kq += 1.0 / t;
        }

        cout << "S(n) = " << kq;
    }
}

void Bai_118()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        float kq = x, temp = x;
        for (int i = 2; i <= n; i++)
        {
            int t = 1;
            for (int j = 2; j <= i; j++)
                t += j;
            temp *= x;
            kq += temp / t;
        }

        cout << "S(n) = " << kq;
    }
}

void Bai_119()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        float kq = x, temp = x;
        for (int i = 2; i <= n; i++)
        {
            int t = 1;
            for (int j = 2; j <= i; j++)
                t *= j;
            temp *= x;
            kq += temp / t;
        }

        cout << "S(n) = " << kq;
    }
}

void Bai_120()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        float kq = x, tu = 1;
        for (int i = 2; i <= n*2; i += 2)
        {
            int mau = 1;
            for (int j = 2; j <= i; j++)
                mau *= j;
            tu *= x*x;
            kq += tu / mau;
        }

        cout << "S(n) = " << kq;
    }
}

void Bai_121()
{
    float x;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n == 0)
        cout << "Khong the chia mot so cho 0";
    else
    {
        float kq = x, tu = x;
        for (int i = 3; i <= n * 3; i += 2)
        {
            int mau = 1;
            for (int j = 2; j <= i; j++)
                mau *= j;
            tu *= x * x;
            kq += tu / mau;
        }

        cout << "S(n) = " << kq;
    }
}

void Bai_122()
{
    int n = NhapN();
    float kq = 0;

    for (short i = 1; i <= n; i++)
        kq = pow(2 + kq, 0.5);

    cout << "S(n) = " << kq;
}
#pragma endregion

#pragma region BaiTap2
void Bai_21()
{
    int n = NhapN();

    if (n % 2 == 0)
    {
        float kq = 1;
        int mau = 1;
        for (int i = 2; i <= n; i++)
        {
            mau *= 2;
            kq += 1.0 / mau;
        }

        cout << "F = " << kq;
    }
    else
    {
        cout << "F = " << pow(pow(n, 2) + 1, 0.5);
    }
}

void Bai_22()
{
    short a, b;
    do {
        cout << "Nhap a: ";
        cin >> a;
        if (a < 0) cout << "Vui long nhap a >= 0\n";
    } while (a < 0); short n;
    do {
        cout << "Nhap b: ";
        cin >> b;
        if (b < 0) cout << "Vui long nhap b >= 0\n";
    } while (b < 0);

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    cout << a;
}

void Bai_23()
{
    int n = NhapN(), chan = 0, le = 0;

    for (int i = 1; i <= n; i += 2)
        le += i;
    for (int i = 2; i <= n ; i += 2)
        chan += i;

    cout << "Tong gia tri chan: " << chan << "\nTong gia tri le: " << le;
}

void Bai_24()
{
    int n = NhapN();

    bool isSNT = 1;

    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
        {
            isSNT = 0;
            break;
        }

    cout << (isSNT ? "n la so nguyen to" : "n khong phai so nguyen to");
}

void Bai_25()
{
    float x, kq = 0;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n>=1 && x!= 0)
    {
        if (n == 1)
            kq = 0;
        else
        {
            x = fabs(x);
            for (short i = 2; i <= n; i++)
                kq += (float)x / i;
        }
    }
    else
    {
        kq = x * n * n * n;
    }
    cout << "P(x,n) = " << kq;
}

void Bai_26()
{
    float x, kq = 0;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (x < 0)
    {
        for (short i = 1; i <= n; i++)
        {
            kq += pow(x + i, 2);
        }
    }
    else
    {
        kq = x;
        for (short i = 1;i <= n; i++)
            kq += i;
    }
    cout << "f(x,n) = " << kq;
}

void Bai_27()
{
    float x, kq = 0;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n >= 2 && n <= 20)
    {
        int n2 = 2 * n;
        for (short i = 1; i <= n; i++)
        {
            kq += x / (n2 - i);
        }
    }
    else
    {
        kq = pow(x, n) + 1;
    }
    cout << "f(x,n) = " << kq;
}

void Bai_28()
{
    float x, kq = 0;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n > 1)
    {
        int n2 = 2 * n;
        for (short i = 1; i <= n; i++)
        {
            kq += ((x - i) * 1.0) / (n + i);
        }
    }
    else
    {
        kq = sqrt(n) + 2016*x;
    }
    cout << "f(x,n) = " << kq;
}

void Bai_29()
{
    float x, kq = 0;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n%2 == 0)
    {
        kq = 5;
        float tu = 1;
        int mau = 1;
        for (short i = 1; i <= n; i++)
        {
            tu *= x;
            mau *= 2;
            kq += (float)tu / mau;
        }
    }
    else
    {
        kq = fabs(x + n);
    }
    cout << "f(x,n) = " << kq;
}

void Bai_210()
{
    float x, kq = 0;
    cout << "Nhap x: "; cin >> x;
    int n = NhapN();

    if (n % 2 == 0)
    {
        kq = 2016 * x + sqrt(n*n + 10);
    }
    else
    {
        kq = x + 1;
        int mau = 1;
        for (short i = 2; i <= n+1; i++)
        {
            mau *= 2;
            kq += 1.0 / mau;
        }
    }
    cout << "f(x,n) = " << kq;
}
#pragma endregion
