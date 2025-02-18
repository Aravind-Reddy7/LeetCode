class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int n1 = aliceSizes.size();
        int n2 = bobSizes.size();
        int s1 = 0, s2 = 0;

        for(int num : aliceSizes)
            s1 += num;

        for(int num : bobSizes)
            s2 += num;

        for(int i = 0; i < n1; i++) {
            int a = aliceSizes[i];

            for(int j = 0; j < n2; j++) {
                int b = bobSizes[j];

                if((s1 + b - a) == (s2 + a - b))
                    return {a, b};
            }
        }

        return {aliceSizes[0], bobSizes[0]};
    }
};