class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int len=nums.size();
        for(int i=0;i<len;i++){
            umap[nums[i]]++;
        }
    for (const auto& pair : umap) {
        if(pair.second>len/2){
            return pair.first;
        }
        
    }
    return -1;
   
        
    }
};