//
// LINK: https://leetcode.com/problems/valid-parentheses/
//
class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for (int x = 0; x < s.size(); x++)
        {
            char c = s[x];
            // The opening brackets (, [, and {.
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            // Check if stack is not empty.
            else if (!st.empty())
            {
                char top = st.top();
                // We have must have the correct closing bracket.
                if ((top == '(' && c == ')') ||
                    (top == '[' && c == ']') ||
                    (top == '{' && c == '}'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            // We have a closing bracket but no open bracket.
            else
            {
                return false;
            }
        }
        // We must have empty stack at this point.
        return st.empty();
    }
};
