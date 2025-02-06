class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        
        unordered_map<int, int> productCount;
        int result = 0;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i+1; j < nums.size(); j++) {
                int product = nums[i] * nums[j];

                productCount[product]++;
            }
        }

        for(auto& entry : productCount) {
            int count = entry.second;

            if(count > 1) {
                result += ((count) * (count - 1) / 2) * 8;
            }
        }

        return result;
    }
};