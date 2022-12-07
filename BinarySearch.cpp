class Solution {
public:

    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> vec;
        int c1=0, c2=0;
        for(auto i=0;i<nums.size();i++){
            if(nums[i]==target)
                c2++;
            else if(nums[i]<target)
                c1++;
        }
        for(auto i=c1;i<c2+c1;i++)
            vec.emplace_back(i);
    return vec;
    }
};
