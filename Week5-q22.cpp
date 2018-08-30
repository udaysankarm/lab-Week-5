#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
 int a,i=1; // decalrig variableand assinging 1 to i 
 cout<<"input a numbers";
 cin>>a; //receiving the value  to variable a
 while(i<=a) // creating for loop with initial value of i as 1 and giving the condition and the increment 
 {
   cout<<i<<"\n";//command to print the result
   i++;//incrementing i
 }

 return 0; 
}

