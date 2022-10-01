class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        
        int pointer = 1;
        while(pointer<arr.size()){
            
            // cout<<"First Loop :  "<<arr[pointer-1]<<" : "<<arr[pointer]<<" : "<<pointer<<endl;
            
            if(arr[pointer-1]<arr[pointer])
                pointer++;
            else
                break;
        }

        if(pointer==arr.size()||pointer==1) 
            return false;
        
        while(pointer<arr.size()){
            
            // cout<<"Second Loop :  "<<arr[pointer-1]<<" : "<<arr[pointer]<<" : "<<pointer<<endl;
            // cout<<arr[pointer-1]<<" "<<arr[pointer]<<endl;
            if(arr[pointer-1]>arr[pointer])
                pointer++;
            else
                break;
        }

        if(pointer==arr.size())
            return true;
        else 
            return false;
    }
};