class Solution {
public:
    int findTheWinner(int n, int k) {
        int size = n;
        int Arr[size], index = 0;

        for(int i = 0; i < n; i++) {
            Arr[i] = i+1;
        }

        int count_k = 0, count_n = n;

        while(count_n != 1) {

            if(Arr[index % n] !=  0)
                count_k += 1;

            if(count_k == k) {
                Arr[index % n] = 0;
                count_n -= 1;
                count_k = 0;
            }

            index += 1;
        }

        for(int i = 0; i < n; i++)
            if(Arr[i] != 0)
                return Arr[i];
        
        return 0;
    }
};