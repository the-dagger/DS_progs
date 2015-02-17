#include<iostream>
#include<process.h>
using namespace std;
class llist
{
public:
int info;
llist* next;
};
void display(llist*);
void create(llist*);
int main()
{
    llist* head;
    head=(llist*)new(llist);
    create(head);
    display(head);
}
void create(llist* h2)
{
    int a,flag=1,val=1;
    cout<<"Enter the element to be entered in the llist\n";
    cin>>a;
    h2->info=a;
    cout<<"Want to enter more?(1(yes) or no)\n";
    cin>>val;
    if(val!=1)
    {h2->next=0;return;}
    else
    {
        h2->next=(llist*)new(llist);
        create(h2->next);
    }
}
void display(llist* h1)
{
    if(h1==0)
    {
        cout<<"Llist is empty";
        return;
    }
  else
{while(h1!=0)
{cout<<"Value  "<<h1->info<<"  & next address  "<<h1->next<<endl;
 h1=h1->next;
}
}}
