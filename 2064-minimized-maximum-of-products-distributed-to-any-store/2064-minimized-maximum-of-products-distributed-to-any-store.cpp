class Solution {
public:
int possible(vector<int>&quantities,int mid){
    int k=quantities.size();
    long sum=0;
    for(int i=0; i<k; i++){
        sum+=ceil((double)quantities[i]/(double)mid);
    }
    return sum;
}
    int minimizedMaximum(int n, vector<int>& quantities) {
        int k=quantities.size();
        if(n==1){
            return quantities[0];
        }
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(quantities,mid)<=n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};