#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    int count=0;
    int maxofi[n];
    int maxofj[n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
            count++;
            if(count%2 != 0)
            {
                maxofi[i]=a[i][j];
            }
            else{
                maxofj[i]=a[i][j];
            }
        }
    }
    sort(maxofi,maxofi+n);
    sort(maxofj, maxofj+n);
    int maxI=maxofi[n-1];
    int maxJ=maxofj[n-1];
    int b[maxI][maxJ];
    for(int i=0; i<maxI; i++)
    {
        for(int j=0; j<maxJ; j++)
        {
            b[i][j]=0;
        }
    }
    int c=a[0][0],d=a[0][1];
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<c ;j++)
       {
           for(int k=0; k<d ; k++)
           {
               b[j][k]= (b[j][k])+1;
           }
       }
        c=a[i+1][0];
        d=a[i+1][1];
    }
    int max=b[0][0];
    int dem;
     for(int i=0; i<maxI; i++)
    {
        for(int j=0; j<maxJ; j++)
        {
            if(b[i][j] > max)
            {
                max = b[i][j];
                dem=0;
            }
            if(b[i][j] == max)
            {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}
