/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/

#include <iostream> 
#include <string> 
 
using namespace std; 
 
int main(){ 
 int n; 
 string binary_num= ""; 
  
 cout<<"Inserisci un numero: "; 
 cin>>n; 
 while (n>0) { 
  if (n%2==0) 
   binary_num='0'+binary_num; 
  else 
   binary_num='1'+binary_num; 
  n/=2; 
 } 
 cout<<"Insert first number: "<< n <<endl;  
 cout<<"The binary number is: "<< binary_num << endl;  
 return 0;
}