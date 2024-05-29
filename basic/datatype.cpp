class Solution {
  public:
    int dataTypeSize(string str) {
        
         if (str=="String"){
            return sizeof(string);
        }
        if (str=="Character"){
            return sizeof(char);
        }
        if (str=="Integer"){
            return sizeof(int);
        }
        if (str=="Float"){
            return sizeof(float);
        }
        if (str=="Double"){
            return sizeof(double);
        }
        if (str=="Long"){
            return sizeof(long);
        }
        if (str=="Long Long"){
            return sizeof(long long);
        }
        if (str=="Double Long"){
            return sizeof(double long);
        }
        else{
            return -1;
        }
    }
};