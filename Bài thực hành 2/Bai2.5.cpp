#include<iostream>

using namespace std;

int main()
{
    int DonGia[] = {750, 1250, 1750, 3000};
    int sd, money;
    cout << "Nhap so dien tieu thu: ";
    cin >> sd;

    char i=0;
    for (; sd>=100; i++)
    {
        if (i==3) break;
        money += 100*DonGia[i];
        sd -=100;
    }
    money += sd*DonGia[i];

    cout << "So tien dien la: " << money << "VND\n";

    return 0;
}
