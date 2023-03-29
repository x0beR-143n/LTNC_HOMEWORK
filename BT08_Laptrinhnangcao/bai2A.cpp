#include<iostream>
using namespace std;
int main( )
{
// Tinh kich thuoc kieu double
//  char a[4] = "abc";
//  for (char *cp = a; (*cp) != '\0'; cp+=2) {
//  cout << (void*) cp << " : " << (*cp) << endl;
// }

// Tinh kich thuoc kieu int
//    int a[]={1,2,3,4};
//    for(int i=0; i<4; i++)
//    {
//        cout << a+i << " : " << a[i]  << endl;
//    }

// Tinh kich thuoc kieu double
    double a[]={1.3,4.5,4.3,4.5,7.8};
    for(int i=0; i<5; i++)
    {
        cout << a+i << " : " << a[i] << endl;
    }
// neu thay cp++ bang cp+=2 thi:
//0x61fe14 : a
//0x61fe16 : c
//0x61fe18 : ↑
//0x61fe1a : a
   return 0;
}

