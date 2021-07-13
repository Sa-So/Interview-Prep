class Solution {
public:
    long long sum(long long N, long long M){
        // code here
        //co-prime = 1 as hcf / gcd
        if(M>N){
            swap(M,N);
        }
        for(long long i=M;i>=2;i--){
            if(N%i==0 && M%i==0){
                   N/=i;
                   M/=i;
			       break;
            }
        }
        return M+N;
    }
};
