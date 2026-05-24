#include <cstdio>
#include <vector>
#include <set>

int main(){

    long n , q; scanf("%ld %ld", &n, &q);
    std::set<long> st;
    std::vector<long> a;
    std::vector<std::vector<long> > b(n + 1);
    long last(0);

    for(long t = 0; t < q; t++){
        long w, x; scanf("%ld %ld", &w, &x);
        if(w == 1){a.push_back(t); b[x].push_back(t); st.insert(t);}
        else if(w == 2){for(int u = 0; u < b[x].size(); ++ u){st.erase(b[x][u]);} b[x].clear();}
        else if(w == 3){while(last < x){st.erase(a[last]); last++;}}
        printf("%ld\n", st.size());
    }

    return 0;
}
