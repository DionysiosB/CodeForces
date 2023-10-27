#include <cstdio>

int main(){
    long t; scanf("%ld", &t);
    while(t--){
        long a, b, c; scanf("%ld %ld %ld", &a, &b, &c);
        long m(a); m = (m < b) ? m : b; m = (m < c) ? m : c;
        bool res = ((a / m) + (b / m) + (c / m) <= 6) && (a % m == 0) && (b % m == 0) && (c % m == 0);
        puts(res ? "YES" : "NO");
    }

}
