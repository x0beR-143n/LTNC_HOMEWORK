#include<iostream>
using namespace std;
int binary_Search(int *a, int left, int right, int x)
    {
        while(left <= right)
        {
            if(x == a[(right+left) /2])
            {
                return (right+left) /2;
            }
            if(x > a[(right+left) /2])
            {
                left=(right+left) /2 +1;
            }
            if(x < a[(right+left) /2])
            {
                right=(right+left) /2 -1;
            }
        }
        return 0;
    }
int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for(int i=0; i<n; i++)
    {
        cin >> *(a+i);
    }
    int number;
    cin >> number;
    int result = binary_Search(a,0,n-1, number);
    if(result != 0 )
        cout << "Found! The position of the number you want to find: " << result+1;
    else
        cout << "Can not find your number";
    return 0;
}
