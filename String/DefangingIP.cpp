class Solution {
public:
    string defangIPaddr(string address) {
        int len=address.length()-1;
        string ans;
        for(int i=0;i<=len;i++){
            if(address[i]!='.')
                ans+=address[i];
            else
                ans+="[.]";
        }

            
        return ans;
    }
};