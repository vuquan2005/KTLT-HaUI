#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void chenKyTu(char S[])
{
	char c, temp;
	cout << "Nhap ki tu can chen: ";
	cin >> c;
	int k, len = strlen(S);
	do {
		cout << "Nhap vi tri can chen ki tu " << c << " : ";
		cin >> k;
		if (k >= len || k >= 1) cout << "Nhap k <= " << len + 1 << '\n';
	} while (k >= len || k >= 1);

	for (int i = len; i >= k; i--)
		S[i] = S[i - 1];
	S[k-1] = c;
}

int main()
{
	char S[80]{};
	cout << "Nhap xau: ";
	fflush(stdin);
	gets(S);

	chenKyTu(S);

	cout << S;

	return 0;
}
