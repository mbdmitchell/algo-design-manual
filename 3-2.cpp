// Question 3-2
// Give an algorithm that takes a string S consisting of opening and closing parentheses, say )()(())()()))())))(, and finds the length of the longest balanced parentheses in S, which is 12 in the example above. (Hint: The solution is not necessarily a contiguous run of parenthesis from S.)

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string longestString(string inputString);

int main(int argc, const char * argv[]) {
    
    string inputString = ")()(())()()))())))(";
    cout << longestString(inputString).length() << endl;
    
    return 0;
}

string longestString(string inputString){
    stack<int> stack;
    
    string outputString;
    
    for (int i = 0; i < inputString.length(); i++)
    {
        if (inputString[i] == '(') {
            stack.push(i);
            outputString += '(';
        }
        else if (stack.empty() == false){
            stack.pop();
            outputString += ')';
        }
    }
    if (outputString[outputString.length()-1] == '('){
        outputString.erase(outputString.begin()+outputString.length()-1);
    }
    return outputString;
}
