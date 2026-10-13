#include<iostream>
using namespace std;
int main(){
	float bill,final;
	cout<<"Enter the bill amount"<<endl;
		cin>>bill;
	if(bill>=1000){
		final = bill*10/100;
		cout<<"Amount to pay: "<<final<<endl;
	}
	else{
		cout<<"Amount to pay: "<<bill;
	}
	return 0;
}
