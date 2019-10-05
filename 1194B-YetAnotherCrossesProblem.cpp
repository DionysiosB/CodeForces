#include <iostream>
#include <vector>
 
int main(){
    
    long q; std::cin >> q;
    while(q--){
        long nr, nc; std::cin >> nr >> nc;
        std::vector<std::string> v(nr);
        for(long p = 0; p < nr; p++){std::cin >> v[p];}
        
        std::vector<long> rowcount(nr), colcount(nc);
        for(long row = 0; row < nr; row++){
            for(long col = 0; col < nc; col++){
                if(v[row][col] == '.'){continue;}
                ++rowcount[row]; ++colcount[col];
            }
        }
 
        long res(2 * nr + 2 * nc);
        for(long row = 0; row < nr; row++){
            for(long col = 0; col < nc; col++){
                long tmp = (nr - rowcount[row]) + (nc - colcount[col]) - (v[row][col] == '.');
                res = (res < tmp) ? res : tmp;
            }
        }
 
        printf("%ld\n", res);
    }
    
    return 0;
}
