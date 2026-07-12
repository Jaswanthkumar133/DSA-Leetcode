class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0){
            return arr;
        }
        if(arr.size()==1){
            return{1};
        }
        vector<int>del(arr);
        sort(del.begin(),del.end());
        unordered_map<int,int>mpp;
        int count=1;
        mpp[del[0]]=1;
        for(int i=1;i<del.size();i++){
            if(del[i]>del[i-1]){
                mpp[del[i]]=count+1;
                count++;
            }else{
                mpp[del[i]]=count;
            }
        }
        vector<int>temp(arr.size());
        for(int i=0;i<arr.size();i++){
            temp[i]=mpp[arr[i]];
        }
        return temp;
    }
};