#include<iostream>
#include<string>
using namespace std;
bool checkequal(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    for(int i=0; i<s1.length() ; i++)
    {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}
int checkSubstring(string str,int start, int length)
{
    int firststart=start;
    string substring=str.substr(start,length);
    int count=1;
    string tmp;
    if(start<str.length()-length){
        while(start <= str.length()-length)
        {
            start=start + length;
            tmp=str.substr(start,length);
            if(checkequal(tmp,substring))
            {
                count++;
            }
            else{break;}
        }
    }
    start=firststart;
    if(start >= length)
    {
          while(true)
        {
            start=start - length;
            tmp=str.substr(start,length);
            if(checkequal(tmp,substring))
            {
                count++;
            }
            else{break;}
            if(start<length-1)
            {
                break;
            }
        }
    }
        return count;
}
int main()
{
    int n,m;
    cin >> n >> m;
    string s;
    do{
        cin >> s;
        if(s.length() != n)
        {
            cout << "String must have " << n << " characters!" << endl << "Please input again: ";
        }
    }
    while(s.length() != n);
    int a[m][2];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        cout << checkSubstring( s,a[i][0]-1,a[i][1]-a[i][0]+1) << endl;
      //  cout << s.substr(a[i][0]-1,a[i][1]-a[i][0]+1) << endl;
    }
    return 0;
}
