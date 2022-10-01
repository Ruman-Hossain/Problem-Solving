class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        int[] count = new int[26];
        for (char c: magazine.toCharArray()) {
            count[c - 'a'] += 1;
        }
        for (char c: ransomNote.toCharArray()) {
            if (count[c - 'a'] == 0) { return false; }
            count[c - 'a'] -= 1;
        }
        return true;
    }
}