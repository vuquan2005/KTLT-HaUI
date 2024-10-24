#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int st = 0, km = 0;
    cout << "Nhap so tien: "; cin >> st;

    km = (st >= 300)? st*0.3 : (st >= 200)? st*0.2 : 0;

    cout << "Khuyen mai: " << km;

    return 0;
}
