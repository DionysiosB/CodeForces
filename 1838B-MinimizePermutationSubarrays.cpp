#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long one(0), two(0), fin(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x == 1){one = p;}
            else if(x == 2){two = p;}
            else if(x == n){fin = p;}
        }

        long left(1), right(1);
        if(one < two && two < fin){left += two; right += fin;}
        else if(two < one && one < fin){left += one; right += fin;}
        else if(fin < one && one < two){left += fin; right += one;}
        else if(fin < two && two < one){left += fin; right += two;}

        printf("%ld %ld\n", left, right);
    }

}
