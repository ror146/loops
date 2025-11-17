#include<iostream>
using namespace std;
int main()
{
 int i,j;
 int a[3][3] ;

 cout<<"enter the value of matrix:";
 
  for(int i=0;i<4;i++)
  {
  	for(int j=0;j<4;j++)
  	{
  		cin>>a[i][j];
	  }
  }
  
	  cout<<"matrix is:"<<endl;
	  for(int i=0;i<4;i++)
	  { 
	  for(int j=0;j<4;j++)
	  {
	  	cout<<a[i][j]<<"\n";

	  }
		 }
		 cout<<endl;
		 return 0;   
}