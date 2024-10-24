#include <iostream>

using namespace std;

void nhap(int a[], int& n);
void xuat(int a[], int n);
void hoanVi(int& a, int& b);
void sortB(int a[], int n);
short timPhanTuThuocDoan(int a[], int n, int Min, int Max);
bool check3SoChanLien(int a[], int n);

int main()
{
	int n = 0;
	int a[100]{};
	nhap(a, n);
	sortB(a, n);
	xuat(a, n);

    int Min = 10,
        Max = 20;
	int soPT = timPhanTuThuocDoan(a, n, Min, Max);
	cout << "So phan tu thuoc doan [" << Min << ", " << Max << "] : " << soPT << '\n';

	bool check3 = check3SoChanLien(a, n);
	if (check3 == true)
		cout << "Mang chua 3 so chan lien tiep !\n";
	else
		cout << "Mang khong chua 3 so chan lien tiep !\n";

	return 0;
}

void nhap(int a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	cout << '\n';
}

void hoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void sortB(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				hoanVi(a[i], a[j]);
}

short timPhanTuThuocDoan(int a[], int n, int Min, int Max)
{
    short dem = 0;
	for (int i = 0; i < n; i++)
        if (a[i] >= Min && a[i] <= Max)
            dem++;
        else if (a[i] > Max) return dem; // Vi mang da sort
	return dem;
}

bool check3SoChanLien(int a[], int n)
{
	for (int i = 0; i < n-2; i++)
		if (a[i] % 2 == 0)
			if (a[1+i] % 2 == 0)
				if (a[2+i] % 2 == 0)
					return true;
	return false;
}
