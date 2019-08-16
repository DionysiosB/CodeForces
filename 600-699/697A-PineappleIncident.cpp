#include <cstdio>

int main(){

    long t, s, x; scanf("%ld %ld %ld\n", &t, &s, &x);
    puts( ((x == t) || (( (x - t) / s > 0) && ((x - t) % s <= 1)) ) ? "YES" : "NO");

    return 0;
}
