#include <iostream>
#include <malloc.h>

using namespace std;

void khaiBao(float**& a, int& n, int& m)
{
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
    a = new float* [n];
    for (int i = 0; i < n; i++)
        a[i] = new float[m];
}

void nhap(float**& a, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j]; // dong i, cot j
        }
}

void xuat(float** a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << '\t';
        cout << '\n';
    }
}

void MinMax(float** a, int n, int m)
{
    float* Min = new float[m],
        *Max = (float*) malloc(n*sizeof(float));

    for (int i = 0; i < n; i++) // n dong
    {
        for (int j = 0; j < m; j++) // m cot
            if (Max[i] < a[i][j])
                Max[i] = a[i][j];
        cout << "Gia tri lon nhat dong " << i << " la: " << Max[i] << '\n';
    }


    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
            if (Min[i] > a[i][j])
                Min[i] = a[i][j];
        cout << "Gia tri nho nhat cot " << j << " la: " << Min[j] << '\n';
    }
}

void maTranChuyenVi(float** a, int n, int m, float**& b)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            float temp = a[i][j];
            b[j][i] = temp;
        }
}

void doiDau(float**& a, int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = -a[i][j];
}

int main()
{
    int n, m;
    float** a;
    khaiBao(a, n, m);
    nhap(a, n, m);
    xuat(a, n, m);

    MinMax(a, n, m);

    float** b = new float* [m];
    for (int i = 0; i < m; i++)
        a[i] = new float[n];

    cout << "Doi dau a:\n";
    doiDau(a, n, m);
    xuat(a, n, m);
    cout << "Ma tran chuyen vi cua a:\n";
    maTranChuyenVi(a, n, m, b);
    xuat(b, m, n);


    return 0;
}
