class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int maxi=INT_MIN;
        while(low<high){
            int mini=min(height[low],height[high]);
            maxi=max(maxi,(high-low)*mini);
            if(height[low]<=height[high]){
                low++;
            }else{
                high--;
            }
        }
        return maxi;
    }
};