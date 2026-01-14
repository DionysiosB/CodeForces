#include <cstdio>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long aa(a), bb(b), cntA(0), tmp(1);
        while(aa >= 0 && bb >= 0){
            if(aa >= tmp){aa -= tmp; ++cntA; tmp *= 2;}
            else{break;}
            if(bb >= tmp){bb -= tmp; ++cntA; tmp *= 2;}
            else{break;}
        }
 
        long cntB(0); tmp = 1;
        while(a >= 0 && b >= 0){
            if(b >= tmp){b -= tmp; ++cntB; tmp *= 2;}
            else{break;}
            if(a >= tmp){a -= tmp; ++cntB; tmp *= 2;}
            else{break;}
        }
 
        printf("%ld\n", cntA > cntB ? cntA : cntB);
    }
 
}
