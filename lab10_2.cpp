#include<iostream>
using namespace std;

//Write the function printO() here
 void  printO(int N,int M){
	if(M>0&&N>0){
	for(int Y =0;Y<N;Y++){
		for(int X=0;X<M;X++){
			cout << "O" ;
		}
		cout << "\n";
	}	
 }else{
	cout << "Invalid input";
 }
 }

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
