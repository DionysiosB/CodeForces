#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<double> a(n); for(long p = 0; p < n; p++){scanf("%lf", &a[p]);}
    
    double mx(0);
    for(long p = 0; p < n; p++){
        double s(0);
        for(long u = p; u < n; u++){
            s += a[u];
            if(u - p + 1 >= k){double avg = s / (u - p + 1); mx = (mx > avg) ? mx : avg;}
        }
    }

    printf("%.7lf\n", mx);

    return 0;
}
