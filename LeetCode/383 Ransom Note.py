
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        magazine_counter = Counter(magazine)
        ransom_counter = Counter(ransomNote)
        
        for c in ransom_counter:
            if c not in magazine_counter or magazine_counter[c]<ransom_counter[c]:
                return False
        return True