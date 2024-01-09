class Solution {
public:
    void sortColors(vector<int>& nums) {
        int  Z=0;
        int o=0;
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                Z++;
            }
        else  if(nums[i]==1)o++;
            else if(nums[i]==2) t++;
            
        }
        for(int i=0;i<Z;i++){
            nums[i]=0;
        }
        for(int i=0;i<o;i++){
            nums[i+Z]=1;
        }
        for(int i=0;i<t;i++){
            nums[i+Z+o]=2;
        }
    }
};