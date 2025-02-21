class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int Array[n];

        for(int i = 0; i < n; i++)
            Array[i] = 0;

        vector<int> result;

        for(int i : nums)
            Array[i - 1]++;

        for(int i = 0; i < n; i++) 
            if(Array[i] > 1)
                result.push_back(i+1);

        return result;
    }
};