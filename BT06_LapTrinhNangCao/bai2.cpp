#include<iostream>
using namespace std;

char ch[100];
bool b[100];
void print(char c[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout << c[i];
    }
    cout << endl;
}
void dequy(int index, int n, int k)
{
    for(int i=1; i<=n+1; i++)
    {
        if (b[i]){
			ch[index] = (char) (i+96);
			if (index == k){
				print(ch, k);
			} else {
				b[i] = false;
				dequy(index+1,n,k);
				b[i] = true;
			}
		}
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    for (int i = 1; i <=k ; i++){
		b[i] = true;
	}
	dequy(1,n,k);
    return 0;
}
