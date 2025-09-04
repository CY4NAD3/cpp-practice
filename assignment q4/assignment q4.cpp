#include <iostream>
using namespace std;

int main() {

    float num;

    cout<<"Please enter your number to check for positive, negetive or zero: ";
    cin>>num;

        if(num>0){
            cout<<"The number is positive";
        }
        else if(num<0){
            cout<<"the number is negative";
        }
        else{
            cout<<"The number is zero";
        }

    return 0;
}
