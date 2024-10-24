#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


bool check(char*S)
{
    int len = strlen(S);
    for (int i = 0; i < len; i++)
        if (S[i] == 'B')
            if (S[i] == 'I')
                if (S[i] == 'S')
                    return true;
    return false;
}

void xoa(char* S, char c)
{
    int len = strlen(S);
    for (int i = 0; i < len; i++)
        if (S[i] == c)
        {
            for (int j = i; j < len; j++)
                S[j] = S[j+1];
            i--;
        }
}

void chenKyTu(char* S, char T, int k)
{
    int len = strlen(S);
    for (int i = len; i >= k; i--)
		S[i] = S[i - 1];
	S[k-1] = T;
}

int main()
{
    char S[100];

    cout<<"Nhap xau: ";
    fflush(stdin);
    gets(S);

    if (check(S))
        cout << "Xau vua nhap chua BIS\n";
    else
        cout << "Xau vua nhap khong chua BIS\n";

    char c;
    cout << "Nhap ki tu can xoa: ";
    cin >> c;
    cout << "Xau sau khi xoa:\n";
    xoa(S, c);
    cout << S << '\n';


    char T;
    int k;
    cout << "Nhap ky tu can chen: ";
    cin >> T;
    cout << "Nhap vi tri can chen: ";
    cin >> k;
    chenKyTu(S, T, k);
    cout << S;



    return 0;
}
