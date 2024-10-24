#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

bool check(char s[])
{
    int dem = 0, len = strlen(s);
    for (int i=0; i<len; i++)
        if (s[i] == '(')
            dem++;
        else
            dem--;

    if (dem == 0)
        return true;
    else
        return false;
}

int main()
{
    cout << "Nhap chuoi \'(\', \')\': ";
    char S[100];
    fflush(stdin);
    gets(S);

    bool is = check(S);
    if (is)
        cout << "Xau hop le !";
    else
        cout << "Xau khong hop le !";


    return 0;
}
