#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
int a,b;
cout<<"input 2 numbers";
cin>>a>>b;
if(a>b)
cout<<endl<<a<<"is greater than"<<b;
if(a<b)
cout<<endl<<b<<"is greater than"<<a;
else
cout<<endl<<a<<"="<<b;

return 0;
}

