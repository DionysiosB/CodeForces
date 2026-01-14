#include <cstdio>
#include <map>
 
int main() {
    
    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::map<long, long> m; m[n] = 0;
        long ans(-(n != k));
        while(!m.empty()){
            long val = m.rbegin()->first;
            long cnt = m.rbegin()->second;
            long nxtvalf = (val / 2);
            long nxtvalc = (val + 1) / 2;
            long nxtcnt = 1 + cnt;
            
            if((nxtvalf == k) && (ans < 0 || ans > nxtcnt)){ans = nxtcnt;}
            else if(nxtvalf > k && (!m.count(nxtvalf) || m[nxtvalf] > nxtcnt)){m[nxtvalf] = nxtcnt;}
            
            if((nxtvalc == k) && (ans < 0 || ans > nxtcnt)){ans = nxtcnt;}
            else if(nxtvalc > k && (!m.count(nxtvalc) || m[nxtvalc] > nxtcnt)){m[nxtvalc] = nxtcnt;}
            
            m.erase(val);
        }
        
        printf("%ld\n", ans);
    }
}
