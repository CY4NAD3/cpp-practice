#include <iostream>
using namespace std;

int main() { 
    int items=10;
    int price[items];
    float sum, discounted_price;

    cout<<"Please enter the price of items: ";
    
    for(int i=0; i<items; i++){
        cin>>price[i];
    }
    for(int i=0; i<items; i++){
        sum+=price[i];
    }
        if(sum>5000){
           discounted_price=sum*(5.0/100);
           cout<<"The discounted price is "<<discounted_price;
        }
        else{
            cout<<"Discount not applicable. The price is "<< sum;
        }

    return 0;
}
