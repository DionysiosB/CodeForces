#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<int> v(n); for(long p = 0; p < n; p++){scanf("%d", &v[p]);}
        long a(0), b(0), minus(0), plus(0);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(v[p] < 0 && x < 0){++minus;}
            else if(v[p] > 0 && x > 0){++plus;}
            else if(v[p] > 0 && x <= 0){++a;}
            else if(v[p] <= 0 && x > 0){++b;}
        }

        if(a > b){long u = a; a = b; b = u;}
        long diff = (b - a);
        diff = (diff < minus ? diff : minus);
        b     -= diff;
        minus -= diff;

        diff = (b - a);
        diff = (diff < plus ? diff : plus);
        a     += diff;
        plus -= diff;

        if(minus && plus){
            long mn = (minus < plus ? minus : plus);
            minus -= mn; plus -= mn;
        }

        if(minus){a -= (minus + 1) / 2;}
        else if(plus){a += plus / 2;}
        printf("%ld\n", a);
    }

}
