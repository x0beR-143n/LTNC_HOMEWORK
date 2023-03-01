#include<iostream>
using namespace std;
bool isDynamic(int n,bool a[][n],int x, int y)
{
    int count=0;
    int l
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j] == x) || a[i][j]==y )
            {
                for(int k=i-1, k<n; k++)
                    {
                       l=j-1;
                       if(a[k][l] == x)
                       {
                           count++;
                       }
                       if(a[k][l] == y)
                       {
                           count++;
                       }
                       l++;
                    }
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n][2];
   for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            do{
                cin >> a[i][j];
                if(a[i][j] >= n)
                {
                    cout << "Cordinate must be smaller than " << n << " and greater than 0!" << endl;
                    cout << "Please enter again: ";
                }
            }
            while(a[i][j] >= n);
        }
    }
    bool mark[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            mark[i][j]=false;
        }
    }
    for(int i=0; i<n; i++)
    {
        int x=a[i][0];
        int y=a[i][1];
        mark[x][y] = true;
    }
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mark[i][j] == true)
            {
                for(int k=0; k<n; k++)
                    {
                       for(int l=0; l<n;l++)
                       {
                          if( mark[k][l] == true && (i==k || j==l || isDynamic(mark[i][j],mark([k][l])  )  ) )
                          {
                              cout << "Yes";
                              return 0;
                          }
                       }
                    }
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}
