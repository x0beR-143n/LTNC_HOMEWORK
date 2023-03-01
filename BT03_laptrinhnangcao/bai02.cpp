#include<iostream>
#include<string>
using namespace std;
bool check(string str, int n)
{
    for(int i=0; i<n; i++ )
    {
        if(str[i] != str[n-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    if(check(str, str.length()))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}

