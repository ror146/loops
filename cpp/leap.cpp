//wap to check whether given year is leap year 
#include<iostream>
using namespace std;
int main()
{
 unsigned int year;
 cout<<"print a year:";
 cin>>year;
 cout<<"\n this year is:" <<year <<endl;
 if(year%4==0 && year%100!=0 || year%400==0)
 {
 	cout<<year<<" is leap year:" ; 
 }
 else
 {
 	cout<< year<<" is not a leap year:" ;
 }
 return 0;
}
