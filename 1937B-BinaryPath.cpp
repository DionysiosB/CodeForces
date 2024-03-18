#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long idx(0), cnt(1), down(n - 1);
        while(idx < n){
            if(b[idx] < a[idx + 1]){cnt = 1; down = idx; break;}
            else if(b[idx] == a[idx + 1]){
                down = idx;
                while((idx + 1 < n) && b[idx] == a[idx + 1]){++idx; ++cnt;}
                if((idx == n - 1) || b[idx] < a[idx + 1]){break;}
                else{down = n - 1; cnt = 1;}
            }
            ++idx;
        }

        std::string mn = a.substr(0, down + 1) + b.substr(down);
        std::cout << mn << "\n" << cnt << std::endl;
    }

}
