class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>ump;
        int len=sentence.size()-1;
        for(int i=0;i<=len;i++){
            ump[sentence[i]]++;
        }

        for(auto pair:ump){
            if(pair.second>0&& ump.size()==26)
             return true;
        }
        return false;
    }
};