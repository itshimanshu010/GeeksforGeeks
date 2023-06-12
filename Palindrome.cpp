

class Solution
{
	public:
		string is_palindrome(int n)
		{   
		    int rev=0;
		    int temp;
		    temp=n;
		    while(n!=0)
		    {
		      int num=n%10;
		      rev=rev*10+num;
		      n=n/10;
		    }
		    
		    if (rev==temp)
		    {
		        return "Yes";
		    }
		    
		    else
		    {
		        return "No";
		    }
		}
};
