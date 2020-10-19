//----------- main function for Sequence class---------------------------
#include <iostream>
#include "Sequence.hpp"

int main()
{
    Sequence<int> s1;
    int x = 1;
    int y = 2;
    s1.add(x, 0);
    s1.add(y, 1);
    s1.outputSequence(); cout << "\n";
    Sequence<int> s2;
    s2.transferFrom(s1);
    s2.outputSequence();
    s1.outputSequence();
} //main
