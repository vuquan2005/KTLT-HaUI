#include <iostream>
#include <fstream>

using namespace std;

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

int main()
{
    docFile("Bai5.1.txt");

    return 0;
}
