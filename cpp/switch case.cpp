//wap to perform arthematic op using switch case
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter the value of a & b =";
	cin>>a>>b ;
	cout<<"\nA ="<<a<<"\nB ="<<b;
	cout<<"\n enter the operation= (+,-,*,/)";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"\n Addition is=" <<a+b;
			break;
		
		case '-':
		    cout<<"\n Subtraction is =" <<a-b;
		    break;
		    
		case '*':
		    cout<<"\n Multiplication is =" <<a*b ;
			break;
			    
		case '/':
		    cout<<"\n Division is=" <<a/b;
			break;
			default :
			cout<<"enter the valid op=";	
	}
	return 0;
	
}
