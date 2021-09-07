//

class Solution {
public:
    int countPrimes(int n) {
        
         vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=n;i++)
        {
           if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
           }
                
        }
        int count=0;
        for(int i=2;i<n;i++)
        {
            if(prime[i]==true)
                count++;
        }
        return count;
    }
};





//

class Solution {
public:
    int countPrimes(int n) {
        int i,j,flag=0;
        int count=0;
        
        for(i=2;i<n;i++)
        {
            if(isPrime(i)==1)
                count++;
        }
        return count;
    }
    int isPrime(int num)
    {
        int i;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
                return 0;
        }
        return 1;
    }
};
