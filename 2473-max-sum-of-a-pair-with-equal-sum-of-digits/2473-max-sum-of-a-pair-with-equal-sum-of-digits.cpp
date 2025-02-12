class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        map<int, vector<int>> mp;

        for(int i = 0; i < n; i++) {
            int temp = sumOfTheDigits(nums[i]);
            mp[temp].push_back(nums[i]);
        }
        
        int maxi = -1;

        for(auto it : mp) {
            if(it.second.size() <= 1) 
                continue;
            
            vector<int> temp = it.second;
            maxi = max(maxi, temp[0] + temp[1]);
        }

        return maxi;
    }

    int sumOfTheDigits(int num) {
        int count = 0;

        while(num != 0) {
            count += num % 10;
            num /= 10;
        }

        return count;
    }
};

/*class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int result = -1;

        sort(nums.begin(), nums.end(), greater<int>());

        for(int i = 0; i < n; i++) {
            int val = sumOfTheDigits(nums[i]);

            for(int j = 0; j < n; j++) {
                if(i == j) 
                    continue;

                if(val == sumOfTheDigits(nums[j])) {
                    int sum = nums[i] + nums[j];
                    if(result < sum)
                        result = sum;
                }
            }
        }

        return result;
    }

    int sumOfTheDigits(int num) {
        int count = 0;

        while(num != 0) {
            count += num % 10;
            num /= 10;
        }

        return count;
    }
};*/