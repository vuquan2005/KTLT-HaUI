#include <iostream>

using namespace std;

short DemSO(int n);

int main()
{
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;

    int so = DemSO(n);
    cout << "So " << n << " co " << so << " chu so";

    return 0;
}

short DemSO(int n)
{
    int So;
    if (n >= 10)
        return 1 + DemSO(n/10);
    else
        return 1;
}
