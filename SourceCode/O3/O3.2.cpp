#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

bool Check(char * S)
{
    short dem = 0;

    for(int i=0; i<strlen(S); i++)
    {
        if (S[i]==' ' && S[i+1]==' ') dem++;
    }
 return (dem==0&&dem<=10);
}

int main()
{
    char S[50];
    cout<<"Nhap xau: ";
    fflush(stdin);
    gets(S);

    if (Check(S))
        cout << "Xau Hop le";
    else cout << "Xau khong hop le";

    return 0;
}
