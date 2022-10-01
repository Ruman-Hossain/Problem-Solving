#include<bits/stdc++.h>
int maximumDistance(int arr[], int n) {
    unordered_map<int, int> firstPosition;
    int maxDiff = 0;    
    for (int i = 0; i < n; i++) {
        if (firstPosition.find(arr[i]) == firstPosition.end()) {
            firstPosition[arr[i]] = i;
        } else {
            int dif = i - firstPosition[arr[i]];
            maxDiff = max(maxDiff, dif);
        }
    }
    return maxDiff;
}
