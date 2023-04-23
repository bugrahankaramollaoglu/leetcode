class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        ls = text.split(' ')
        counter = 0
        for i in ls:  # = ['a','d']
            for i2 in brokenLetters:  # = ['hello', 'world']
                if i2 in i:
                    counter -= 1
                    break
            counter += 1
        print(counter)


deneme = Solution()
deneme.canBeTypedWords('hello world', 'ad')
# aa o, aa p, aa ğ <-> bb o, bb p, bb ğ <-> cc o, cc p, cc ğ

""" Input: text = "hello world", brokenLetters = "ad"
Output: 1
Explanation: We cannot type "world" because the 'd' key is broken.
"""
