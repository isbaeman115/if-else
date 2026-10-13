#include<iostream>
using namespace std;

int main(){
    int num1,num2;

   	 cout << "Enter a number ";
    	cin >> num1;
     cout << "Enter a number ";
   	 	cin >> num2;

    if(num1>num2){
        cout << num1 <<"is greater"<<endl;
    }
    else if(num2>num1){
        cout << num2 <<"is greater"<<endl;
    }
	else{
		cout<<"BOTH ARE EQUAL"<<endl;
	}
    return 0;
}
