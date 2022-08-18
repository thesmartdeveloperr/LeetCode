class Solution {
public:
    int countPrimes(int n) {
        if(n<2)
            return 0;
        int primes=0;
        vector<bool> sieve(n,true);
        for(int i=2;i<n;++i){
            if(sieve[i])
            for(int j=i*2;j<n;j+=i)
                sieve[j]=false;
        }
        for(int i=2;i<n;++i)
            if(sieve[i])
                primes++;
                
        return primes;
    }
};