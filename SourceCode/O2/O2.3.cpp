#include <iostream>

using namespace std;

void MaTran(short**MT, int n, int m)
{
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            cout << "A[" << i << "," << j << "] = ";
            cin >> MT[i][j];
        }
}

void XMaTran(short**MT, int n, int m)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout << MT[i][j] << "\t";
        cout << endl;
    }
}

void LocNhieu(short**MT, int n, int m, float k)
{
    float Sum = 0, AVG = 0;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            Sum += MT[i][j];

    AVG = Sum/(n*m);


    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if(MT[i][j] > k)
                MT[i][j] = AVG;

    cout << "Da loc nhieu\n";
}

int main()
{
    int n, m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;

    short**MT = new short*[n];
    for (int i=0; i<n; i++)
        MT[i] = new short[m];

    MaTran(MT, n, m);
////////////////
    float k;
    cout << "Nhap K: ";
    cin >> k;

    LocNhieu(MT, n, m, k);

    XMaTran(MT, n, m);


    return 0;
}

