#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"enter your 3 digit number\n";//121
    cin>>a;
    b=a/100;//1
    c=a%100;//21
    d=c/10;//2
    e=c%10;//1
cout<<b+d+e;

}