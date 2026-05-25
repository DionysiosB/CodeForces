#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > a(n + 1, std::vector<long>(m + 1, 0));
    std::vector<std::vector<long> > b(n + 1, std::vector<long>(m + 1, 0));
    std::vector<std::pair<long,long>>ans;
    for(long p = 1; p <= n; p++){for(long q = 1; q <= m; q++){scanf("%ld",&a[p][q]);}}
    for(long p = 1; p < n; p++){
        for(long q = 1; q < m; q++){
            if(a[p][q] == 1 && a[p+1][q] == 1 && a[p][q+1] == 1 && a[p+1][q+1] == 1){
                b[p][q] = b[p+1][q] = b[p][q+1] = b[p+1][q+1] = 1;
                ans.push_back(std::make_pair(p,q));
            }
        }
    }

    for(long p = 1; p <= n; p++){for(long q = 1;q <= m; q++){if(a[p][q] != b[p][q]){puts("-1"); return 0;}}}
    printf("%ld\n", ans.size());
    for(long p = 0; p < ans.size(); p++){printf("%ld %ld\n",ans[p].first,ans[p].second);}

    return 0;
}
