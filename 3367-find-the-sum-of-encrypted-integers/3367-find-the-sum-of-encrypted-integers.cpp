class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        
        int sum = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) 
            sum += encrypt(nums[i]);
        
        return sum;
    }

    int encrypt(int num) {

        int length = 0;
        int digit = 0;

        while(num != 0) 
        {
            if(num % 10 > digit)
                digit = num % 10;

            num /= 10;
            length++;
        }

        int result = 0;

        for(int i = 0; i < length; i++) 
            result = result * 10 + digit;
        
        return result;
    }
};