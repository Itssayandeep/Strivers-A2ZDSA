#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void dosomething(int num){
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num <<endl;

}
int main(){
    int num=10;
    dosomething(num);
    return 0;
}