#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void doSomething(string &s){
    s[0]='t';
    cout << s <<endl;
}
int main(){
    string s="raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}