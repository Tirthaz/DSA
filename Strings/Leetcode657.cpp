class Solution {
public:
    bool judgeCircle(string moves) {
        int up=0, left=0;
        int down=0,right=0;
        for(char move:moves)
        {
            if(move=='R')  right++;
            else if(move=='L') left++;
            else if(move=='U') up++;
            else if(move=='D') down++;
        }
        return (right==left && up==down);
    }
};
