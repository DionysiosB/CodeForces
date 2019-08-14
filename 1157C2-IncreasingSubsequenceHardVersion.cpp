#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long left(0), right(n - 1), cur(0);
    std::vector<char> res;
    while(left <= right){
        if(cur < a[left] && a[left] < a[right]){res.push_back('L'); cur = a[left]; ++left;}
        else if(cur < a[right] && a[right] < a[left]){res.push_back('R'); cur = a[right]; --right;}
        else if(cur < a[left] && a[left] == a[right]){
            long tl(cur), cntl(0); while(left +  cntl <  n && tl < a[left  + cntl]){tl = a[left  + cntl]; ++cntl;}
            long tr(cur), cntr(0); while(right - cntr >= 0 && tr < a[right - cntr]){tr = a[right - cntr]; ++cntr;}
            if(cntl >= cntr){res.push_back('L'); cur = a[left]; ++left;}
            else{res.push_back('R'); cur = a[right]; --right;}
        }
        else if(cur < a[left]){res.push_back('L'); cur = a[left]; ++left;}
        else if(cur < a[right]){res.push_back('R'); cur = a[right]; --right;}
        else{break;}
    }

    printf("%ld\n", res.size());
    for(long p = 0; p < res.size(); p++){printf("%c", res[p]);}
    puts("");

    return 0;
}
