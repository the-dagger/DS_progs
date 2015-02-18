#include<iostream>
using namespace std;
int sum(int);
int temp=0,sum1=0;
main()
{int a;int i=0;
cout<<"Enter the number\n";
cin>>a;
cout<<"The sum of the digits is "<<sum(a)<<endl;
}
int sum(int b)
{
if(b!=0)
{temp=b%10;
sum1+=temp;
b=b/10;
sum(b);}
else
return sum1;
}
