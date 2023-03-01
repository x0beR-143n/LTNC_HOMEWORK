#include <iostream>
#include<string>
#include <cctype>
using namespace std;
bool checktwoString(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    for(int i=0; i< s1.length()/2; i++)
    {
        if(s1[i] != s2[s1.length()-i-1] && toupper(s1[i]) != s2[s1.length()-i-1] && tolower(s1[i]) != s2[s1.length()-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "input your number: ";
    do{
        cin >> n;
        if(n>100 || n<=0)
        {
            cout << "Please input again:";
        }
    }
    while(n>100 || n<=0);
    string a[n];
    for(int i=0; i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1;j<n; j++)
        {
            if(checktwoString(a[i],a[j]))
            {
                int n=a[i].length();
                cout << n <<" " << (a[i])[n/2];
                return 0;
            }
        }
    }
    cout << "Can not find the password! " ;
    return 0;
}
