class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty())
           return false;
        else
        sort(nums.begin(),nums.end());
        int count = 0;
        for (int i = 0; i < nums.size()-1;i++ ){
            if(nums[i]==nums[i+1]){
                count++;
           
        }
    }
    if(count >=1){
        return true;
    }else {
        return false;
    }
    }
};