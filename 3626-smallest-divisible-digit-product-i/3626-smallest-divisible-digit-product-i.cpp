class Solution {
public:
    int smallestNumber(int n, int t) {
        
        for(int i = n; i <= 100; i++) {
            int product = 1;
            int num = i;

            product = Product(num, product);

            if(product % t == 0)
                return i;
        }

        return n;
    }

    int Product(int number, int product) {
        while(number != 0) 
        {
            product *= number % 10;
            number /= 10;
        }

        return product;
    }
};