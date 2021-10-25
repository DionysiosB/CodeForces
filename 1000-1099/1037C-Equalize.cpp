#include <iostream>

int main(){

    long n; std::cin >> n;
    std::string a, b; std::cin >> a >> b;

    long cnt(0);
    for(long p = 0; p < n; p++){
        if(a[p] == b[p]){continue;}
        else if(a[p] != b[p] && p + 1 < n && a[p + 1] != b[p + 1] && a[p] != a[p + 1]){++cnt; a[p] = b[p]; a[p + 1] = b[p + 1];}
        else{++cnt; a[p] = b[p];}
    }

    printf("%ld\n", cnt);

    return 0;
}
