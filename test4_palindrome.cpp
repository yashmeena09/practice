#include<iostream>
using namespace std;
int main()
{
    int num,reminder,k,reverse=0;
    cout<<"enter your number\n";//121
    cin>>num;
    k=num;
   while(num>0)
   {
    reminder =num%10;//1
    num = num/10;//12
    reverse = reverse*10+reminder;//12*10+1=121
    
   }
   if(k==reverse)
   {

    cout<<"the number is palindrome";

   }
   else{
    cout<<"its not";
   }
    
}