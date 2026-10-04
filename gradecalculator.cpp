#include<iostream>
using namespace std;

int main(){
int marks = 49;
if(marks>=90){
    cout<<"Grade A";
}
else if(marks>=75){
    cout << "Grade B";
}
else if(marks>=50){
    cout << "Grade C";
}
else {
    cout << "fail";
}
return 0;
}
