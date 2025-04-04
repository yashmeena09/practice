#include<iostream>
using namespace std;
int main()
{
    float p,c,m,tot,per;
    cout<<"enter your p,c,m marks\n";
    cin>>p>>c>>m;
    tot=(p+c+m)/3;
    per=tot/3;
    if(p<0 || p>100 || c<0 || c>100 || m<0 || m>100)
    {
        cout<<"invalid numbers";
    }
    else if ( p<35 && c>=35 && m>=35)
    {
        cout<<"u got supply in physics";
    }

    else if ( p>=35 && c<35 && m>=35)
      {                                     
        cout<<"u got supply in chemisrty";
    }

    else if ( p>=35 && c>=35 && m<35)
    {
        cout<<"u got supply in maths";
    }
    else if( (p<35 && c<35) || (m<35 && c<35) ||(p<35 && m<35) )
   {
     cout<<"u r fail";

   }
   else if (per>=60)
   {
    cout<<"1division\t"<<"marks=\t"<<tot<<"per="<<per;
   }
   else if (per<60 && per>50)
   {
    cout<<"2division\t"<<"marks=\t"<<tot<<"per="<<per;
   }
   else 
   {
    cout<<"3division\t"<<"marks=\t"<<tot<<"per="<<per;
   }
    
}