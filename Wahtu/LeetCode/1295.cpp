class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            string temp = to_string(nums[i]);
            if(temp.length() % 2 == 0) ans++;
        }

        return ans;
    }
};
