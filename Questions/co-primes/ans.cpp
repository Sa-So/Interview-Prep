//Divide both the numbers by their gcd and find their sum.
//Use 64-bit integers.

class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        //co-prime = 1 as hcf / gcd
        if(M>N){
            swap(M,N);
        }
        
        //finding gcd and dividing will make it co-prime ??
        long long g=__gcd(M,N);
        M/=g;
        N/=g;
        //return sum of co-primes 
        return N+M;
        
    }
};
