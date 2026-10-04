#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b){
    cout<<a<<" is the smallest number.";
    }
    else{
        cout<<b<<" is the smallest number.";
    }
    return 0;
}