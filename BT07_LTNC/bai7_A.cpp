#include <iostream>
#include<string>
using namespace std;
bool checkequal(string s1, string s2)
{
    int n=s1.length();
    for(int i=0; i<n; i++)
    {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}
int string_Occurence(string dad, string son, int dad_length, int son_length)
{
    int count=0;
    string tmp;
    for(int i=0; i<dad_length;i++)
    {
        if(dad[i]==son[0])
        {
            tmp=dad.substr(i,son_length);
            if(checkequal(tmp,son))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    string c1;
    string c2;
    cin >> c1 >> c2;
    if(c1.length() > c2.length())
    {
        cout << "0";
    }
    else
    {
        cout << string_Occurence(c2,c1,c2.length(),c1.length());
    }
    return 0;
}
