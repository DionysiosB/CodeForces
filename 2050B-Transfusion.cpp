#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long sd(0), cd(0), se(0), ce(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            sd += (p % 2) * x; 
            se += (p % 2 == 0) * x;
            p % 2 ? ++cd : ++ce;
        }

        puts( (sd % cd || se % ce || sd * ce != se * cd) ? "NO" : "YES");
    }

}
