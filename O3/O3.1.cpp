#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int SCCT(char * S)
{
    int d=0;

    for(int i=0; i< strlen(S) ; i++)
        if (S[i] >= 97 && S[i] <= 122) d++;
    return d;
}
void Del(char *S, char k)
{
    for(int i=0; i<strlen(S); i++)
        while(S[i]==k)
            for(int j=i; j<strlen(S); j++)
                S[j] = S[j+1];
}
int main()
{
    char S[50];
    cout<<"Nhap xau: ";
    fflush(stdin);
    gets(S);

    cout<<"Xau co " <<SCCT(S)<< " chu thuong\n";

    Del(S, 'a');
    cout<< "Xau sau khi xoa: "<<S;
    return 0;
}
