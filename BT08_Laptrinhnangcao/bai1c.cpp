#include<iostream>
using namespace std;
int strlen(char *c)
{
    int index=0;
    while(c[index] != '\0')
    {
        index++;
    }
    return index;
}
void reverse_(char c[],int length)
{
    int index=length-1;
    char tmp[length];
    for(int i=0;i<length;i++)
    {
        tmp[i]=c[index];
        index--;
    }
    for(int i=0;i<length; i++)
    {
        c[i]=tmp[i];
    }
}
void delete_(char a[], char c, int &length)
{
    int count=0;
    int index;
    for(int i=0; i<length; i++)
    {
        if(a[i]==c)
        {
            count++;
        }
    }
    if(count ==0)
    {
        return;
    }
    for(int i=0; i<length; i++)
    {
        if(a[i]==c)
        {
            for(int j=i; j<length; j++)
            {
                if(j==length-1)
                    a[j]='\0';
                else
                    a[j]=a[j+1];
            }
            length--;
        }
    }
}
void pad_right(char c[], int n, int &length)
{
    if(length >= n)
    {
        return;
    }
    for(int i=length; i< n; i++)
    {
        c[i]=' ';
    }
    for(int i=n ; i<100; i++)
    {
        c[i]='\0';
    }
    length =n;
}
void pad_left(char a[],int n, int &length)
{
    if(length >= n)
    {
        return;
    }
    char c[length];
    for(int i=0; i<length; i++)
    {
        c[i]=a[i];
    }

    for(int i=0; i<length; i++)
    {
        a[i+n-length]=c[i];
    }
    for(int i=0; i<n-length; i++)
    {
        a[i]=' ';
    }
    for(int i=n ; i<100; i++)
    {
        a[i]='\0';
    }
    length=n;
}
void truncate(char a[], int n, int &length)
{
    if(length <= n)
    {
        return;
    }
    for(int i=n; i< length; i++)
    {
        a[i]='\0';
    }
    length=n;
}
bool is_palindrome(char a[], int length)
{
    for(int i=0; i<length/2; i++)
    {
        if(a[i] != a[length-1-i])
        {
            return false;
        }
    }
    return true;

}
void trim_left(char a[], int &length)
{
    int count=0;
    while(a[count] == ' ')
    {
        a[count]='\0';
        count++;
        length--;
    }
}
void trim_right(char a[], int &length)
{
    int count=length-1;
    while(a[count] == ' ')
    {
        a[count]='\0';
        count--;
        length--;
    }
}
int main()
{
    char c[100];
    cin >> c;
    int length=strlen(c);
    cout << "Length: " << length << endl;

    cout << "Phan a: "<< endl;
    reverse_(c,length);
    cout <<"After reverse: "<< c << endl;

    cout << "Phan b: "<< endl;
    char character;
    cin >> character;
    delete_(c,character,length);
    cout << "After delete character " << character << ": "<< c << endl;

    cout << "Phan c: " <<  endl;
    int n_c;
    cin >> n_c;
    pad_right(c,n_c,length);
    cout << c << endl << "Length: " << length <<endl;

    cout << "Phan d: "<< endl;
    int n_d;
    cin >> n_d;
    pad_left(c,n_d,length);
    cout << c << endl << "Length: " << length << endl;

    cout << "Phan e: " << endl;
    int n_e;
    cin >> n_e;
    truncate(c,n_e,length);
    cout << c << endl << "Length: " << length <<endl;

    cout << "Phan f: " << endl;
    if(is_palindrome(c,length))
    {
        cout << "True" << endl;
    }
    else
   {
       cout << "False" << endl;
    }

    cout << "Phan g: " <<  endl;
    trim_left(c,length);
    cout << c  << endl << "Length: " << length << endl;

    cout << "Phan h: " <<  endl;
    trim_right(c,length);
    cout << c  << endl << "Length: " << length << endl;

    return 0;
}
