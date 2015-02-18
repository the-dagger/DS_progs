#include<iostream>
using namespace std;
int fact(int);
int temp=0,fact1=1;
main()
{int a;int i=0;
cout<<"Enter the number\n";
cin>>a;
cout<<"The factorial is "<<fact(a);
}
int fact(int b)
{
    if(b!=0)
   {fact1*=b;
    b=b-1;
    fact(b);}
    else
    return fact1;
}
