#pragma once
#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
Stack<T>::Stack(){
    size = 0; 
    //  Stack() Object Constructor
}// Stack


template <class T>
Stack<T>::~Stack<T>(){
    Q1.clear();
    Q2.clear();
    // Empty Stack Destructor
}// ~Stack


// Clears the Stack by clearing the 2 underlying Queues that make up the Stack
template <class T>
void Stack<T>::clear(void){
    Q1.clear();
    Q2.clear();
    size = 0;
}// clear

template <class T>
void Stack<T>::transferFrom(Stack& source){
    Q1.transferFrom(source.Q1);
}// transferFrom

// Gives user the ability to copy Stacks using the = operator, e.g. Stack1 = Stack2
template <class T>
Stack<T>& Stack<T>::operator =(Stack& rhs){
    Q1.operator=(rhs.Q1);
    Q2.operator=(rhs.Q2);
    return (*this);
}// operator = 


template <class T>
void Stack<T>::push(T& x){
    if(Q1.length()==0){
        Q1.enqueue(x);
    }
    else{
        Q2.enqueue(x);
        int size = Q1.length();
        while(size !=0){
            Q2.enqueue(Q1.front());
            Q1.dequeue(x);
            size--;
        }
        Q1.transferFrom(Q2);
    }
}// push


template <class T>
void Stack<T>::pop(T& x){
    if(Q1.length() == 0){
        cout << "Stack is Empty\n";
    }// if
    else{
        Q1.dequeue(Q1.front());
        size--;// Popping the first element off decreases overall size of stack by 1. 
    }// else
}// pop


template <class T>
void Stack<T>::replaceTop(T& x){
    int temp = x;
    x = Q1.front();
    Q1.replaceFront(temp);
    
}// replaceTop


template <class T>
T& Stack<T>::top(void){
        return Q1.front();
}// top


template <class T>
int Stack<T>::length(void){
    return Q1.length();
}// length


template <class T>
void Stack<T>::outputStack(void){
    if(Q1.length() == 0){
        cout << "Stack is Empty";
    }else{
        Q1.outputQueue();
    }
}// outputStack
