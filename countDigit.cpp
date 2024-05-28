class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int temp=N;
        int digit=0;
        while(temp!=0){
            digit=temp%10;
            if(digit!=0){
                if(N%digit==0){
                   count++;
            }
        }
        
        temp/=10;
        
        }
        return count;
    }      
};