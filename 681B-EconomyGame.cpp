#include <cstdio>

const long A = 1234567;
const long B = 123456;
const long C = 1234;

int main(){

    long n; scanf("%ld\n", &n);
    bool found(false);
    for(long a = 0; a * A <= n; a++){
        if(found){break;}
        for(long b = 0; a * A + b * B <= n; b++){
            long rem = n - a * A - b * B;
            if(rem % C == 0){found = true; break;}
        }
    }

    puts(found ? "YES" : "NO");

    return 0;
}
