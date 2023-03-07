#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void convert10to2(int n)
{
    vector<int> vc;
    int b;
    while(n>0)
    {
        b=n%2;
        n=n/2;
        vc.push_back(b);
    }
    for(int i=vc.size()-1 ; i>=0; i--)
    {
        cout << vc[i];
    }
    cout << endl;
}

int convert2to10(int num)
{
    int b;
    int sum=0;
    int count=0;
    while(num>0)
    {
        b=num%10;
        sum+= pow(2,count)* b;
        num=num/10;
        count++;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int binarynum;
    cin >> binarynum;
    convert10to2(n);


    cout << convert2to10(binarynum);
    return 0;
}
