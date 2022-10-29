class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        const int modulo = 1e9+7;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
                
        int lastCut = 0; //To Calculate Beginning to the First cut Area
        int maxWidth=0;
        for(auto curCut:verticalCuts){
            maxWidth = max(maxWidth, curCut - lastCut);
            lastCut = curCut;
        }
        maxWidth = max(maxWidth, w - lastCut); //To Calculate Last Cut to the Ending Area
        
        int maxHeight =0;
        lastCut = 0;          //To Calculate Beginning to the First cut Area
        for(auto curCut:horizontalCuts){
            maxHeight = max(maxHeight, curCut - lastCut);
            lastCut = curCut;
        }
        maxHeight = max(maxHeight, h - lastCut); //To Calculate Last Cut to the Ending Area
        
        return ((long long)maxHeight * maxWidth)% modulo;
    }
};