class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len = arr.size();
        for(int i=0;i<len;i++){
          int miss = arr[i]-(i+1);
          if(miss >= k)
          return i+k;
        }
        return len + k;   


        // Frequency Counting
        // map<int,int>mpos;
        // for(auto i:arr){
        //     mpos[i]++;
        // }
        // int counter=0;
        // for(int i=1;i<=10001;i++){
        //     //cout<<"mpos["<<i<<"] = "<<mpos[i]<<endl;
        //     if(mpos[i]<1){
        //         counter++;
        //         if(counter == k)
        //             return i;
        //     }
        // }
        // return 0;
    }
};