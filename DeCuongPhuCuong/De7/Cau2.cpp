#include <iostream>
#include <malloc.h>
#include <fstream>

using namespace std;

void nhapMang(float*& A, int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    A = (float*) malloc(n*sizeof(float));

    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
}

void xuatFile(float* A, int n, char* tenFile)
{
    ofstream file(tenFile, ios::out);

    if (file.is_open())
    {
        for (int i = 0; i < n; i++)
            file << A[i] << '\t';
        file << '\n';
        cout << "Ghi thanh cong\n";
    }
    else cout << "Khong the mo tep\n";
    file.close();
}

void ghiFile(float* A, int n, char* tenFile)
{
    ofstream file(tenFile, ios::app);

    if (file.is_open())
    {
        for (int i = 0; i < n; i++)
            file << A[i] << '\t';
        file << '\n';
        cout << "Ghi bo sung thanh cong\n";
    } else cout << "Khong the mo tep\n";
    file.close();
}

void HoanVi(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void sortBB(float* A, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i] < A[j])
                HoanVi(A[i], A[j]);
}

float phanTuDuong(float* A, int n, float &sum, int &soLuong)
{
    for (int i = 0; i < n; i++)
        if (A[i] > 0)
        {
            sum += A[i];
            soLuong++;
        }
}

int soPTSum(float* A, int n)
{
    int soPT = 0;
    float sum = 0;
    for (int i = n - 1; i >= 0; i--)
        if (sum + A[i] <= 30)
        {
            sum += A[i];
            soPT++;
        }
    return soPT;
}

int main()
{
    float *A;
    int n;
    nhapMang(A, n);

    xuatFile(A, n, "ABC2022.TXT");
    sortBB(A, n);
    ghiFile(A, n, "ABC2022.TXT");

    float P;
    int soPT;
    phanTuDuong(A, n, P, soPT);
    float Q = P/soPT;
    float k = P/Q;
    cout << "k = " << k << '\n';

    cout << "Co the lay toi da " << soPTSum(A, n) << " phan tu\n";


    return 0;
}
