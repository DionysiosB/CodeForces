#include <cstdio>
 
int main(){
    
    long t; scanf("%ld", &t);
    while(t--){
        long l1, b1, l2, b2, l3, b3; scanf("%ld %ld %ld %ld %ld %ld", &l1, &b1, &l2, &b2, &l3, &b3);
 
        bool ans(false);
        if(l1 + l2 + l3 == b1 && b1 == b2 && b2 == b3){ans = true;}
        else if(l2 + l3 == l1 && b2 == b3 && b1 + b2 == l1){ans = true;}
        else if(b1 + b2 + b3 == l1 && l1 == l2 && l2 == l3){ans = true;}
        else if(b2 + b3 == b1 && l2 == l3 && l1 + l2 == b1){ans = true;}
        
        puts(ans ? "YES" : "NO");
    }
 
}
