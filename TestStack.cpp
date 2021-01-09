#include <iostream>
#include "Stack.hpp"
using namespace std; 

int main()
{
    // Creating the Stacks used for testing, s1, s2, s3
    Stack<int> s1;
    Stack<int> s2;
    Stack<int> s3;

    int x = 1;
    int y = 2;
    int z = 3;
    int n = 4;

    cout << "-----------------Testing push-----------------\n";
    cout << "s1 before: ";
    s1.outputStack();
    cout << "\nPush x = 1\n";
    s1.push(x);
    s1.outputStack();
    cout << "\nPush y = 2\n";
    s1.push(y);
    s1.outputStack();
    cout << "\nPush z = 3\n";
    s1.push(z);
    s1.outputStack();
    cout << "\nPush n = 4\n";
    s1.push(n);
    s1.outputStack();

    cout << "\n\n-----------------Test Top function-----------------\n";
    cout << "s1 is "; s1.outputStack();
    cout << "\nTop of of s1 is... " << s1.top() << "! HAHA TOLD YOU\n";

    cout << "\n-----------------Testing Pop-----------------\n";
    cout << "\ns before: ";
    s1.outputStack();
    s1.pop(x);
    cout << "\nPop x = 4 off of the top of the stack...\n";
    cout << "s1 after: ";
    s1.outputStack();
    cout << "\n";

    cout << "\n-----------------Testing replaceTop-----------------\n";
    cout << "\ns before: ";
    s1.outputStack();
    int temp = 9999;
    s1.replaceTop(temp);

    cout << "\ns1 after: ";
    s1.outputStack();
    cout << "\n";

    cout << "\n-----------------Testing length for s1: -----------------\n";
    cout << "s1 is : "; s1.outputStack();
    cout << "\nThe length of that is " << s1.length() << " ya see?\n";

    cout << "\n-----------------Testing operator= -----------------\n";
    cout << "\ns2 before: ";
    s2.outputStack();
    cout << "\ns1 before: ";
    s1.outputStack();
    s2.operator=(s1);
    cout << "\ns2.operator = (s1)";
    cout << "\ns2 after: ";
    s2.outputStack();
    cout << "\ns1 after: ";
    s1.outputStack();
    cout << "\n";

    // Testing transferFrom
    cout << "\n-----------------Testing transferFrom-----------------\n";
    cout << "\ns3 before: ";
    s3.outputStack();
    cout << "\ns1 before: ";
    s1.outputStack();
    s3.transferFrom(s1);
    cout << "\ns3.transferFrom(s1) ";
    cout << "\ns3 after: ";
    s3.outputStack();
    cout << "\ns1 after: ";
    s1.outputStack();
    cout << "\n";

    return 0;

}//END MAIN
/* Output of main()
-----------------Testing push-----------------
s1 before: Empty Stack
Push x = 1
[1]
Push y = 2
[2-1]
Push z = 3
[3-2-1]
Push n = 4
[4-3-2-1]

-----------------Test Top function-----------------
s1 is [4-3-2-1]
Top of of s1 is... 4! HAHA TOLD YOU

-----------------Testing Pop-----------------

s before: [4-3-2-1]
Pop x = 4 off of the top of the stack...
s1 after: [3-2-1]

-----------------Testing replaceTop-----------------

s before: [3-2-1]
s1 after: [9999-2-1]

-----------------Testing length for s1: -----------------
s1 is : [9999-2-1]
The length of that is 3 ya see?

-----------------Testing operator= -----------------

s2 before: Empty Stack
s1 before: [9999-2-1]
s2.operator = (s1)
s2 after: [9999-2-1]
s1 after: [9999-2-1]

-----------------Testing transferFrom-----------------

s3 before: Empty Stack
s1 before: [9999-2-1]
s3.transferFrom(s1)
s3 after: [9999-2-1]
s1 after: Empty Stack
*/