#include<iostream> // including the library
using namespace std;//providing the standard namesapce
int main()// declaration of main function
{
 int a,b,c; // decalrig variable 
 cout<<"input the sides numbers";
 cin>>a>>b>>c; //receiving the value of sides to variable a,b,c
  if(a==b && a==c)                            //condition to check whether equilateral  
    {
      cout<<endl<<"the teriangle equilateral"<<endl; // output triangle is equilateral
    } 

  else if((a==b)||(a==c)||(b==c)) //condition to check whether it is isoceles
   {
      cout<<endl<<"the triangle is isosceles"<<endl; //  output triangle is  isosceles
   
   }
  else//obvious triangle is scalene
  cout<<endl<<"triangle is scalene"<<endl;//output  atriangle is scalene
  return 0; // 
}

