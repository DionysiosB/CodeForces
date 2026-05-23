#include <cstdio>
#include <vector>
#include <algorithm>


int main(){

    long m(0); scanf("%ld", &m);
    int *card = new int[m];

    for(int k = 0; k < m; k++){scanf("%d", card + k);}
    std::sort(card, card + m);

    std::vector<int> before, after;
    for(int k = 0; k < m; k++){
        if(before.size() == 0 || before.back() < card[k]){before.push_back(card[k]);}
        else if(after.size() == 0 || after.back() < card[k]){after.push_back(card[k]);}
    }

    if(after.size() > 0 && after.back() == before.back()){after.pop_back();}

    printf("%ld\n", before.size() + after.size());
    for(int k = 0; k < before.size(); k++){printf("%d ", before[k]);}
    for(int k = 0; k < after.size(); k++){printf("%d ", after[after.size() - 1 - k]);}
    puts("");

    delete[] card;
    return 0;
}
