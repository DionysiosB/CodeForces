#include <cstdio>
#include <vector>

int main(){

    long k, n1, n2, n3, t1, t2, t3; scanf("%ld %ld %ld %ld %ld %ld %ld", &k, &n1, &n2, &n3, &t1, &t2, &t3);
    std::vector<long> dv(k, 0);
    for(int p = 0; p < k; p++){
        if(p >= n1){dv[p] = (dv[p] > dv[p - n1] + t1) ? dv[p] : (dv[p - n1] + t1);}
        if(p >= n2){dv[p] = (dv[p] > dv[p - n2] + t2) ? dv[p] : (dv[p - n2] + t2);}
        if(p >= n3){dv[p] = (dv[p] > dv[p - n3] + t3) ? dv[p] : (dv[p - n3] + t3);}
    }

    printf("%ld\n", dv.back() + t1 + t2 + t3);

    return 0;
}
