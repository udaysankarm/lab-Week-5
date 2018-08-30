#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
 int i,a,c; //decalring i and a and c
 cout<<" Enter a number";//priting to give instruction to user to input a number
 cin>>a;//receving the number as variable a
 c=0;//making initial vale of a to be 0
 for(i=0;i<=a;i++) //creating for loop with initialization and a condition aswell as with an incrementation
 {
  c=c+i;//adding every natural number with  
 }
 cout<<"sum upto "<<a<<" is "<<c<<endl;//printing the sum of natural numbers
 return 0; // providing the return value of the main function
} 
