from typing import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        nb = self.list_to_int(digits)
        nb += 1
        return (self.int_to_list(nb))

    def list_to_int(self, n):
        num = 0
        for i in n:
            num = i + (num * 10)
        return num

    def int_to_list(self, n):
        nbList = list()
        while (n):
            nbList.append(n % 10)
            n //= 10
        nbList.reverse()
        return nbList

"""
dene = Solution()
asd = [1, 2, 3]
print(dene.plusOne(asd))
"""