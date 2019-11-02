#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);
    const int L = 0;
    const int H = 15;
    int n; std::cin >> n;
    std::vector<int> a(n);
    for(int p = 0; p < n; p++){std::cin >> a[p];}
    if((a.back() == L) || (a.back() < H && (n > 1) && a[n - 2] < a[n - 1])){puts("UP");}
    else if((a.back() == H) || (a.back() > L && (n > 1) && a[n - 2] > a[n - 1])){puts("DOWN");}
    else{puts("-1");}

    return 0;
}
