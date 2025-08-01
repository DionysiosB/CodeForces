#include <cstdio>

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long n, m; scanf("%ld %ld", &n, &m);
        puts((n == 1 || m == 1 || (n == 2 && m == 2)) ? "NO" : "YES");
    }

}
