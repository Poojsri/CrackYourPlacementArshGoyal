//using hash map
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> count;
        for(auto i:nums){
            count[i]++;
        }
        int c=0;
        for (auto i: count){
            if(i.second>=1){
                nums[c] = i.first;
                c++;
            }
        }
        return c;
    }
};

//using two pointers
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j=1;j<nums.size();j++){
            if(nums[i] != nums[j]){
             i++; 
             nums[i] = nums[j];  
            } 
        }
        return i+1;
    }
};
