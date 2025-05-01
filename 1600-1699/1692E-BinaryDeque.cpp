#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s; scanf("%ld %ld", &n, &s);
        std::vector<long> v(1, -1);
        for(long p = 0; p < n; p++){
            int x; scanf("%d", &x);
            if(x){v.push_back(p);}
        }
        v.push_back(n);

        if(v.size() < s + 2){puts("-1"); continue;}

        long mxlen(0);
        for(long p = s; p + 1 < v.size(); p++){
            long len = (v[p + 1] - 1) - v[p - s];
            //printf("** p:%ld v[p]:%ld v[p - s]:%ld len:%ld mxlen:%ld\n", p, v[p], v[p - s], len, mxlen);
            mxlen = (mxlen > len) ? mxlen : len;
        }

        printf("%ld\n", n - mxlen);
    }

}
