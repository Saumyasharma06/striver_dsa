class Solution {
public:
    string reversePrefix(string word, char ch) {
        int low=0;
        int high=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch)
              break;
              high++;
        }
        if(high>=word.size()){
            return word;
        }

        while(low<=high){
            swap(word[low],word[high]);
            low++;
            high--;
        }
        return word;

    }
};