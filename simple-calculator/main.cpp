#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* possible input states */
    typedef enum { END, ADD, SUB, MUL, DIV } choice_t;
    while (true) {
        cout << "Enter 1st operand: ";
        float op1; 
        cin >> op1;
        cout << "Enter 2nd operand: ";
        float op2; 
        cin >> op2;
        cout <<
            "Choices:\n"
            "   Enter " << ADD << " to ADD\n"
            "   Enter " << SUB << " to SUBTRACT\n"
            "   Enter " << MUL << " to MULTIPLY\n"
            "   Enter " << DIV << " to DIVIDE\n"
            "   Enter " << END << " to EXIT\n"
            "Enter your choice: ";
        /* taking input to an enum */
        choice_t choice = (choice_t) ({ int ch; 
        cin >> ch; 
        ch; 
        });
        float res = 0;
        switch (choice) {
            case ADD: res = op1 + op2; break;
            case SUB: res = op1 - op2; break;
            case MUL: res = op1 * op2; break;
            case DIV: res = op1 / op2; break;
            case END: exit(0);
            default:
                cout << "Invalid input, try again\n";
        }
        cout << "Result = " << res << endl;
    }
    return 0;
}