// Last updated: 9/3/2025, 9:06:13 AM
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (auto ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if (st.empty())
                    return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') || (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')) {
                    return false;
                }
            }
        }

        return st.empty();
            
    }
};