#pragma once
#include "Queue.hpp"
template <class T>
class Stack
   //! is modeled by string(T)
   //!   exemplar self
{
  public: // standard Operations
   Stack();
      //! alters self
      //! ensures: self = < >

   ~Stack();

   void clear(void);
      //! alters self
      //! ensures: self = < >

   void transferFrom(Stack& source);
      //! alters self, source
      //! ensures self = #source  and  source = < >

   Stack& operator =(Stack& rhs);
      //! alters self
      //! preserves rhs
      //! ensures: self = rhs


   // Stack Specific Operations
   void push(T& x);
      //! alters self
      //! consumes x
      //! ensures: self = <#x> * self

   void pop(T& x);
      //! alters self
      //! produces x
      //! requires: self /= < >
      //! ensures: <x> is prefix of #self  and  self = #self[1, |#self|)

   void replaceTop(T& x);
      //! alters self, x
      //! requires: self /= < >
      //!  ensures: <x> is prefix of #self  and  self = <#x> * #self[1, |#self|)

   T& top(void);
      //! preserves self
      //! requires: self /= < >
      //!  ensures: <top> is prefix of self
      // IMPLEMENTED IN STACK.HPP


   int length(void);
      //! preserves self
      //! ensures: length = |self|
      // IMPLEMENTED IN STACK.HPP


   void outputStack(void);
      //! ensures self = #self
      //! preserves self
 
  private: // Representation
  Queue<T> Q1,Q2;
  int size;

};