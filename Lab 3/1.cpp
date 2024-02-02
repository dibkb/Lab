#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> performOperations(const vector<int>& operations) {
    stack<int> resultStack;

    for (int i = 0; i < operations.size(); ++i) {
        int operationCode = operations[i];

        switch (operationCode) {
            case 1: // PUSH
                if (i + 1 < operations.size()) {
                    resultStack.push(operations[++i]);
                } else {
                    cout << "Error: Incomplete PUSH operation.\n";
                }
                break;

            case 2: // POP
                if (!resultStack.empty()) {
                    resultStack.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 3: // RETURN
                return resultStack;

            default:
                cout << "Error: Unknown operation code " << operationCode << ".\n";
                break;
        }
    }

    return resultStack;
}

int main() {
    vector<int> inputArray = {1, 10, 1, 20, 1, 30, 2, 3};

    stack<int> resultStack = performOperations(inputArray);

    // Print the final stack
    cout << "Final Stack: ";
    while (!resultStack.empty()) {
        cout << resultStack.top() << " ";
        resultStack.pop();
    }

    return 0;
}