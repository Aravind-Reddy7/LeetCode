class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int n = colors.size();
        int count = 0;

        for(int i = 0; i < n - 2; i++) {
            if(colors[i] != colors[i+1] && colors[i+1] != colors[i+2])
                count++;
        }

        if(colors[n-2] != colors[n-1] && colors[0] != colors[n-1])
            count++;

        if(colors[n-1] != colors[0] && colors[0] != colors[1])
            count++;

        return count;
    }
};