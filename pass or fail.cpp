#include<iostream>
using namespace std;

int main(){
    float marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 50 && marks <= 100){
        cout << "PASS!" << endl;
    }
    else{
        cout << "FAIL!" << endl;
    }

    return 0;
}
