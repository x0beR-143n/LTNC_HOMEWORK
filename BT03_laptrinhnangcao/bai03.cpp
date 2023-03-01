#include<iostream>
#include<vector>
using namespace std;
bool check(int n)
{
    vector<int> vc;
    int b;
    while(n>0)
    {
        b=n%10;
        n=n/10;
        vc.push_back(b);
    }
    for(int i=0; i<vc.size()/2; i++)
    {
        if(vc[i] != vc[vc.size()-i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int testcase;
    cin >> testcase;
    int a[testcase][2];
    for(int i=0; i<testcase; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
    }
    int count=0;
    for(int i=0; i<testcase; i++)
    {
        for(int j=a[i][0]; j<= a[i][1]; j++)
        {
            if(check(j))
            {
               count++;
            }
        }
        cout << count << endl;
        count =0;
    }
    return 0;
}
