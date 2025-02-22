class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int num = 0, prev = -1;
        int n = s.size(), i;

        for(i = 0; i < n; i++) {

            if(s[i] >= '0' && s[i] <= '9') { // isdigit(s[i])
                num = num * 10 + (s[i] - '0');
            }else if(num > 0){
                if(num <= prev)
                    return 0;

                prev = num;
                num = 0;
            }
        }

    
        if(num > 0 && num <= prev)
            return false;

        return true;
    
    }
};