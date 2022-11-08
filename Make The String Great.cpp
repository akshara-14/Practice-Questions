class Solution
{
public:
    string makeGood(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (!st.empty() && abs(st.top() - s[i]) == 32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }

        string ans;
        while (!st.empty())
        {
            char cur = st.top();
            st.pop();
            ans = cur + ans;
        }

        return ans;
    }
};