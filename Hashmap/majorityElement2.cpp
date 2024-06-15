class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        vector<int>vec;
        int len=nums.size();
        for(int i=0;i<len;i++){
            umap[nums[i]]++;
        }
    for (const auto& pair : umap) {
        if(pair.second>len/3){
            int a= pair.first;
            vec.push_back(a);
        }
        
    }
    return vec;
        
    }
};