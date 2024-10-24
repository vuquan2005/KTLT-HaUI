#include <iostream>

using namespace std;

long DayCatalan(int n);

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Day Catalan cua " << n << " : " << DayCatalan(n);


    return 0;
}

long DayCatalan(int n)
{
    if (n <= 2)
        return 1;
    else
    {
        long sum = 0;
        for (int i=1; i<n; i++)
        {
            sum += DayCatalan(i)*DayCatalan(n-i);
        }
        return sum;
    }
}

