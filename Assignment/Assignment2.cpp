#include <iostream>
#include <malloc.h>
#include <fstream>

using namespace std;

void nhap(double*& a, int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	// Cap phat mot vung nho dong co kich thuoc n kieu double
	a = (double*) malloc(n*sizeof(double));
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void xuat(double* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	cout << '\n';
}

void hoanVi(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

double tongIndexChan(double* a, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i += 2)
		sum += a[i];
	return sum;

}

void sortB(double*& a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				hoanVi(a[i], a[j]);
}

void xuatTep(double* a, int n, char* tenTep)
{
	ofstream file(tenTep);
	file << n << endl;
	file.precision(2);
	for (int i = 0; i < n; i++)
		file << a[i] << ' ';
	file << "\nend";
	file.close();
}

void timMax12(double* a, int n)
{
	double max1 = 0.0, max2 = 0.0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max1)
			max1 = a[i];
		if (a[i] > max2 && a[i] < max1)
			max2 = a[i];
	}
	cout << "So lon nhat trong mang la: " << max1
		<< "\nSo lon thu 2 trong mang la: " << max2 << '\n';
}

bool check3SoDuongLien(double* a, int n)
{
	for (int i = 0; i < n-2; i++)
		if (a[i] > 0)
			if (a[1+i] > 0)
				if (a[2+i] > 0)
					return true;
	return false;
}

void xoaPhanTuLonHon5(double*& a, int& n)
{
    // Cap phat mot vung nho dong co kich thuoc n kieu double cho b
	double* b = (double*) malloc(n*sizeof(double));
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] <= 5)
		{
		    // Sao chep nhung phan tu nho hon hoac bang 5
			b[dem] = a[i];
			// Dem nhung phan tu nho hon hoac bang 5
			dem++;
		}
	// sua lai kich thuoc mang sau khi xoa
    n = dem;
    // thay doi kich thuoc mang
    a = (int*)realloc(a, n);
    
    //sao chep b
    for (int i = 0; i < n; i++)
        a[i] = b[i];
    // thu hoi b
    free(b);
}

int main()
{
	int n = 0;
	// Khai bao con tro a
	double* a;
	nhap(a, n);
	cout << "Tong cac phan tu co chi so chan la: " << tongIndexChan(a, n) << "\n";
	cout << "Mang sau khi sap xep:\n";
	sortB(a, n);
	xuat(a, n);

	xuatTep(a, n, "Text.txt");
	timMax12(a, n);

	if (check3SoDuongLien(a, n))
		cout << "Mang chua 3 so lien tiep duong !\n";
	else
		cout << "Mang khong chua 3 so lien tiep duong !\n";

    cout << "Mang sau khi xoa:\n";
	xoaPhanTuLonHon5(a, n);
	xuat(a, n);

	return 0;
}
