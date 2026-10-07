class Solution {
public:
    int trap(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int lmax = INT_MIN;
        int rmax = INT_MIN;
        int count=0;
        while (low < high) {
            if (height[low] < height[high]) {
                if (height[low]>lmax){
                    lmax=height[low];
                }else{
                    count+=lmax-height[low];
                }
                low++;
            }else{
                if(height[high]>rmax){
                    rmax=height[high];
                }else{
                    count+=rmax-height[high];
                }
                high--;
            }
        }
        return count;
    }
};