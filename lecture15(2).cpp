#include<iostream>
using namespace std;
int Finder(int a){
    if(a==5){
    cout<<"Its five";
    }else {
        cout<<"ERROR";
    }
    return 0; // Add a return statement here
}
int main(){
    int a = 5;
    Finder(a);
    return 0;
}
