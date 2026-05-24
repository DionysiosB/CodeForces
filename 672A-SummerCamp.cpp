#include <cstdio>
#include <vector>
#include <algorithm>

const int N = 1000;

std::vector<int> getDigits(int x){
    std::vector<int> res;
    while(x > 0){res.push_back(x % 10); x /= 10;}
    std::reverse(res.begin(), res.end());
    return res;
}

int main(){

    int n; scanf("%d\n", &n);
    int counter(0), ans(-1);
    for(int p = 1; p <= N; p++){
        std::vector<int> digits = getDigits(p);
        for(int q = 0; q < digits.size(); q++){if(++counter >= n){ans = digits[q]; break;}}
        if(ans >= 0){break;}
    }

    printf("%d\n", ans);

    return 0;
}
