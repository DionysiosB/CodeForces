#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r, d, u; scanf("%ld %ld %ld %ld", &l, &r, &d, &u);
        puts( (l == r && l == d && d == u) ? "Yes" : "No");
    }

}
