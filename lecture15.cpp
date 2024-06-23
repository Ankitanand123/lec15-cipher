#include<iostream>
using namespace std;
int compare(int a,int b) {
    if(a > b) {
        return a;
    }else {
        return b;
    }
}
int main(){
    int a = 4;
    int b = 6;
    cout<<"The greater number is "<<compare(a,b);
    return 0;
}
