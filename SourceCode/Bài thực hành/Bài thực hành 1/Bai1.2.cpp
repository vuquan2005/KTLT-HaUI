#include <iostream>
#include <string>

using namespace std;

string CDK(int n)
{

	int HCN = n / 10000;
	n = n % 10000;
	int HN = n / 1000;
	n = n % 1000;
	int HT = n / 100;
	n = n % 100;
	int HC = n / 10;
	n = n % 10;
	int HDV = n;

	string	IntToTxt[]{ " khong ", " mot ", " hai ", " ba ", " bon ", " nam ", " sau ", " bay ", " tam ", " chin " };

	string cdk = IntToTxt[HCN] + "muoi" + IntToTxt[HN] + "nghan" + IntToTxt[HT] + "tram" + IntToTxt[HC] + "muoi" + IntToTxt[HDV] + "don vi\n";

	return cdk;

}

int main()
{
	int n;
	cout << "NHap so nguyen: ";
	cin >> n;

	int Temp = n;

	int HCN = n / 10000;
	Temp = n % 10000;
	int HN = Temp / 1000;
	Temp = Temp % 1000;
	int HT = Temp / 100;
	Temp = Temp % 100;
	int HC = Temp / 10;
	Temp = Temp % 10;
	int HDV = Temp;

	cout << HCN << " muoi ngan " << HN << " ngan " << HT << " tram " << HC << " chuc " << HDV << " don vi\n";

	cout << CDK(n);



	return 0;

}
