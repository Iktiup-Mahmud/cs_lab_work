#include <bits/stdc++.h>
using namespace std;

// Function to evaluate the value of an arithmetic expression in postfix notation
int evaluatePostfix(const string &expression)
{
    stack<int> stk;
    int i = 0;

    // Step 1: Add a sentinel ')' at the end of the expression
    string P = expression + ")";

    // Step 2: Scan the expression from left to right
    while (P[i] != ')')
    {
        char current = P[i];

        // Step 3: If an operand is encountered, put it on the stack
        if (isdigit(current))
        {
            stk.push(current - '0'); // Convert char to integer and push onto stack
        }
        // Step 4: If an operator is encountered
        else if (current == '+' || current == '-' || current == '*' || current == '/')
        {
            // (a) Remove the two top elements of the stack
            int A = stk.top();
            stk.pop();
            int B = stk.top();
            stk.pop();

            // (b) Evaluate B ⊗ A (where ⊗ is the operator)
            int result;
            switch (current)
            {
            case '+':
                result = B + A;
                break;
            case '-':
                result = B - A;
                break;
            case '*':
                result = B * A;
                break;
            case '/':
                result = B / A;
                break;
            }

            // (c) Place the result back on the stack
            stk.push(result);
        }

        // Move to the next element
        i++;
    }

    // Step 5: Set VALUE equal to the top element on the stack
    int value = stk.top();

    // Step 6: Exit (return the result)
    return value;
}

int main()
{
    string postfixExpression;

    // Get the postfix expression from the user
    cout << "Enter a postfix expression: ";
    cin >> postfixExpression;

    // Evaluate the postfix expression
    int result = evaluatePostfix(postfixExpression);

    // Display the result
    cout << "The value of the postfix expression is: " << result << endl;

    return 0;
}
