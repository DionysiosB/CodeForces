#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::ios_base::sync_with_stdio(false);
    int n, t; std::cin >> n >> t;
    std::vector<std::pair<double, double> > v(n);
    for(int p = 0; p < n; p++){
        double x, a; std::cin >> x >> a;
        v[p] = std::make_pair(x - a / 2.0, x + a/2.0);
    }
    sort(v.begin(), v.end());
    
    int count(2);
    for(int p = 1; p < n; p++){
        double diff = v[p].first - v[p - 1].second;
        count += 2 * (diff > t) + (diff == t);
    }

    std::cout << count << std::endl;

    return 0;
}
