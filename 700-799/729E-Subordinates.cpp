#include <cstdio>
#include <vector>

int main(){

    long n, s; scanf("%ld %ld", &n, &s);
    std::vector<long> a(n);
    long M(2);

    for(long p = 0; p < n; p++){
        scanf("%ld", &a[p]);
        M = (M > a[p]) ? M : a[p];
    }

    std::vector<long> b(M + 1);
    for(long p = 0; p < n; p++){++b[a[p]];}

    long count(0);

    --s; if(a[s] != 0){++b[0]; --b[a[s]]; ++count;}
    long left(1), right(M);
    while(b[0] > 1){
        while(left < b.size() && b[left] > 0){++left;}
        --b[0]; ++b[left]; ++count;
    }

    left = 1; right = b.size() - 1;
    while(left < right){
        while(left < b.size() && b[left] > 0){++left;}
        while(right > 0 && b[right] == 0){--right;}
        if(left < right){b[left] = 1; --b[right]; ++count;}
    }

    printf("%ld\n", count);

    return 0;
}
