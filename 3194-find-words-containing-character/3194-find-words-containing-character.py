class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        
        result = []
        index = 0
        for word in words:
            if x in word:
                result.append(index)
            
            index += 1

        return result