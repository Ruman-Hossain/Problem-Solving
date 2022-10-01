class Solution {
private:
    int RightMax(vector<int>&arr, int current){
        int mx = 0;
        if(current == arr.size()-1)
            return -1;
        for(int i=current+1;i<arr.size();i++){
            mx=max(mx,arr[i]);
        }
        return mx;
    }
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            arr[i]=RightMax(arr,i);
        }
        return arr;
    }
};