#include <iostream>
#include <string>
using namespace std;

int main() {
    int student_num = 4;   
    int marks[student_num];       
    int highest_mark = 0;       
    int count = 0;              
    int sum=0;
    string f = "first in the class";

    cout << "Input the marks of 4 students: " << endl;

    
    for (int i = 0; i < student_num; i++) {
        cin >> marks[i];
        if (marks[i] >= highest_mark) {
            highest_mark = marks[i]; 
        }
    }

    
    for (int i = 0; i < student_num; i++) {
        if (marks[i] == highest_mark && highest_mark >= 40) {
            count++;
        }
    }

    
    if (count > 0) {
        if (count == 1) {
            cout << count << " student is " << f << " with " << highest_mark << " marks." << endl;
        } else {
            cout << count << " students are " << f << " with " << highest_mark << " marks." << endl;
        }
    } 
    
    return 0;
}
