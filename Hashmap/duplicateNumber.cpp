class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>umap;
        int len=nums.size();
        for(int i=0;i<len;i++){
            umap[nums[i]]++;
        }
    for (const auto& pair : umap) {
        if(pair.second>1){
            return pair.first;
        }
    }
    return -1;
        
    }
};
        