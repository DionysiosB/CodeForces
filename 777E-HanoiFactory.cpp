#include <cstdio>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

int main(){
    
    int64_t n; scanf("%lld", &n);
    std::vector<std::pair<int64_t, std::pair<int64_t, int64_t> > > v(n);
    for(int64_t p = 0; p < n; p++){
        int64_t a, b, h; scanf("%lld %lld %lld", &a, &b, &h); 
        v[p].first = b;
        v[p].second.first = a;
        v[p].second.second = h;
    }
    
    sort(v.rbegin(), v.rend());
    
    std::stack<int64_t> s;
    int64_t height(0), maxHeight(0);
    for(int64_t p = 0; p < n; p++){
        while(!s.empty() && v[p].first <= v[s.top()].second.first){height -= v[s.top()].second.second; s.pop();}
        s.push(p);
        height += v[p].second.second;
        maxHeight = (maxHeight > height) ? maxHeight : height;
    }
    
    printf("%lld\n", maxHeight);
    
    return 0;
}
