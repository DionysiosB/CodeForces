#include<cstdio>
#include<vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long left(-1), right(-1);
    for(long p = 1; p < n; p++){
        if(left > 0 && right > 0){break;}
        if(a[p] == a[p - 1]){continue;}
        long tmp = a[p]; a[p] = a[p - 1]; a[p - 1] = tmp;

        bool asc(true), desc(true);

        for(int q = 1; q < n; q++){
            if(a[q - 1] > a[q]){asc = false;}
            if(a[q - 1] < a[q]){desc = false;}
            if((!asc) && (!desc)){left = p; right = p + 1; break;}
        }
        tmp = a[p]; a[p] = a[p - 1]; a[p - 1] = tmp;
    }

    if(left >= 0 && right >= 0){printf("%ld %ld\n", left, right);}
    else{puts("-1");}

    return 0;
}
