class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        
        words = []
        words = sentence.split()

        count = 1

        for word in words:
            if word.startswith(searchWord):
                return count

            count += 1

        return -1