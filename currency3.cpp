#include<iostream>
using namespace std;
int main(){
    int amount;
    int rs500=0, rs100=0, rs50=0, rs20=0, rs10=0, rs5=0;
    cout<<"enter amount\n";
    cin>>amount;//1025
    if(amount>=500){
        rs500= amount/500;//2
        amount=amount%500;//25
     

    } if(amount>=100){
        rs100= amount/100;
        amount=amount%100;
        
    }
     if(amount>=50){
        rs50= amount/50;
        amount=amount%50;
        
    } 
     if(amount>=20){
        rs20= amount/20;
        amount=amount%20;
    
    }
     if(amount>=10){
        rs10= amount/10;
        amount=amount%10;
        
    }
     if(amount>=5){
        rs5= amount/5;
        amount=amount%5;
        
    }
    cout<<"500="<<rs500 <<endl;
    
    cout<<"100="<<rs100 <<endl;
    cout<<"50="<<rs50 <<"\n";
    cout<<"20="<<rs20 <<"\n";
    cout<<"10="<<rs10 <<"\n";
    cout<<"5="<<rs5<<"\n";
}