#include <iostream>
#include <malloc.h>
#include <fstream>

using namespace std;

void nhap(long*& a, int& n)
{
    cout << "Nhap so phan tu n: ";
    cin >> n;
    a = (long*) malloc(n * sizeof(long));
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> a[i];
    }
}

void sortBB(long* a, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void xuatFile(long *a, int n, char *tenFile)
{
    ofstream file(tenFile, ios::out);
    for (int i = 0; i < n; i++)
        file << a[i];
    file <<endl;
    file.close();
}

//for (int i = 0; i < n; i++)

int main()
{

    return 0;
}
