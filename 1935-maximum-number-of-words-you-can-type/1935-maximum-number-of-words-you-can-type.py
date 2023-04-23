class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        ls = text.split(' ')
        counter = 0
        for i in ls:  # = ['hello', 'world'] 
            for i2 in brokenLetters:  # = ['a','d']
                if i2 in i:
                    counter -= 1
                    break
            counter += 1
        return counter