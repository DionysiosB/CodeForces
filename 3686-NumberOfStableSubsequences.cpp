class Solution {
public:
    int countStableSubsequences(vector<int>& nums) {

        const long long MOD = 1e9 + 7;
        long long fa(0), fb(0), ga(0), gb(0);
        //fa = Number of subsequences that end in one odd
        //fb = Number of subsequences that end in two odds
        //ga = Number of subsequences that end in one even
        //gb = Number of subsequences that end in two evens

        for(int num : nums){
            if(num % 2){
                long long tfa = (fa + (1 + ga + gb)) % MOD;
                long long tfb = (fa + fb) % MOD;
                fa = tfa; fb = tfb;
            }
            else{
                long long tga = (ga + (1 + fa + fb)) % MOD;
                long long tgb = (ga + gb) % MOD;
                ga = tga; gb = tgb;           
            }
        }

        return (int)( (fa + fb + ga + gb) % MOD );
    } 
};
