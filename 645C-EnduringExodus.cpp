#include <iostream>
#include <vector>

int main(){

    std::ios_base::sync_with_stdio(false);

    long n, k; std::cin >> n >> k;
    std::string s; std::cin >> s;
    std::vector<long> v; for(long p = 0; p < s.size(); p++){if(s[p] == '0'){v.push_back(p);}}

    long m(0), dist(2 * s.size());

    for(long p = k; p < v.size(); ++p) {
        long b = p - k;

        while(v[m] - v[b] <= v[p] - v[m]){++m;}

        long left(v[m] - v[b]), right(v[p] - v[m]);
        long mx = (left > right) ? left : right;
        dist = (dist < mx) ? dist : mx;

        left = v[m - 1] - v[b]; right = v[p] - v[m - 1];
        mx = (left > right) ? left : right;
        dist = (dist < mx) ? dist : mx;
    }

    std::cout << dist << std::endl;

    return 0;
}
