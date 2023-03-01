#include<iostream>
#include<vector>
using namespace std;
bool checkVector(vector<int> vc, int n)
{   int sum1=0,sum2=0;
    for(int i=1; i<n-1 ; i++)
    {
        for(int j=i-1;j>=0; j--)
        {
            sum1+=vc[j];
        }
        for(int j=i+1;j<n; j++)
        {
            sum2+=vc[j];
        }
        if(sum1==sum2)
        {
            return true;
        }
        else
        {
            sum1=0;
            sum2=0;
        }
    }
    return false;
}
int main()
{
    int n;
	cin >> n;
	vector<int> a[n];
	for( int i=0; i<n; i++)
	{
		int b;
		cin >> b;
		for( int j=0; j<b; j++)
		{
			int x;
			cin >> x;
			a[i].push_back(x);
		}
	}
    for(int i=0; i<n; i++)
    {
        if(checkVector(a[i],a[i].size()))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
