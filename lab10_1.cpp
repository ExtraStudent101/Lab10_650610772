#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double PB,IT,Pay,NB,loan,rate,Total;
int year = 1;
int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> Pay ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	NB=loan;
  while(NB>0) {
	if(year==1){
		cout << fixed << setprecision(2); 
	    cout << setw(13) << left << year; 
		PB = loan ;
		cout << setw(13) << left << PB;
		IT = loan*(rate/100) ;
		cout << setw(13) << left << IT;
        Total = PB + IT ;
		cout << setw(13) << left << Total;
	    if(Total<Pay){
			Pay = Total;
            NB = Total-Total;
		}else{
			NB=Total-Pay;
		}	  
		cout << setw(13) << left << Pay;
		cout << setw(13) << left << NB;
		cout << "\n";
		
	}else {
		cout << fixed << setprecision(2); 
	    cout << setw(13) << left << year;
		PB = NB;
		cout << setw(13) << left << PB;
		IT = PB*(rate/100) ;
		cout << setw(13) << left << IT;
        Total = PB + IT ;
		cout << setw(13) << left << Total;
		
	    if(Total>Pay){
			NB = Total - Pay;
		}else{
			NB = Total-Total;
		    Pay = Total;
		}
		cout << setw(13) << left << Pay;
		cout << setw(13) << left << NB;
		cout << "\n";
		 
	}  year++ ;
  } return 0;
}
