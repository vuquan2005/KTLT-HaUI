#include <iostream>

using namespace std;

void KQDau(short **Futsal, int n, int m)
{
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            cout << "Nhap ket qua doi " << i << " tran " << j << ": ";
            cin >> Futsal[i][j];
        }
}

void BatBai(short **Futsal, int n, int m)
{

    for (int i=1; i<n; i++)
    {
        int STB = 0;
        for (int j=1; j<n; j++)
            if (Futsal[i][j] == 0) STB++;
        if(STB == 0) cout << "Doi " << i << " bat bai!\n";
    }
}

void BestScore(short **Futsal, int n, int m)
{
    int Total[n];
    for (int i=1; i<n; i++)
    {
        for (int j=1; j<n; j++)
            Total[i] +=  Futsal[i][j];
    }

    int Max = Total[1];
    int IndexMax = 0;
    for (int i=1; i<n; i++)
    {
         if ( Total[i] > Max)
         {
             Max = Total[i];
             IndexMax = i;
         }
    }
    cout << "Doi " << IndexMax << " dung dau voi " << Max << " diem\n";
}

int main()
{
    int n, m;
    cout << " Nhap so doi bong: ";
    cin >> n;
    cout << " Nhap so tran bong: ";
    cin >> m;

    short **Futsal = new short *[n];
    for (int i=0; i<n; i++)
        Futsal[i] = new short[m];

    KQDau(Futsal, n, m);
    BatBai(Futsal, n, m);
    BestScore(Futsal, n, m);





    return 0;
}
