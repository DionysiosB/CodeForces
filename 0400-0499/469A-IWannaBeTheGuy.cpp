#include <cstdio>
#include <set>

int main(){

    int n; scanf("%d\n", &n);


    std::set<int> pass;

    int p; scanf("%d\n", &p);
    for(int k = 0; k < p; k++){int temp; scanf("%d", &temp); pass.insert(temp);}

    int q; scanf("%d\n", &q);
    for(int k = 0; k < q; k++){int temp; scanf("%d", &temp); pass.insert(temp);}

    puts(pass.size() >= n ? "I become the guy." : "Oh, my keyboard!");

    return 0;
}
