#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    string a[m][n];
    string b[m][n];
    int count=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j] == "*")
            {
                a[i][j] == "1";
            }
        }
    }
     for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
