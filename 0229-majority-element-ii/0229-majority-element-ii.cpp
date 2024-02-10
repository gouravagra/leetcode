class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>n/3){
                v.push_back(it.first);
            }
        }
        return v;
    }
};