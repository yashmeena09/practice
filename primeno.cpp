#include<iostream>
using namespace std;
int main()
{
    int num=1,k=0,f=0;
      

    while(num<=20)
    {
     k=num-1;
     while(k>1)
     {
        if(num%k==0)
        {
            f=1;
            break;

        }
        k--;
     }
     if(f==0)
     {
        cout<<num<<"\t";
     }
     num++;
     f=0;
    }
}


// #include<iostream>
// using namespace std;
// int main(){
//     int num,f=0;
//     cout<<"enter you  num";
//     cin>>num;
//      for(int i=2;i<num;i++)
//      {
//         if(num%i==0)
//         {
//             f=1;
//             break;
//         }
//      }
//      if(f==0)
//      {
//         cout<<"its prime";
//      }
//      else{
//         cout<<"its not";

//      }
     

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,reminder,reverse=0,k;
//     cin>>num;
//     k=num;
//     while (num>0)
//     {
//         reminder= num%10;
//         num=num/10;
//         reverse = reverse*10+reminder;
//     }
       
// if ( k==reverse)
// {
//     cout<<"its palindrome";
// }
//  else{
//     cout<<"its not";
//  }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,j=1;
//     cin>>a;
//  for( a;a>1;a--)
//  {
//     j=j*a;
//  }
//     cout<<j;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//      for(int i=1; i<a;i++)
//      {
//         if(a%i==0)
//         {
//         cout<<i<<"\t";
//         }

//      }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int b,p,k=1;
//     cout<<"enter your base";
//     cin>>b;//2
//     cout<<"enter your power";
//     cin>>p;//4

//     for( int i=1;i<=p;i++)
//     {
//         k=k*b;
        

//     }
//     cout<<k;
    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//         int a;
//         cin>>a;
        
//         if( a%4==0 ||  a%100!=0 && a%400==0  )
    
//         {
//             cout<<"its an leap year = "<<a;
//         }
//         else{
//             cout<<"its not";

//         }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     char k='a';
//  for(  char r='a'; r<='d';r++)
//  {
//     for( char s='c';s>=r;s--)
//     {
//       cout<<"  ";
//     }
//     for( char c='a'; c<=r;c++)
//     {
//         cout<<k<<" ";
//         k++;
    
//     }
//     cout<<"\n";
//  }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//  int a,b,c,d,e;
//  cin>>a;//123
  
//  b= a/100;//1
//  c=a%100;//23
//  d=c/10;//20..........00.......................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................................
//  e=c%10;//3  00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
//   cout<<b+d+e;
 
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int k,num,a , sum=0;//153
//     cin>>num;
// k=num;
//     do
//     {
//         a=num%10;
//         sum=sum+(a*a*a);
//         num = num/10;
        
//     } while (num>0);
   
  
//     if(k==sum)
//     {
//         cout<<"its yes";


//     }
//     else{
//         cout<<"its not ";
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10,b=30;

// a =a+b;
// b=a-b;
// a=a-b;
// cout<<a<<b;

    
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1;

// do
//  {
//         if (a%4==0)
//         {
//             cout<<a<<"\t";
            
//         }
//         a++;
//     }while(a<=90);
// }