class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long>s;
        long curr = 0;
        if(tokens.size() == 1) return stoi(tokens[0]);
        for(auto &i:tokens)
        {
            if(i == "+" or i == "-" or i == "*" or i == "/")
            {
                int a = s.top();
                s.pop();
                if(i == "+") s.top()+=a;
                else if(i == "-") s.top()-=a;
                else if(i == "*") s.top()*=a;
                else s.top()/=a;
            }
            else s.push(stoi(i));
        }
        return s.top();
    }
};
