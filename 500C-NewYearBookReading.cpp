#include <cstdio>
#include <vector>
#include <set>


int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<int> weight(n + 1, 0);
    for(long p = 1; p <= n; p++){scanf("%d", &weight[p]);}

    std::vector<int> read(m);
    for(int p = 0; p < m; p++){scanf("%d", &read[p]);}

    long total(0);
    for(int book = 1; book <= n; book++){
        std::set<int> onTop;
        for(int day = 0; day < m; day++){
            int current = read[day];
            if(current == book){
                for(std::set<int>::iterator setIt = onTop.begin(); setIt != onTop.end(); setIt++){total += weight[*setIt];}
                onTop.clear();
            }
            else{onTop.insert(current);}
        }
    }

    printf("%ld\n", total);

    return 0;
}
