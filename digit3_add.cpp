#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"enter your 3 digit\n"; //234
    cin>>a; 
    b=a/100;  //gtting value 2
    c=a%100;  //gtting value 34
    d=c/10;   //getting value 3
    e=c%10;   //getting value 4

    cout<<"the sum is ="<<b+d+e;//2 3 4 
}



