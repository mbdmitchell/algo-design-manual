//  QUESTION 3-1
//  A common problem for compilers and text editors is determining whether the parentheses in a string are balanced and properly nested. For example, the string ((())())() contains properly nested pairs of parentheses, while the strings )()( and ()) do not. Give an algorithm that returns true if a string contains properly nested and balanced parentheses, and false if otherwise. For full credit, identify the position of the first offending parenthesis if the string is not properly nested and balanced.

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int isValid(string inputString); // returns -1 for correct parens, and n

int main(int argc, const char * argv[]) {
    
    string inputString = "()(())()()";
    cout << isValid(inputString) << endl;
    
    return 0;
}

int isValid(string inputString){
    stack<int> stack;
    
    for (int i = 0; i < inputString.length(); i++)
    {
        if (inputString[i] == '(') stack.push(i);
        else if (stack.empty()) return i;
        else stack.pop();
    }
    if (stack.empty()) return -1;
    else return stack.top();
}
