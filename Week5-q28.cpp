#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
 int i,a,c; //decalring i and a and c
 cout<<" Enter a number";//priting to give instruction to user to input a number
 cin>>a;//receving the number as variable a
 c=0;//making initial vale of a to be 0 c is the variable in which teh sum is stored
 for(i=0;i<=a;i+=2) //creating for loop with initialization and a condition aswell as with an  incrementation by 2
 {
   c=c+i;//incrementing c with each even number
 }
 cout<<"sum upto "<<a<<" is "<<c<<endl;//printing value of sum
 return 0; // providing the return value of the main function
} 
