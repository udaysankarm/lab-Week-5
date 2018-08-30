#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
 int i=65;//Declaration  and assignment of a
 while(i<=90) //while loop with condition where i store the ASCII value of the alphabet
 {
  cout<<(char)i<<" "; //priting i after assinging data type of i as char explicit type conversion 
  i++; // incrementing i
 }
 cout<<"\n"; //for leaving aline vacant
 return 0; // providing the return value of the main function
} 
