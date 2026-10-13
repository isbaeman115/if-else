#include<iostream>
using namespace std;
int main(){
	float temp;
	cout<<"Enter the Temperature"<<endl;
	cin>>temp;
	if(temp>=30){
		cout<<"HOT!";	
	}
	else{
		cout<<"COLD!";
	}
	return 0;
}
