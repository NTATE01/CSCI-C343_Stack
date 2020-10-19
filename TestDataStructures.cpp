#include <iostream>
#include "Sequence.hpp"
#include "Queue.hpp"
#include "Stack.hpp"

int main(){
    Sequence<int> Seq1;
    Queue<int> Q1;
    Stack<int> stck1;

    int x = 1;
    Seq1.add(x, 0);
    Seq.outputSequence();
    
    cout << "Program is working...." << endl;
    return 0;
}

