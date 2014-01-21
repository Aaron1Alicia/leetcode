class Solution {
public:
    bool isValid(string s) {
        		stack<char> tmp;

				for(int i=0;i<s.length();i++)
				{
					if(s[i]=='(' || s[i]=='[' || s[i]=='{')
					{
						tmp.push(s[i]);
						continue;
					}
					else if(tmp.empty())
					{
					    return false;
					}
					else if(s[i]==')')
					{
						if(tmp.top()!='(')
						{
							return false;
						}
						tmp.pop();
						continue;
					}
					else if(s[i]==']')
					{
						if(tmp.top()!='[')
						{
							return false;
						}
						tmp.pop();
						continue;
					}
					else 
					{
						if(tmp.top()!='{')
						{
							return false;
						}
						tmp.pop();
						continue;
					}

				}

				if(tmp.size())
				{
					return false;
				}
				else
				{
					return true;
				}

        
    }
};
