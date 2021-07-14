class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        unordered_map<int,int> prevSum;
        int cursum=0,count=0;
        for(int i=0;i<N;i++){
            cursum+=Arr[i];
            if(cursum==k){
                count++;
            }
            
            if(prevSum.find(cursum-k)!=prevSum.end()){
                count+=prevSum[cursum-k];
            }
            prevSum[cursum]++;
        }
        return count;
    }
};
