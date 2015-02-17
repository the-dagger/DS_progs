#include<iostream>
#include<conio.h>
using namespace std;
const int size =10;
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
cout<<"\n The stack is:\n";
for(int i=0;i<=tos;i++)
cout<<s[i]<<"\n";
}
else
cout<<"\n Overflow (._.')";
}

void stack::pop()
{
int item;
if(tos>0)
{
//tos-=1;
item=s[tos];
tos-=1;
cout<<"\n Popped item is"<<item<<"\n";
cout<<"\n Stack is:"<<"\n";
for(int i=0; i<=tos;i++)
cout<<s[i]<<"\n";
}
else
{
item=s[tos];
tos-=1;
cout<<"\n Popped item:";
cout<<item<<"\n";
cout<<"\n Stack is empty t('_'t)";
}
}
main()
{
stack s;
int a,val;
do
{
cout<<"\n Enter the operation to be performed: \n 1.push \n 2.pop \n 3.exit \n choice:";
cin>>a;
switch(a)
{
case 1:
{
cout<<"\n Enter the value to be added:";
cin>>val;
s.push(val);
}
break;
case 2: s.pop();
break;
}
}
while(a!=3);
}

