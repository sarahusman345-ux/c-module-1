#include <iostream>
using namespace std;

int main(){
int a,b;
char op;

cout<<"Enter: number op number\n";
cin >> a >> op >> b;
switch(op){
    case'+':
    cout<< a+b;break;
    case'-': a-b;break;
    case'*':
    cout<<"a*b";break;
    case'/':
    cout<<"a/b";break;
        if(b==0)
          cout<<"cannot divide by zero";
          else
          cout << a/b ;
    default:
    cout<<"invalid op";
}
return 0;
}