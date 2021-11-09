#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_max = 0;
        int global_max = INT_MIN;
        for(int i=0;i<nums.size();i++){
            local_max =local_max+nums[i];
            if(local_max>global_max)
                global_max = local_max;
            if(local_max<0)
                local_max=0;
        }
        return global_max;
    }
};

int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    Solution sol;
    int n;
    while(cin >> n){
        vector <int> vec(n);
        for (int &x : vec) {
            cin >> x;
        }
        int maxi = sol.maxSubArray(vec);
        cout << maxi << endl;
    }
}
