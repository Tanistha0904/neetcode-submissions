class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>mp;
        int ans=0, l=0;
        int res=0;
        for(int r=0; r<s.size(); r++){
            mp[s[r]]++;
            ans=max(ans, mp[s[r]]);
            int wnd=r-l+1;
            if(wnd-ans > k){
                mp[s[l]]--;
                l++;

            }
            res=max(res, r-l+1);

        }
        return res;
        
    }
};
