class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        for(auto i : s) {
            if(i == '(' || i == '[' || i == '{')
                st.push(i);
            else if(!st.empty() && ((i == ')' && st.top() == '(') || (i == ']' && st.top() == '[') || (i == '}' && st.top() == '{')))
                st.pop();
            else
                return false;
        }
        if(st.size() > 0)
            return false;
        return true;
    }
};