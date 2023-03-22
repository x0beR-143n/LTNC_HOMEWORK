#include<iostream>
using namespace std;
struct String{
    int length;
    char *str;
    String(const char* c)
    {
        int index=0;
        while(c[index] != '\0')
        {
            index++;
        }
        length=index;
        str = new char[200];
        for(int i=0; i<length;i++)
        {
            str[i]=c[i];
        }
    }
    ~String()
    {
        delete []str;
    }
    void print()
    {
        for(int i=0; i<length; i++)
        {
            cout << str[i];
        }
    }
    void append(const char* c)
    {
        int i=0;
        while(c[i] != '\0')
        {
            i++;
        }
        char *tmp = new char [i+length];
        for(int j=0; j<length; j++)
        {
            tmp[j]=str[j];
        }
        int index=0;
        for(int j=length; j<length+i; j++)
        {
            tmp[j]=c[index];
            index++;
        }
         for(int j=0; j<length+i; j++)
         {
             str[j]=tmp[j];
         }
        length += i;
    }
};
int main()
{
    String s("Hello");
    s.print();
    cout << endl;
    s.append(" there");
    s.print();

    return 0;
}
