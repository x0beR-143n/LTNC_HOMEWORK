#include<iostream>
using namespace std;
char* weird_string() {
   char c[] = "123345";
   return c;
}

int main()
{
    cout << weird_string();
    return 0;
}
//||=== Build file: "no target" in "no project" (compiler: unknown) ===|
//D:\BT07_LTNC\bai5_A.cpp||In function 'char* weird_string()':|
//D:\BT07_LTNC\bai5_A.cpp|4|warning: address of local variable 'c' returned [-Wreturn-local-addr]|
//||=== Build finished: 0 error(s), 1 warning(s) (0 minute(s), 0 second(s)) ===|
//output: khong in ra gi ca
