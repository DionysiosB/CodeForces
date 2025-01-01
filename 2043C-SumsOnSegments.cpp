#include <cstdio>
#include <vector>
#include <set>
 
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> v(n);
        int idx(-1);
        
        for(int p = 0; p < n; p++){
            scanf("%ld", &v[p]);
            if(v[p] != -1 && v[p] != 1){idx = p;}
        }
        
        std::set<int> s;
        
        if(idx >= 0){
            long mnl(0), mxl(0), mnr(0), mxr(0), cs(0);
            for(int p = idx - 1; p >= 0; p--){
                cs += v[p];
                mnl = (mnl < cs ? mnl : cs);
                mxl = (mxl > cs ? mxl : cs);
            }
            cs = 0;
            for(int p = idx + 1; p < n; p++){
                cs += v[p];
                mnr = (mnr < cs ? mnr : cs);
                mxr = (mxr > cs ? mxr : cs);
            }
            
            for(int p = mnl + mnr; p <= mxl + mxr; p++){s.insert(v[idx] + p);}
        }
        
        
        long smn(0), smx(0), csn(0), csp(0);
        for(int p = 0; p < idx; p++){
            csn += v[p]; csn = (csn < 0 ? csn : 0);
            csp += v[p]; csp = (csp > 0 ? csp : 0);
            smn = (smn < csn ? smn : csn);
            smx = (smx > csp ? smx : csp);
        }
        for(int p = smn; p <= smx; p++){s.insert(p);}
        
        smn = smx = csn = csp = 0;
        for(int p = idx + 1; p < n; p++){
            csn += v[p]; csn = (csn < 0 ? csn : 0);
            csp += v[p]; csp = (csp > 0 ? csp : 0);
            smn = (smn < csn ? smn : csn);
            smx = (smx > csp ? smx : csp);
        }
        for(int p = smn; p <= smx; p++){s.insert(p);}
 
        printf("%ld\n", s.size());
        for(std::set<int>::iterator it = s.begin(); it != s.end(); it++){printf("%ld ", *it);}
        puts("");
    }
    
}
