#include<cstdio>
#include<vector>
#include<algorithm>

int main(){

    const int B = 7;

    long n, m; scanf("%ld %ld\n", &n, &m);
    long X(1); for(int p = B; p < n; p *= B){++X;}
    long Y(1); for(int p = B; p < m; p *= B){++Y;}
    if(X + Y > B){puts("0"); return 0;}

    std::vector<int> v(B, 0);
    for(int p = 0; p < B; p++){v[p] = p;}

    long count(0);
    do{
        long a(0); for(long p = 0; p < X; p++){a = a * B + v[p];}
        long b(0); for(long p = X; p < X + Y; p++){b = B * b + v[p];}
        count += (a < n) && (b < m);
    }while(next_permutation(v.begin(), v.end()));

    for(int p = 0; p < B - X - Y; p++){count /= (p + 1);}

    printf("%ld\n", count);

    return 0;
}
