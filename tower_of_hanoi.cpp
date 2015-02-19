#include<iostream>
#include<conio.h>

using namespace std;

void towers(int,char,char,char);



main()

{

int n;
cout<<"enter the no of disks : ";

cin>>n;

towers(n,'A','C','B');

}



void towers(int n,char from,char to,char aux)

{

if(n==1)

{

cout<<endl<<"move 1 from peg "<<from<<" to "<<to;

return;

}

towers(n-1,from,aux,to); //Recursive Call

cout<<endl<<"move "<<n<<" from peg "<<from<<" to "<<to;

towers(n-1,aux,to,from);

}
