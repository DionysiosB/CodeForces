#include <cstdio>
#include <vector>

int main(){

    const int B = 3;
    std::vector<std::vector<int> > ability(B);

    int n; scanf("%d\n", &n);
    for(int p = 1; p <= n; p++){
        int current; scanf("%d", &current);
        ability[current - 1].push_back(p);
    }

    int total = ability[0].size();
    for(int p = 1; p < B; p++){if(ability[p].size() < total){total = ability[p].size();}}

    printf("%d\n", total);
    for(int p = 0; p < total; p++){
        for(int q = 0; q < B; q++){
            printf("%d ", ability[q][p]);
        }
        puts("");
    }

    return 0;
}
