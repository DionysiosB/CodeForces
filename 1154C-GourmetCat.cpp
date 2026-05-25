#include <cstdio>
#include <vector>

int main(){

    long N = 7;
    std::vector<long> a(N); a[0] = a[3] = a[6] = 0; a[1] = a[5] = 1; a[2] = a[4] = 2;
    long b, c, d; scanf("%ld %ld %ld", &b, &c, &d); 
    long m = (b / 3) < (c / 2) ? (b / 3) : (c / 2);
    m = (m < d/2) ? m : (d / 2);

    b -= 3 * m; c -= 2 * m; d -= 2 * m;

    long mx(0);
    for(long s = 0; s < N; s++){
        std::vector<long> f(3); f[0] = b; f[1] = c; f[2] = d;
        long dur(0);
        for(long p = 0; p < 2 * N; p++){
            long day = (s + p) % N;
            if(f[a[day]] > 0){--f[a[day]]; ++dur;}
            else{break;}
        }

        mx = (mx > dur) ? mx : dur;
    }

    mx += m * N;
    printf("%ld\n", mx);

    return 0;
}
