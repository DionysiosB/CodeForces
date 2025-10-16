#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, z; scanf("%ld %ld %ld", &x, &y, &z);
        bool possible(true);
        while(possible && (x || y || z)){
            int s = (x % 2) + (y % 2) + (z % 2);
            if(s == 2){possible = false; break;}
            x /= 2; y /= 2; z /= 2;
        }

        puts(possible ? "YES" : "NO");
    }

}
