class Solution {
public:
    bool isPalindrome(int x) {
        int temp;
        int reverse=0;
        int digit=0;
        temp=x;
        if(temp<0){
            return false;
        }
        while(temp!=0){
            digit=temp%10;

            if (reverse > (INT_MAX - digit) / 10) {
                return false; // Overflow would occur
            }
            reverse=reverse*10+digit;
            temp/=10;
        }
        if(reverse==x){
            return true;
        }
    
        return false;
        
    }
};