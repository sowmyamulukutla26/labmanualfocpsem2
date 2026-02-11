#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3, average;

    cout << "Enter marks of student 1: ";
    cin >> marks1;

    cout << "Enter marks of student 2: ";
    cin >> marks2;

    cout << "Enter marks of student 3: ";
    cin >> marks3;

    average = (marks1 + marks2 + marks3) / 3;

    cout << "The average marks of the three students is: " << average << endl;

    return 0;
}