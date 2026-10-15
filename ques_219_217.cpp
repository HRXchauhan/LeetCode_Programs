class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, bool> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=false;
        }

        for(int j=0;j<k&&j<nums.size();j++){
            if(mp[nums[j]]==true){
                return true;
            }
            mp[nums[j]]=true;
        }

        for(int i=k;i<nums.size();i++){
            if(mp[nums[i]]==true){
                return true;
            }

            mp[nums[i]]=true;

            mp[nums[i-k]]=false;

        }

        return false;

        
    }
};