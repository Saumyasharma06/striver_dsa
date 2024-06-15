class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>umap;
        vector<int> vec;

        int len=nums.size();
        for(int i=0;i<len;i++){
            umap[nums[i]]++;
        }
        for(auto& pair:umap){
            if(pair.second==1){
                int a=pair.first;
                vec.push_back(a);
            }
        }
        return vec;
    }
};