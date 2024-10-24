#include <iostream>
#include <fstream>

using namespace std;

void nhap(int*& a, int& n);
void docFile(char* tenFile);
void xuatFile(int* a, int n, char* tenTep);

int main()
{
    int* a, n;
    nhap(a, n);

    xuatFile(a, n, "DATHUC.txt");
    docFile("DATHUC.txt");

    return 0;
}

void nhap(int*& a, int& n)
{
    cout << "Nhap so phan tu cua mang n: ";
    cin >> n;
    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void docFile(char* tenFile)
{
    char dong[50];
    ifstream file(tenFile);
    while(!file.eof())
    {
        file.getline(dong, 50);
        cout << dong << '\n';
    }
    //file.close;
}

void xuatFile(int* a, int n, char* tenTep)
{
	ofstream file(tenTep);
	file << n << endl;
	for (int i = 0; i < n; i++)
		file << a[i] << ' ';
    file << endl;
	for (int i = 0; i < n - 1; i++)
        file << a[i] << 'x' << i << " + ";
    file << a[n-1] << 'x' << n-1;
	file.close();
}
