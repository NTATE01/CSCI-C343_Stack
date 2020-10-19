#include <iostream>
#include "Stack.hpp"
using namespace std; 

int main(){
    
    Stack<int> Stack1;
    int x = 1;
    Stack1.push(x);
    Stack1.outputStack();
    cout <<"\n";
    x = 2;
    cout << "x=2\n";
    Stack1.push(x);
    Stack1.outputStack();
    x = 3;
    Stack1.push(x);
    cout <<"Push x=3\n";
    x = 4;
    Stack1.push(x);
    cout << "Push x=4\n";
    Stack1.outputStack();
    cout << "\n";
    Stack1.pop(x);
    cout <<"Pop x = 4\n";
    Stack1.outputStack();
    x = 5; 
    cout << "\n";
    Stack1.push(x);
    cout << "Push x=5\n";
    Stack1.outputStack();
    cout << "\n";
    return 0;
}
