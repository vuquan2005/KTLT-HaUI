#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x =0;
    cout << "Nhap gia tri x: ";
    cin >> x;

    float fx = (x*x + exp(abs(x)) + pow(sin(x),2)) / pow((x*x + 1),1.0/5);

    cout << "F(x) = " << fx;

    return fx;
}
