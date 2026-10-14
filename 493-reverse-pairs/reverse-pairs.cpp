class Solution {
public:
    void countPair(vector<int>& nums,int low,int mid,int high,int &count){
        int j=mid+1;
       for(int i=low;i<=mid;i++){
        while(j<=high && (long long)nums[i] >(long long)2*nums[j]){
            j++;
        }
        count+=(j-(mid+1));
       }
          
    }
    void combine(vector<int>& nums,int low,int mid,int high){
        int i=low,j=mid+1;
       vector<int>temp;
        while(i<=mid && j<=high){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=high){
            temp.push_back(nums[j++]);
        }
        
        for(int k=0;k<temp.size();k++){
            nums[k+low]=temp[k];
        }
    }

    void mergeSort(vector<int>& nums,int low,int high,int &count){
        if(low>=high){
            return;
        }
        int mid=low+(high-low)/2;
        mergeSort(nums,low,mid,count);
        mergeSort(nums,mid+1,high,count);
        countPair(nums,low,mid,high,count);
        combine(nums,low,mid,high);
    }

    int reversePairs(vector<int>& nums) {
        int count=0;
        int low=0,high=nums.size()-1;
        mergeSort(nums,low,high,count);
        return count;
    }
};