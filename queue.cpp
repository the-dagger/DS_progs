#include<iostream>
#include<conio.h>
using namespace std;
const int size =5
;
int tos=-1;
class stack
{
public:
int s[size];
void push(int);
void pop();
};
void stack::push(int item)
{
if(tos<size)
{
tos=tos+1;
s[tos]=item;
cout<<"\n The queue is:\n";
for(int i=tos;i>=0;i--)
cout<<s[i]<<"\n";
}
else
{cout<<"\n Queue is full (._.') \n";
cout<<"The queue is \n";
for(int m=0;m<tos;m++)
    {cout<<s[m]<<endl;}
}}

void stack::pop()
{
int item;
if(tos>0)
{
//tos-=1;
item=s[0];
for(int k=0;k<tos;k++)
    s[k]=s[k+1];
tos-=1;
cout<<"\n Deqeued item is "<<item<<"\n";
cout<<"\n Queue is: "<<"\n";
for(int i=tos; i>=0;i--)
cout<<s[i]<<"\n";
}
else
{
//item=s[tos];
//tos-=1;
//cout<<"\n Popped item:";
//cout<<item<<"\n";
cout<<"\n Queue is empty t('_'t)";
}
}
main()
{
stack s;
int a,val;
do
{
cout<<"\n Enter the operation to be performed: \n 1.Enqueue \n 2.Dequeue \n ";
cin>>a;
switch(a)
{
case 1:
cout<<"\n Enter the value to be added:";
cin>>val;
s.push(val);
break;
case 2: s.pop();
break;
}}
while(a!=3);
}

