class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        unordered_set<int> peopleThatTrust;
        unordered_map<int, int> amountOfTrusts;
            
        for(int i = 0; i < size(trust); ++i)
        {
            peopleThatTrust.insert(trust[i][0]);
            ++amountOfTrusts[trust[i][1]];
        }
            
        for(int i = 1; i <= N; ++i)
        {
            if(!peopleThatTrust.count(i) && amountOfTrusts[i] == N - 1)
            {
                return i;
            }
        }
            
        return -1;
    }
};