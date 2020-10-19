// TestQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Queue.hpp"
using namespace std;

#include <iostream>

int main()
{
    cout<<"\nGoal of this main() is to fix the length() function:\n"; 

    int a = 1; 
    int b = 2;
    int c = 3; 
    int d = 4; 
    int e = 5; 
    int f = 6; 
    Queue<int> Q1;
    Q1.enqueue(a);
    Q1.outputQueue();
    cout << "\nQ1 length = " << Q1.length() << endl;

    Q1.enqueue(b);
    Q1.outputQueue();
    cout << "\nQ1 length = " << Q1.length() << endl;

    Q1.enqueue(c);
    Q1.outputQueue();
    cout << "\nQ1 length = " << Q1.length() << endl;

    Q1.enqueue(d);
    Q1.outputQueue();
    cout << "\nQ1 length = " << Q1.length() << endl;

    Q1.enqueue(e);
    Q1.outputQueue();
    cout << "\nQ1 length = " << Q1.length() << endl;

    Q1.enqueue(f);
    Q1.outputQueue();
    cout << "\nQ1 length = " << Q1.length() << endl;

    int y = 10;
    Q1.replaceFront(y);
    cout << "Replacing Front of Q1 with y=10\n";
    Q1.outputQueue();
    cout <<"\n";
    Q1.dequeue(e);
    Q1.outputQueue();
    cout << "\n";

    cout << "Testing the transferFrom operation \n";
    Queue<int> Q2;

    Q2.transferFrom(Q1);
    Q2.outputQueue();
    cout << "\n";

    


    return 0; 
}