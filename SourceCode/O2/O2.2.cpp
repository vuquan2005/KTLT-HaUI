#include <iostream>

using namespace std;

void MaTran(float **MT, int n, int m)
{
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            cout << "A[" << i << "," << j << "] = ";
            cin >> MT[i][j];
        }
}

void XMaTran(float **MT, int n, int m)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            cout << MT[i][j] << "\t";
        cout << endl;
    }
}

void MaTranB(float **MT, float **MTB, int n, int m)
{
    int L = MT[0][0];
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            if (L < MT[i][j]) L = MT[i][j];

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            MTB[i][j] = L - MT[i][j];

}

int main()
{
    int n, m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;

    float **MT = new float *[n];
    for (int i=0; i<n; i++)
        MT[i] = new float[m];

    MaTran(MT, n, m);

    float **MTB = new float *[n];
    for (int i=0; i<n; i++)
        MTB[i] = new float[m];

    MaTranB(MT, MTB, n, m);

    XMaTran(MTB, n, m);


    return 0;
}
