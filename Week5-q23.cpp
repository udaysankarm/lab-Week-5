#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
 int a,i; // decalrig variable 
 cout<<"input a numbers";
 cin>>a; //receiving the value  to variable a
 i=a;
 while(i>0) // creating for loop with giving the condition and the increment 
 {
   cout<<i<<"\n";//command to print the result
   i=i-1; //decrementation of i
 }

 return 0; 
}

