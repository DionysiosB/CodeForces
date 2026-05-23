#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d", &n);
    std::vector<int> zeroes; 
    int remaining(1); long total(0);

    int a(0), b(0);
    while(n--){
        scanf("%d %d", &a, &b);
        if(b == 0){zeroes.push_back(a);}
        else{total += a; remaining += b - 1;}
    }
    
    sort(zeroes.begin(), zeroes.end());
    for(int k = zeroes.size() - 1; k >= 0 && remaining > 0 ; k--, remaining--){total += zeroes[k];}

    printf("%ld\n", total);
    return 0;
}
