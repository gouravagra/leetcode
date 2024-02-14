class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int a=nums1.size(),b=nums2.size();
               int i=0,j=0;
        while(i<a&&j<b){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }else{
                v.push_back(nums2[j]);
                j++;
            }
            
        }
        while(i<a){v.push_back(nums1[i]);i++;}
          while(j<b){v.push_back(nums2[j]);j++;}
       
        int s=v.size();
        
        
        
        
        
        
        
        if(s%2==1){
            return v[s/2];
        }
        else{
            return (v[s/2]+v[(s/2)-1])/2.0;
        }
       
        
        return 2.0;
    
    }
};