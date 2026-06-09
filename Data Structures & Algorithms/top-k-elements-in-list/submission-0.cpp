class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> minH;
        for(auto &[num,count]:mp){
          minH.push({count,num});
          if(minH.size()>k)
          minH.pop();
        }
        while(!minH.empty()){
            res.push_back(minH.top().second);
            minH.pop();
        }
    return res;
    }
};
