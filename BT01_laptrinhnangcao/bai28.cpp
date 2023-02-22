#include <iostream>
using namespace std;
int main()
{
    int count =1;
    int dem=1;
    for( int j=1; j<24; j++)
    {
        dem++;
        int i=j;
        if(i>12)
        {
            i=i%12;
        }
        if(i==1 && count ==1)
        {
            cout << "12 midnight" << endl;
            cout << "1am" <<endl;
            count++;
            continue;
        }
        if(i==12)
        {
            cout << "12 noon" << endl;
            continue;
        }
        if(dem > 12)
        {
        cout << i << "pm" << endl;
        continue;
        }
        cout << i << "am" << endl;
    }
    return 0;
}
