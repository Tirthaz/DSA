class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result={""};
        if(digits.empty()) return {};
        string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for(char c:digits)
        {
            string letters=mapping[c-'0'];
            vector<string> temp;
            for(string s:result)
            {
                for(char letter:letters)
                {
                    temp.push_back(s+letter);
                }
            }
            result=temp;
        }
    return result;
    }
};
