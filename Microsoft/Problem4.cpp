class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int currIter = 0, n = nums.size(), sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            currIter += i*nums[i];
        }
        int maxi = currIter;
        for(int i=n-1;i>=0;i--)
        {
            currIter += sum-n*nums[i];
            maxi = max(maxi, currIter);
        }
        return maxi;
    }
};
