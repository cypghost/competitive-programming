class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        int len = s.length();
    for (int i = 0; i < len; i++) {
 
        // Push the index of the current
        // opening bracket
        if (s[i] == '(') {
            st.push(i);
        }
 
        // Reverse the substring starting
        // after the last encountered opening
        // bracket till the current character
        else if (s[i] == ')') {
            reverse(s.begin() + st.top() + 1,
                    s.begin() + i);
            st.pop();
        }
    }
 
    // To store the modified string
    string res = "";
    for (int i = 0; i < len; i++) {
        if (s[i] != ')' && s[i] != '(')
            res += (s[i]);
    }
    return res;
    }
};
