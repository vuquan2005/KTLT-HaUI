#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int n, sl;
    unsigned long long sum;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    if (n<3)
    {
        if (n==2)
        {
            sl=1;
            sum=2;
        }
        else cout << "So tu nhien lon hon 1 moi la so nguyen to";
    }
    else
    {
        sl = 2;
        sum = 5;
        for (int i=5; i<=n; i+=2)
        {
            bool LaSoNT = true;

            for (int j=3; j<=sqrt(i); j+=2)
                if (i%j==0)
                    LaSoNT = false;

            if (LaSoNT)
            {
                sl++;
                sum+=i;
                cout << i << " ";
            }
        }
    }

    cout << "Tu 1 den " << n << " co " << sl << " so nguyen to\n";
    cout << "Tong cua cac so nguyen to do la: " << sum;


    return 0;
}
