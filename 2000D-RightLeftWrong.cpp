#include <iostream>
#include <vector>
typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<ll> a(n + 2, 0); for(long p = 1; p <= n; p++){std::cin >> a[p]; a[p] += a[p - 1];}
        std::string s; std::cin >> s; s = 'R' + s + 'L';
        long left(0), right(n + 1); ll total(0);
        do{
            ++left;  while(s[left]  != 'L'){++left;}
            --right; while(s[right] != 'R'){--right;}
            if(left < right){total += a[right] - a[left - 1];}
            else{break;}
        }while(left < right);

        std::cout << total << std::endl;
    }

}
