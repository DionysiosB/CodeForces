#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    long left(0), right(n - 1), cur(0);
    std::vector<char> res;
    if(a[0] < a.back()){res.push_back('L'); cur = a[0]; left = 1;}
    else{res.push_back('R'); cur = a.back(); right = n - 2;}
    while(left <= right){
        if(cur < a[left] && a[left] < a[right]){res.push_back('L'); cur = a[left]; ++left;}
        else if(cur < a[right] && a[right] <= a[left]){res.push_back('R'); cur = a[right]; --right;}
        else if(cur < a[left]){res.push_back('L'); cur = a[left]; ++left;}
        else if(cur < a[right]){res.push_back('R'); cur = a[right]; --right;}
        else{break;}
    }

    printf("%ld\n", res.size());
    for(long p = 0; p < res.size(); p++){printf("%c", res[p]);}
    puts("");

    return 0;
}
