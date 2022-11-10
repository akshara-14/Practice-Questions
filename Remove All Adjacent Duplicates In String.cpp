class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> st;
        st.push(s[0]);
        int i = 1;
        while (i < s.size())
        {
            if (!st.empty() && s[i] == st.top())
            {
                st.pop();
                i++;
            }

            else
            {
                st.push(s[i]);
                i++;
            }
        }
        string ans = "";
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};