#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
long randomnumber_for_pointer()
{
    srand( (int) time(0));
    return rand() % 7;
}
int randomnumber(long* a)
{
    srand(*a);
    *a += rand();
    int n = rand() % 7;
    if(n==0)
        return n+1;
    else
        return n;

}
int main()
{
    long *a = new long (randomnumber_for_pointer());
    int sum_player1=0,sum_player2=0;
    int player1_number,player2_number;
    while(true)
    {
        if(sum_player1 <= sum_player2)
        {
            player1_number = randomnumber(a);
            sum_player1+=player1_number;
            cout << "Xuc xac nguoi thu 1: " << player1_number << "      " << "Tong nguoi 1: " << sum_player1 << endl;
            if(sum_player1 >= 100)
            {
                break;
            }
            player2_number = randomnumber(a);
            sum_player2+=player2_number;
            cout << "Xuc xac nguoi thu 2: " << player2_number << "      " << "Tong nguoi 2: " << sum_player2 << endl;
              if(sum_player2 >= 100)
            {
                break;
            }
        }
        else
        {
            player2_number = randomnumber(a);
            sum_player2+=player2_number;
            cout << "Xuc xac nguoi thu 2: " << player2_number << "      " << "Tong nguoi 2: " << sum_player2 << endl;
              if(sum_player2 >= 100)
            {
                break;
            }
            player1_number = randomnumber(a);
            sum_player1+=player1_number;
            cout << "Xuc xac nguoi thu 1: " << player1_number << "      " << "Tong nguoi 1: " << sum_player1 << endl;
              if(sum_player1 >= 100)
            {
                break;
            }
        }

    }
    if(sum_player1 >=100)
    {
        cout << "nguoi choi 1 thang! " << endl;
        return 0;
    }
    if(sum_player2 >=100)
    {
        cout << "nguoi choi 2 thang! " << endl;
    }
     return 0;
}
