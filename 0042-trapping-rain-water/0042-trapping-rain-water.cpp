class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size(), sum = 0;
        int left = 0, right = n - 1;
        int maxL = height[left], maxR = height[right];

        while(left < right) {
            if(maxL < maxR) {
                left += 1;
                maxL = max(maxL, height[left]);
                sum += maxL - height[left];
            }else {
                right -= 1;
                maxR = max(maxR, height[right]);
                sum += maxR - height[right];
            }
        }

        return sum;
    }
};