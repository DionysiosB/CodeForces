#include <cstdio>
#include <vector>
#include <set>
 
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        
        std::vector<long> vl(n), vr(n);
        std::set<long> fs, gs;
 
        for(long p = 0; p < n; p++){
            scanf("%ld %ld", &vl[p], &vr[p]);
            if(vl[p] == vr[p]){
                if(fs.count(vl[p])){gs.insert(vl[p]);}
                else{fs.insert(vl[p]);}
            }
        }
        
        std::vector<long> dv;
        for(std::set<long>::iterator it = fs.begin(); it != fs.end(); it++){dv.push_back(*it);}
        
        for(long p = 0; p < n; p++){
            if(vl[p] == vr[p]){printf("%c", gs.count(vl[p]) ? '0' : '1');}
            else{
                std::vector<long>::iterator ita = std::lower_bound(dv.begin(), dv.end(), vl[p]);
                std::vector<long>::iterator itb = std::lower_bound(dv.begin(), dv.end(), vr[p]);
                printf("%c", (fs.count(vl[p]) && fs.count(vr[p]) && (itb - ita == vr[p] - vl[p]) ? '0' : '1'));
            }
        }
        puts("");
    }
    
}
