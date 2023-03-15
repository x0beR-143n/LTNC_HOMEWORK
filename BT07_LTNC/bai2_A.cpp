#include<iostream>
using namespace std;
void printSize(int b[])
{
    cout << sizeof(b) << endl;
}
int main()
{
    int a[]={5,4,7,2,42,54,4,6};
    int b[]={3,4,5,6,2,4,5,35,6,3,4,3,2};
    cout << sizeof(a)<< endl;
    cout << sizeof(b) << endl;
    printSize(b);
    printSize(a);
    // ket qua khac nhau : trong ham main la 32 va 52 con tu ham PrintSize la 8 va 8
    return 0;
}
