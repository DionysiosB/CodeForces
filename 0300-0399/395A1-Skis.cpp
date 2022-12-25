#include <cstdio>
#include <algorithm>

int main(){

    long n(0), q(0); scanf("%ld %ld", &n, &q);
    long * length = new long[n];
    for(int k = 0; k < n; k++){scanf("%ld", length + k);}
    std::sort(length, length + n);

    long total(0), left(0), right(n - 1);
    while(left < right){
        if(length[left] + length[right] == q){++total; ++left; --right;}
        else if(length[left] + length[right] < q){++left;}
        else if(length[left] + length[right] > q){--right;}
    }

    printf("%ld\n", total);

    delete[] length;
    return 0;
}
