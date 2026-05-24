#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a, b;
    long m = n % 4;
    long diff(0);
    if(m == 1){a.push_back(1); diff = 1;}
    else if(m == 2){a.push_back(1); b.push_back(2); diff = 1;}
    else if(m == 3){a.push_back(1); a.push_back(2); b. push_back(3);}

    for(long p = m + 1, cnt = 0; p <= n; p++){
        if(cnt % 4 == 0 || cnt % 4 == 3){a.push_back(p);}
        else{b.push_back(p);}
        ++cnt; cnt %= 4;
    }

    printf("%ld\n%ld ", diff, a.size());
    for(long p = 0; p < a.size(); p++){printf("%ld ", a[p]);}
    puts("");


    return 0;
}
