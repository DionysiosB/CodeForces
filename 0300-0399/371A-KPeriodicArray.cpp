#include <cstdio>
#include <vector>

int main(){
    
    int n(0), k(0); scanf("%d %d", &n, &k);

    std::vector<bool> array;
    int temp(0); for(int p = 0; p < n; p++){scanf("%d", &temp); array.push_back(temp - 1);}

    int total(0);
    for(int p = 0; p < k; p++){
        int partial(0);
        for(int q = p; q < n; q += k){partial += array[q];}
        total += (partial < n/k - partial) ? partial : (n/k - partial);
    }

    printf("%d\n", total);
    return 0;
}
