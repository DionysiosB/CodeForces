#include <iostream>
#include <vector>
#include <stack>

int main(){

    std::ios_base::sync_with_stdio(false);

    int64_t n; std::cin >> n;
    std::vector<int64_t> a(n + 2);
    for(int64_t p = 1; p <= n; p++){std::cin >> a[p];}

    int64_t total(0);
    std::stack<int64_t> s; s.push(0);
    for(long p = 0; p <= n + 1; p++){
        while(a[s.top()] > a[p]){
            int64_t pos = s.top();
            s.pop();
            total -= (p - pos) * (pos - s.top()) * a[pos];
        }
        s.push(p);
    }

    s.push(0);
    a[0] = a[n + 1] = 1e18;
    for(long p = 1; p <= n + 1; p++){
        while(a[s.top()] < a[p]){
            int64_t pos = s.top();
            s.pop();
            total += (p - pos) * (pos - s.top()) * a[pos];

        }
        s.push(p);
    }
    
    std::cout << total << std::endl;

    return 0;
}
