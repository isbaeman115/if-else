#include<iostream>
using namespace std;
int main(){
	int password, correct = 1234;
	cout<<"Enter Your Password"<<endl;
	cin>>password;
	if(password==correct){
		cout<<"Access granted";
	}
	else{
		cout<<"Access denied";
	}
	return 0;
}

