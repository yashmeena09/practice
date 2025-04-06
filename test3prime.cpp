#include<iostream>
using namespace std;
int main()
{
int a,k=0,f=0;
cout<<"enter your number\n";
cin>>a;
 while(a>0)
 {
    k=a-1;
    while(k>1)
    {
        if(a%k==0)
        {
            f=1;
            break;
        }
        k--;
    }
 }
if(f==1)
{
    cout<<"the number is not prime";

}
else{
    cout<<"its prime";
}
f=0;
a++;

} 