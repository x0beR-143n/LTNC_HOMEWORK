#include <iostream>
using namespace std;
int main()
{
    string f0="a";
    string f1="b";
    string fn;
    cout << f0 << " " << f1 << " ";
    for( int i=2; i<=10; i++)
    {
        fn=f1+f0;
        cout << fn << " ";
        f0=f1;
        f1=fn;
    }
    return 0;
}

