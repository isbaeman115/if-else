#include<iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter a number ";
    cin >> x;

    if(x>=0){
        cout << "POSITIVE" << endl;
    }
    else{
        cout << "NEGATIVE" << endl;
    }

    return 0;
}
