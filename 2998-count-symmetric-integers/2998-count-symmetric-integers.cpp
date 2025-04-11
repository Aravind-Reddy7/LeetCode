class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int n, result = 0;

        for(int i = low; i <= high; i++) {

            n = no_of_digits(i);

            int num = i, sum1 = 0, sum2 = 0;

            if(n % 2 == 0) {

                for(int j = n; j >= 1; j--) {
                    if(j > n / 2)
                        sum2 += num % 10;
                    else
                        sum1 += num % 10;

                    num = num / 10;
                }

                if(sum1 == sum2)
                    result++;
            }
        }

        return result;
        
    }

    int no_of_digits(int num) {

        int count = 0;

        while(num != 0) {
            num = num / 10;
            count++;
        }

        return count;
    }
};