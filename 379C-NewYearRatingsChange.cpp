#include <cstdio>
#include <vector>
#include <algorithm>

struct score{
    long id;
    long rating;
};

bool compScore(score A, score B){return A.rating < B.rating;}

int main(){

    long n(0); scanf("%ld\n", &n);

    score dummy; dummy.id = 0; dummy.rating = 0;
    std::vector<score> wishes(n, dummy);

    for(long k = 0; k < n; k++){long temp; scanf("%ld", &temp); wishes[k].id = k; wishes[k].rating = temp;}
    std::sort(wishes.begin(), wishes.end(), compScore);

    long nextAvailable = 1;
    std::vector<long> output(n, 0);

    for(int k = 0; k < n; k++){
        if(nextAvailable < wishes[k].rating){output[wishes[k].id] = wishes[k].rating;}
        else{output[wishes[k].id] = nextAvailable;}
        nextAvailable = output[wishes[k].id] + 1;
    }

    for(int k = 0; k < n; k++){printf("%ld ", output[k]);}
    puts("");

    return 0;

}
