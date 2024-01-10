#include <math.h>
#include <iostream>
using namespace std;

#define f(x) pow(x,3)+x*x-3*x-3


int main(){

float x0,x1,x2,f0,f1,f2,e;
int SN = 1; 
cout<<"Enter criteria (e) : ";
cin>>e;
up:
    cout<<"Enter two initial guesses: ";
    cin>>x1>>x2;
    f1 = f(x1);
    f2 = f(x2);

if(f1*f2>0){
    cout<<"wrong initial guess"<<endl; 
    goto up; 
}

cout<<"/t"<<SN<<"\t"<<x1<<"\t"<<x2<<"\t"<<x0<<"\t"<<f0<<endl;

do {
    x0 = (x1+x2)/2;
    f0 =  f(x0);
    cout<<"\t"<<SN<<"\t"<<x1<<"\t"<<x2<<"\t"<<x0<<"\t"<<f0<<endl;
    if (f0*f1<0){
        x2 = x0; 
        f2= f0; 
    }else{
        x1 = x0 ; 
        f1 = f0; 
    }
SN++;
}while(fabs(f0)>e);

cout<<"The required root is : "<<x0;





}