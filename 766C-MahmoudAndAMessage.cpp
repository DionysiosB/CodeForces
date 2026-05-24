#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    const int N = 26;
    const ll MOD = 1000000007;
    std::ios_base::sync_with_stdio(false);

    int n; std::cin >> n;
    std::string s; std::cin >> s;

    std::vector<int> a(N); for(int p = 0; p < N; p++){std::cin >> a[p];}
    std::vector<int> minNumber(n + 1, 0);
    std::vector<ll> ways(n + 1, 0); ways[0] = 1;

    int maxLength(0);
    for(int p = 1; p <= n; p++){
        int allowed(n + 1); minNumber[p] = n + 1;
        for(int q = p - 1; q >= 0; q--){
            long length = p - q;
            allowed = (allowed < a[s[q] - 'a']) ? allowed : a[s[q] - 'a'];
            if(length > allowed){break;}
            ways[p] += ways[q]; ways[p] %= MOD;
            minNumber[p] = (minNumber[p] < minNumber[q] + 1) ? minNumber[p] : (minNumber[q] + 1);
            maxLength = (maxLength > length) ? maxLength : length;
        }
    }

    std::cout << ways[n] << "\n" << maxLength << "\n" << minNumber[n] << std::endl;

    return 0;
}
