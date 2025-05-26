class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size(), max;
        int maxLeft[n], maxRight[n], minLR[n];

        // maximum in left side
        max = height[0];
        for(int i = 0; i < n; i++) {
            maxLeft[i] = max;
            if(height[i] > max)
                max = height[i]; 
        } 

        // maximum in right side
        max = height[n-1];
        for(int i = n-1; i > 0; i--) {
            maxRight[i] = max;
            if(height[i] > max)
                max = height[i]; 
        } 

        // MIN 

        for(int i = 0; i < n; i++) {
            if(maxLeft[i] < maxRight[i])
                minLR[i] = maxLeft[i];
            else
                minLR[i] = maxRight[i];
        }

        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(minLR[i] - height[i] > 0)
                sum += minLR[i] - height[i];
        }

        return sum;
    }
};