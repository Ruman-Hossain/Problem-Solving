/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int h=n,l=1,m;
        while(l<=h){
            m = l + (h-l)/2;
            if(isBadVersion(m) && !isBadVersion(m-1)){
                return m;
            }else if(isBadVersion(m)){
                h = m - 1;
            }else{
                l = m + 1;
            }
        }
        return m;
    }
};
// @lc code=end

