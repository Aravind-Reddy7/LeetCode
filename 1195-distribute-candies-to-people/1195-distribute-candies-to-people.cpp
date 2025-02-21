class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
           int counter = 1;
           int index = 0, n = num_people;
           vector<int> result(n);

           while(candies > 0) {
                counter = min(counter, candies);

                result[index % n] += counter;
                candies -= counter;
                counter++, index++;
           }

           return result;
    }
};