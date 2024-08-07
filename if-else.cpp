#include<iostream>
using namespace std;
int main(){
    // int age;
    // cin >> age;
    // if(age >= 18){
    //     cout << "You are an adult" ;
    // }
    // else{
    //     cout << "You are not an adult" ;
    // }
    // int marks;
    // cin >> marks;

    // if (marks < 25) {
    //     cout << "Grade: F" << endl;
    // } else if (marks <= 44) {
    //     cout << "Grade: E" << endl;
    // } else if (marks <= 49) {
    //     cout << "Grade: D" << endl;
    // } else if (marks <= 59) {
    //     cout << "Grade: C" << endl;
    // } else if (marks <= 69) {
    //     cout << "Grade: B" << endl;
    // } else if (marks >= 70) {
    //     cout << "Grade: A" << endl;
    // } else {
    //     cout << "Invalid marks entered." << endl;
    // }
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age <18){
        cout << "Cannot do a job";
        return 0;
    }
    else if (age < 55){
        cout << "can do job" << endl;
        return 0;
    }
    else{
        cout << " retirement soon" << endl;
        return 0;

    }

    return 0;
}