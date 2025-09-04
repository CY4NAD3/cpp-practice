// #include<iostream>
// using namespace std;

// void print1(int tab[], int N) {
// int i;
// for (i=0; i<N; i++)
// 	cout<< tab[i] <<" " ;
// }


// void print2(int tab[],int N) {
// int * ptr;
// for (ptr=tab; ptr<tab+N; ptr++)
// 	cout <<  *ptr << " ";
// }


// void print3(int *tab,int N) {
// int * ptr;
// for (ptr=tab; ptr<tab+N; ptr++)
// 	cout<< *ptr << " ";
// }


// void print4(int *tab,int N) {
// int i;
// for (i=0; i<N; i++, tab++)
// 	cout<< *tab<< " " ;
// }

// main() {
// int a[5]={1,2,3,4,5}; 
// print1(a,5);
// print2(a,5);
// print3(a,5);
// print4(a,5);
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 60;
//     int *ptr = &a;

//     // Demonstrating pre-decrement and post-decrement
//     cout << *ptr << endl;   // 60
//     cout << --(*ptr) << endl; // Pre-decrement: 59
//     (*ptr)--; // Post-decrement: 59 (prints before decrementing)
//     cout << *ptr << endl;   // Now it's 58

//     int b = 16;
//     int *p = &b;

//     cout << *p << endl;  // 16

//     // Pre-decrement and post-decrement in expressions
//     cout << *p;
//     --*p;
//     --*p;
//     cout<<" "<<*p<<" "<<*p<<endl;

//     cout << *p ;
//     --*p;
//     --*p;
//     cout<<" "<<*p<<" "<<*p<<endl;

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class Person {
// private:
//     string name;
//     int age;

// public:
//     // Default constructor
//     Person() {
//         name = "";
//         age = 0;
//     }

//     // Parameterized constructor
//     Person(string personName, int personAge) {
//         name = personName;
//         age = personAge;
//     }

//     // Function to take input
//     void inputInfo() {
//         cout << "Enter Name: ";
//         cin.ignore();  // Ignore any leftover newline
//         getline(cin, name);  // Allow full name input
//         cout << "Enter Age: ";
//         cin >> age;
//     }

//     // Function to display person details
//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     const int size = 5;
//     Person people[size];  // Array of Person objects

//     // Taking input for each person
//     for (int i = 0; i < size; i++) {
//         cout << "\nPerson " << i + 1 << " Details:\n";
//         people[i].inputInfo();  // Using the input function
//     }

//     // Displaying all persons' details
//     cout << "\nOutput of Persons:\n";
//     for (int i = 0; i < size; i++) {
//         cout << "Person " << i + 1 << ": ";
//         people[i].displayInfo();
//     }

//     return 0;
// }

#include <iostream>


using namespace std;

// class Person {
// private:
//     string name;
//     int age;

// public:
   
//     // Function to take input
//     void inputInfo() {
//         cout << "Enter Name: ";
//         cin>>name;
//         cout << "Enter Age: ";
//         cin >> age;
//     }

//     // Function to display person details
//     void displayInfo() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main() {
//     const int size = 5;
//     Person people[size];  // Array of Person objects

//     // Taking input for each person
//     for (int i = 0; i < size; i++) {
//         cout << "Person " << i + 1 << " Details: "<<endl;
//         people[i].inputInfo();  // Using the input function
//     }

//     // Displaying all persons' details
//     cout << "\nOutput of Persons:\n";
//     for (int i = 0; i < size; i++) {
//         cout << "Person " << i + 1 << ": ";
//         people[i].displayInfo();
//     }

//     return 0;
// }



int main() {
    int x = 2;
    int y = 3;
    int z = 10;
    
    int *p = &x; // p points to x

    std::cout << "Value of x: " << *p << std::endl;

    *p++; // Move to y
    std::cout << "Value of y: " << *p << std::endl;

    *p++; // Move to z
    std::cout << "Value of z: " << *p << std::endl;

    return 0;
}

