class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cnt = 0;
        for(int i=1;i<colors.size();i++) {
            if(colors[i-1] == colors[i]) {
                if(neededTime[i-1] <= neededTime[i]) {
                    cnt += neededTime[i-1];
                }else{
                   cnt += neededTime[i];
                    neededTime[i] = neededTime[i-1];
                }
            }
        }
        
        return cnt;
    }
};