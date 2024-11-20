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
        for (int j=0; j<m; j++)
            cout << MT[i][j] << "\t";
        cout << endl;
    }
}

void LocNhieu(short**MT, int n, int m)
{

    for (int i=1; i<= n-2; i++)
        for (int j=1; j<= m-2; j++)
            MT[i][j] = (MT[i-1][j] * MT[i+1][j]  * MT[i][j-1] * MT[i][j+1])/4.0;

    cout << "Da lam phang\n";
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

    LocNhieu(MT, n, m);

    XMaTran(MT, n, m);


    return 0;
}

