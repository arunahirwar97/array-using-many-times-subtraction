#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c,d;
float arr[10];
cout<<"Enter the value of a ::";
cin>>a;
for(int i=1;i<=a;i++)
{

cout<<"Number  of ["<<i<<"] ::";
cout<<"\n\t";
cout<<"Enter a value of b =";
cin>>b;
cout<<"Enter a value of c ="<<"\n";
cin>>c;
d=c-b;

cout<<c<<"-"<<b<<"="<<c-b;
cout<<"\n";
}
getch();
return 0;
}