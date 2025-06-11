#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int i1,i2,i3,q1,q2,q3,p1,p2,p3,a1,a2,a3,ta;
cout<<"Enter 1st product code"<<endl;
cin>>i1;
cout<<"Enter 1st product price"<<endl;
cin>>p1;
cout<<"Enter 1st product quantity"<<endl;
cin>>q1;
cout<<"-----------------------------------"<<endl;

cout<<"Enter 2nd product code"<<endl;
cin>>i2;
cout<<"Enter 2nd product price"<<endl;
cin>>p2;
cout<<"Enter 2nd product quantity"<<endl;
cin>>q2;
cout<<"-----------------------------------"<<endl;
cout<<"Enter 3rd product code"<<endl;
cin>>i3;
cout<<"Enter 3rd product price"<<endl;
cin>>p3;
cout<<"Enter 3rd product quantity"<<endl;
cin>>q3;
cout<<"-----------------------------------"<<endl;
a1=p1*q1;
a2=p2*q2;
a3=p3*q3;
ta=a1+a2+a3;
cout<<"Item \t Price \t Qty \t Amount"<<endl;
cout<<i1<<"\t"<<p1<<"\t"<<q1<<"\t"<<a1<<endl;
cout<<i2<<"\t"<<p2<<"\t"<<q2<<"\t"<<a2<<endl;
cout<<i3<<"\t"<<p3<<"\t"<<q3<<"\t"<<a3<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"Total amount = "<<ta;
getch();
return 0;
}
