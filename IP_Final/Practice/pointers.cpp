#include <iostream>
using namespace std;


// int main(){
//     int x=10, y=20;
//     int *p;
//     p=&x;

//     //int t=*p+10;

//     cout<<"x: "<<x<<endl;
//     cout<<"&x: "<<&x<<endl;
//     cout<<"y: "<<y<<endl;
//     cout<<"&y: "<<&y<<endl;
//     cout<<"p: "<<p<<endl;
//     cout<<"&p: "<<&p<<endl;
//     cout<<"*p: "<<*p<<endl;
//     //cout<<"t: "<<t<<endl;
//     //cout<<"&t: "<<&t<<endl;

    
    
//     cout<<"p: "<<p<<endl;
//     cout<<"*p: "<<*p<<endl;

//     return 0;
// }

 


// int main(){ 

//     int x=5 ,y=10; int arr[10]; int *p=arr; 


//     int *ax = &x; 

//     int *ay = &y; 

//     *ax = 20; 
     
//     cout<<"&x: "<<&x<<endl;
//     cout<<"x: "<<x<<endl;
//     cout<<"&y: "<<&y<<endl; 
//     cout<<"y: "<<y<<endl;

//     cout<<endl;

//     cout<<"ay: "<<ay<<endl; 
//     *ay++;
//     cout<<"&y: "<<&y<<endl;
//     cout<<"ay new: "<<ay<<endl; 
    
//     cout<<endl;
     
//     cout<<"ax: "<<ax<<endl;
//     *ax++; 
//     cout<<"&x: "<<&x<<endl;
//     cout<<"ax new: "<<ax<<endl;

//     cout<<endl;

//     y=*ay+1; 

//     cout<<"x: "<<x<<endl; 
//     cout<<"&x: "<<&x<<endl;
//     cout<<"y: "<<y<<endl; 
//     cout<<"&y: "<<&y<<endl;
// cout<<"Size of *p: "<<sizeof(*p)<<endl;    
// }

 


 
 

// int main() { 

//     int p = 3, q = 6; 
//     int arr[5]; 
//     int *ptr = arr; 

     

//     arr[0] = p; 
//     arr[1] = q; 

     

//     cout << *ptr << endl; 
//     cout << *(ptr + 1) << endl; 
    

//     *ptr = *ptr + 2; 
//     *(ptr + 1) = *(ptr + 1) - 3; 
    

//     cout << *ptr << endl; 
//     cout << *(ptr + 1) << endl; 

     
//     ptr++; 
//     cout << *ptr << endl; 

// } 

 

 

 

// int main() { 

//     int a = 100, b = 200; 
//     int *p1 = &a, *p2 = &b; 
   

//     *p1 = *p1 - 50; 
//     *p2 = *p2 + 25; 
  

//     cout << *p1 << endl; 
//     cout << *p2 << endl; 
   

//     *p1++; //use one at a time
//     *p2--; 

     
//     cout << *p1 << endl; // What will be printed here? 
//     cout << *p2 << endl; // What will be printed here? 


//     cout << sizeof(p1) << endl; 

// } 

 



 

// int main() { 

//     int x = 40, y = 60; 

//     int arr[5]; 
//     int *p = arr; 

     
//     arr[0] = x; 
//     arr[1] = y; 

     
//     cout << arr[0] << endl; 
//     cout << arr[1] << endl; 

     
//     x = *p + 5; 
//     y = *(p + 1) * 2; 
 

//     cout << x << endl; 
//     cout << y << endl; 

     
//     cout << sizeof(arr) << endl; 
// } 

 

 

 

// int main() { 

//     int a = 30, b = 50; 
//     int *p1 = &a, *p2 = &b; 


//     *p1 = *p1 + 5; 
//     *p2 = *p2 - 10; 
  

//     cout << *p1 << endl; 
//     cout << *p2 << endl; 


//     *p1++; //use one at a time
//     *p2--; 


//     cout << *p1 << endl; 
//     cout << *p2 << endl; 


//     cout << sizeof(p1) << endl; 

// } 

 
