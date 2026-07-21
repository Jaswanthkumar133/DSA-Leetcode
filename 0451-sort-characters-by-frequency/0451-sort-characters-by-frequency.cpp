class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(char ch:s){
            mpp[ch]++;
        }
        vector<pair<char,int>>pq;
        for(auto it:mpp){
            pq.push_back(it);
        }
        sort(pq.begin(),pq.end(),[](pair<char,int>&a ,pair<char,int>&b){
            return a.second>b.second;
        });
        string ans="";
        for(int i=0;i<pq.size();i++){
            int count=pq[i].second;
            char ch=pq[i].first;
            ans+=string(count,ch);
        }
        return ans;
    }
};