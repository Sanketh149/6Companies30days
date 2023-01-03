class Solution {
public:
    void rec(int currNum, int currSum, vector<vector<int>> &powset, vector<int> &subset, int k, int n)
    {
        if(currSum == n and subset.size() == k)
        {
                powset.push_back(subset);
                return;
        }
        if(currNum > 9) return;
        subset.push_back(currNum);
        rec(currNum+1,currSum+currNum,powset,subset,k,n);
        subset.pop_back();
        rec(currNum+1,currSum,powset,subset,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>powset;
        vector<int>subset;
        rec(1,0,powset,subset,k,n);
        return powset;
    }
};
