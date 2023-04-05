#include<iostream>
using namespace std;
int main()
{
    int c=10;
  //  int *p= new int (c);
    int *p=&c;
    delete p;
    // chuong trinh bi khung lai 1 luc
    return 0;
}
