class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> m;
        int a , b;
        
        for(int i=0; i<nums.size();i++)
        {
            
            if(m[target-nums[i]]==0){
                m[nums[i]]=i+1;
            }else{
                a = m[target-nums[i]]-1;
                b=i;
                break;
            }
            
            
        }
        
        return {a,b};
        
        
    }
};