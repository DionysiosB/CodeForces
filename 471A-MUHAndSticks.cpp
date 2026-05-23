#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const int N = 10;
    const int S = 6;

    std::vector<int> counts(N,0);

    for(int p = 0; p < S; p++){int temp; scanf("%d", &temp); ++counts[temp];}
    std::sort(counts.begin(), counts.end());

    if(counts[N - 1] < 4){puts("Alien");}
    else if(counts[N - 2] == 2 || counts[N - 1] == 6){puts("Elephant");}
    else if(counts[N - 2] == 1 || counts[N - 1] == 5){puts("Bear");}
    else{puts("Error");}

    return 0;
}
