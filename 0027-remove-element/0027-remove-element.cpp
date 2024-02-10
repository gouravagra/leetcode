class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        int a=0;
        
        for(int i=0;i<n.size();i++){
            if(n[i]!=val){
               n[a]=n[i];
                a++;
            }
        
           
    }
        return a;
    }
        
};