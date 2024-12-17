
#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long m, a, b, c; scanf("%ld %ld %ld %ld", &m, &a, &b, &c);
        long cnt(0);
        if(a < m){
            cnt += a;
            long rem = m - a;
            long slc = (rem < c ? rem : c);
            cnt += slc;
            c -= slc;
        }
        else{cnt += m;}
        
        if(b < m){
            cnt += b;
            long rem = m - b;
            long slc = (rem < c ? rem : c);
            cnt += slc;
        }
        else{cnt += m;}
        
        printf("%ld\n", cnt);
    }
}
