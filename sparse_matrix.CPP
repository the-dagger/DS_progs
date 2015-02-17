#include<conio.h>
#include<iostream>
using namespace std;
main()
{
 int A[100][100],B[50][3],m,n,i,j,k=0,l;

 cout<<"Enter the order of the  matrix (m followed by n)\n"<<endl;
 cin>>m>>n;
 cout<<"Enter the elements in the  matrix row by row\n"<<endl;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cin>>A[i][j];
  }
 }
cout<<"_____________________The given matrix is__________________________\n"<<endl;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   cout<<A[i][j]<<" ";
   if(A[i][j]!=0)
   k++;
  }
  cout<<endl;
 }
 if(k>0.25*m*n)
 {
 cout<<" \n too much non zero elements!!!!!!!!!!!!!!";
 }
 else
 cout<<"_____________________The sparse matrix is________________________\n"<<endl;
     cout<<m<<" "<<n<<" "<<k<<endl;
for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(A[i][j]!=0)
   {
   cout<<i<<" "<<j<<" "<<A[i][j]<<endl;
   }
  }
 }
 }

