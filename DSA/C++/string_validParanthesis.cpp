/*
20. Valid Parentheses
Easy
19.5K
1.1K
Companies
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/

class Solution {
 public:
  bool isValid(string s) {
    stack<char> stack;

    for (const char c : s)
      if (c == '(')
        stack.push(')');
      else if (c == '{')
        stack.push('}');
      else if (c == '[')
        stack.push(']');
      else if (stack.empty() || pop(stack) != c)
        return false;

    return stack.empty();
  }

 private:
  int pop(stack<char>& stack) {
    const int c = stack.top();
    stack.pop();
    return c;
  }
};
