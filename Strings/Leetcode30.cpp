class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int wordlen = words[0].size();
        int totallen = wordlen * words.size();
        int totalwords = words.size();
        vector<int> result;
        unordered_map<string,int> mpp;

        for(string word : words)
            mpp[word]++;

        for(int offset = 0; offset < wordlen; offset++)
        {
            int left = offset, count = 0;
            unordered_map<string,int> seen;

            for(int right = offset; right+wordlen <= s.size(); right += wordlen)
            {
                string chunk = s.substr(right,wordlen);

                if(mpp.count(chunk))
                {
                    seen[chunk]++;
                    count++;

                    while(seen[chunk] > mpp[chunk])
                    {
                        string leftword = s.substr(left, wordlen);
                        seen[leftword]--;
                        count--;
                        left +=wordlen;
                    }

                    if(count == totalwords)
                        result.push_back(left);
                }
                else
                {
                    seen.clear();
                    count = 0;
                    left = right+wordlen;
                }
            }
        }
        return result;
    }
};
