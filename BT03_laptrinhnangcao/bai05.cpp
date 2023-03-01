#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int h1=0,h2=x-1,c1=0,c2=y-1;
    int count=1;
    int a[x][y];
    while(h1<=h2 && c1<=c2)
    {
        for(int i=c1; i<=c2; i++)
        {
            a[h1][i]=count;
            count++;
        }
        h1++;
        for(int i=h1; i<=h2; i++)
        {
             a[i][c2] = count;
             count++;
        }
        c2--;
        if(c1<=c2)
       {
        for(int i=c2; i>=c1; i--)
        {
            a[h2][i] = count;
            count++;
        }
        h2--;
       }
       if(h1<=h2)
       {
        for(int i = h2; i>=h1; i--)
        {
            a[i][c1]=count;
            count++;
        }
        c1++;
       }
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
