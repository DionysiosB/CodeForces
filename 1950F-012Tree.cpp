#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        if(c != a + 1){puts("-1"); continue;} // Edge check: a + b + c == 2 * a + 1 * b + 0 * c
        if(!a && !b){puts("0"); continue;} //Trivial tree
        
        long cur(1), nxt(0), depth(1); //cur/nxt: Nodes in current/next level
        for(long p = 0; p < a + b; p++){
            if(!cur){cur = nxt; nxt = 0; ++depth;} //Move to the next level; Add one depth
            --cur; 
            nxt += 1 + (p < a);
        }

        printf("%ld\n", depth);
    }

}
