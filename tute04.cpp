/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include<iostream>
using namespace std;

long factorial(int no);
long nCr(int n,int r);


int main(void){
	int n,r;
	cout<<"Enter a value for n :";
	cin>>n;
	cout<<"Enter a value for r :";
	cin>>r;
	cout<<"nCr = ";
	cout<<nCr(n,r)<<endl;
	
	cout<<factorial(n);
	cout<<endl;
	
}
long factorial(int no){
	if(no==1){
		return 1;
	}
	return no* factorial(no-1);
		
	
}
long nCr(int n,int r){
	
	return factorial(n)/(factorial(r)*factorial(n-r));
}