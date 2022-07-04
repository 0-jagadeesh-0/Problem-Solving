class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n==1)
        {
            return chars.size();
        }
        int count=1;
        string res = "";
        for(int i=0;i<n-1;i++)
        {
            if(chars[i]==chars[i+1])
            {
                count++;
            }
            else
            {
                if(count==1)
                {
                    res+=chars[i];
                }
                else
                {
                    
                    res+=(chars[i]);
                    res+=to_string(count);
                }
                
                count=1;
            }
        } 
        res+=chars[n-1];
        if(count!=1)
        {
            res+=to_string(count);
        }
        chars.clear();
        for(int i=0;i<res.size();i++)
        {
            chars.push_back(res[i]);
        }
        return chars.size();
    }
};
