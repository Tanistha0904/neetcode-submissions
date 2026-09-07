class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> mp;
        int l=0, ans=0;
        for(int r=0; r<s.size(); r++){
            mp[s[r]]++;
            if(mp.size()<r-l+1){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            ans=max(ans, r-l+1);

        }
        return ans;

        
    }
};
