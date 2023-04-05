from typing import List

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        lis = []
        for i in range(1, n+1):
            if (i % 15 == 0):
                lis.append('FizzBuzz')
            elif (i % 3 == 0):
                lis.append('Fizz')
            elif (i % 5 == 0):
                lis.append('Buzz')
            else:
                lis.append(str(i))
        return lis
