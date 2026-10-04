# include<iostream>
using namespace std;
int main(){
double a, b;
char op;
cout << "Enter first number, operator , second number : ";
cin >> a >> op >> b;

switch (op) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a/b;
    default:
    cout << "Invalid Operator";
}
return 0;
}