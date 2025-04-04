#include<iostream>
using namespace std;
int main()
{
    int a=1,f=0,k=0;
   while(a<=20)
   {
    k=a-1;
    while (k>1)
    {
       if(a%k==0) 
       {
         f=1;
         break;
       }
       k--;
    }
    if (f==0)
    {
        cout<<" prime no = "<<a;
    }
   f=0;
   a++;

   }

}