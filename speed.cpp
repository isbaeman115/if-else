#include<iostream>
using namespace std;
int main(){
	float speed;
	cout<<"Enter Speed"<<endl;
	cin>>speed;
	if(speed<=50){
		cout<<"Safe speed";
	}
	else{
		cout<<" Over the speed limit";
	}
	return 0;
}

