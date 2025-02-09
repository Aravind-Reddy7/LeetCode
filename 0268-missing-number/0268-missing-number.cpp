class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        vector<int> Hash_map(n+1);

        for(int i = 0; i < n; i++) 
            Hash_map[nums[i]]++;
        
        for(int i = 0; i <= n; i++) {
            if(Hash_map[i] == 0)
                return i;
        }

        return n+1;
    }
};