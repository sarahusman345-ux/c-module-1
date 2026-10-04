#include <iostream>
using namespace std;
int main(){
int choice;
cout<< "1pizza 2burger 3pasta 4Exit\n";
cin >> choice;

switch(choice){
    case1:
        cout << "pizza";
        break;
    case2:
    cout <<" burger";
    break;
    case3:
    cout <<" pasta";
    break;
    case4:
    cout << "goodbye";
    break;
    default:
    cout << "invalid choice";
}
return 0;
}