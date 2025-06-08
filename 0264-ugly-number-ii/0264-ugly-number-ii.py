class Solution:
    def nthUglyNumber(self, n: int) -> int:
        
        result = [1]

        n1 = n2 = n3 = 0

        for i in range(n-1):
            num1 = result[n1] * 2
            num2 = result[n2] * 3
            num3 = result[n3] * 5

            next_num = min(num1, num2, num3)
            result.append(next_num)

            if num1 == next_num:
                n1 += 1

            if num2 == next_num:
                n2 += 1

            if num3 == next_num:
                n3 += 1

        return result.pop()