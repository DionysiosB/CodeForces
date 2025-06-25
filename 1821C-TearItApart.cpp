#include <iostream>
 
int main(){
    
    long t; std::cin >> t;
    while(t--){
        std::string s; std::cin >> s;
        long mnmxlen(s.size());
        
        for(char x = 'a'; x <= 'z'; x++){
            long len(0), mxlen(0);
            for(long p = 0; p < s.size(); p++){
                if(s[p] == x){len = 0;}
                else{++len;}
                mxlen = (mxlen > len ? mxlen : len);
            }
            
            mnmxlen = (mnmxlen < mxlen ? mnmxlen : mxlen);
        }
        
        long ans(0);
        while(mnmxlen){++ans; mnmxlen /= 2;}
        printf("%ld\n", ans);
    }
 
}
