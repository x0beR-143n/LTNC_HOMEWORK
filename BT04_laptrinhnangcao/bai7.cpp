#include<iostream>
#include<string>
using namespace std;

int main()
{
   string input;
    cin >> input;
   string result="ab";
   string result1="abc";
   int n=input.length();
    for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
        result[0]=input[i];
        result[1]=input[j];
        cout << result <<" ";
       }
   }
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           for(int k=0; k<n; k++)
           {
                result1[0]=input[i];
                result1[1]=input[j];
                result1[2]=input[k];
                cout << result1 <<" ";
           }
       }
   }

    return 0;
}

