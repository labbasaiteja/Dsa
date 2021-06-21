class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) { //two ptr approach
        vector<int> res;
        int i = 0, j = 0, s = 0;
        for(int k = 0; k < nums.size(); k++){ //traverse array to get postion of where decrease and increasing
            if(nums[k] < 0){
                j++;
            }
            nums[k] *= nums[k];
        }
        i = j - 1;
        while( i >= 0 && j <= nums.size() - 1){  // to get postion
            if(nums[i] < nums[j]){
                res.push_back(nums[i]);
                i--;
            }
            else{
                res.push_back(nums[j]);
                j++;
            }
        }
        s++;
        while(i >= 0){  //left elements which need to be traversed
            res.push_back(nums[i]);
            i--;
            s++;
        }
        while(j <= nums.size() - 1){
            res.push_back(nums[j]);
            j++;
            s++;
        }
        return res;
    }
};