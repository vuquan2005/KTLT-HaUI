#include <iostream>
#include <fstream>

using namespace std;

void nhapMang(float*& a, int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	a = (float*) malloc(n * sizeof(float));

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void sortB(float*& a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

void xuatTep(float* a, int n, char* tenTep)
{
	ofstream file(tenTep, ios::out);
	 if (file.is_open())
    {
        for (int i = 0; i < n; i++)
            file << a[i] << '\t';
        file << '\n';
        cout << "Ghi thanh cong\n";
    }
    else cout << "Khong the mo tep\n";

	file.close();
}

void check10(float* a, int n, char* tenTep)
{
    bool check = true;

    for (int i = 0; i < n; i++)
        if (a[i] <= 10)
        {
            check = false;
            break;
        }

	ofstream file(tenTep, ios::app);
	 if (file.is_open())
    {
        if (check)
            file << "Co";
        else
            file << "Khong";
    }
    else cout << "Khong the mo tep\n";
	file.close();
}

int nsum100(float *a, int n)
{
    int dem = 0;
    float sum = 0;

    for (int i = n-1; i >= 0; i--)
        if (sum <= 100)
        {
            sum += a[i];
            dem++;
        } else break;
    if (sum > 100)
        return dem;
    else return -1;
}

int main()
{
    float *a;
    int n;
    nhapMang(a, n);
    sortB(a, n);
    xuatTep(a, n, "TEST.txt");
    check10(a, n, "Test.txt");

    int soPT = nsum100(a, n);
    if (soPT != -1)
        cout << "Can lay it nhat " << soPT << " phan tu de tong cua chung lon hon 100\n";
    else
        cout << "Tong mang <= 100\n";

    return 0;
}
