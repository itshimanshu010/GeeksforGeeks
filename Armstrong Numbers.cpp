// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
       int temp=n; 
       int rem=0;
        int res=0;
        while(n)
        {
            rem=n%10;
            res+=(rem*rem*rem);
        n=n/10;
            
        }
    
        if(temp==res)
    {
        return "Yes";
    }
        else{
        return "No";
        }
    }
    
};
