#include <iostream>

using namespace std;

unsigned long long GT(int n);

int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    float S = (float)(GT(n)+1)/GT(n+1);

    cout << "Gia tri cu S la: " << S;

    return 0;
}

unsigned long long GT(int n)
{
    int gt = 1;
    for (int i = 2; i <= n; i++)
        gt *= i;
    return gt;
}

