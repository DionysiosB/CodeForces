#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>


int main(){

    int n; scanf("%d", &n);
    std::vector<std::pair<int, int> > a(n + 1);
    for(int p = 0; p < n; p++){int x; scanf("%d", &x); a[p] = std::make_pair(x, p + 1);}
    sort(++a.begin(), a.end(), std::greater<std::pair<int, int> >());
    int ind(0);
    std::vector<std::pair<int, int> > comm;
    for(int p = 0; p < n; p++){
        for(int q = ind + 1; q <= ind + a[p].first; q++){
            if(q >= n){break;}
            comm.push_back(std::make_pair(a[p].second, a[q].second));
        }
        ind += a[p].first;
        if(ind <= p){break;}
    }

    if(comm.size() < n - 1){puts("-1");}
    else{
        printf("%d\n", n - 1);
        for(int p = 0; p < comm.size(); p++){printf("%d %d\n", comm[p].first, comm[p].second);}}

    return 0;
}
