#include<iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n=s.length();
    if(n <=2)
    {
        cout << "0";
        return 0;
    }
    char* c= new char [n];
    char* d = new char [n];
    for( int i=0; i<n; i++)
    {
        c[i] = s[i];
    }
    int pos=0;
    for( int i=0; i<n; i++)
    {
        if(c[i] == ' ')
        {
            continue;
        }
        d[pos]=c[i];
        pos++;
    }
     for( int i=0; i<pos; i++)
    {

    }
    delete []c;
    delete []d;
    return 0;
}
