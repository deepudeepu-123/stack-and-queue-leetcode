class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char temp;
        for(auto a:s)
        {
            if(a=='{' || a=='[' || a=='(')
                st.push(a);
            else
            {
                if(st.size()==0)
                    return false;
                
            
                   temp=st.top();
                    st.pop();
                    if((temp=='{'&& a=='}')||(temp=='('&& a==')')||(temp=='['&& a==']'))
                        continue;
                    else
                        return false;
             }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};