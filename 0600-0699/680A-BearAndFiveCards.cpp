#include <cstdio>
#include <vector>

const int N = 5;

int main(){

    std::vector<int> a(N);
    int sum(0);
    for(int p = 0; p < N; p++){scanf("%d", &a[p]); sum += a[p];}

    int ans(sum);

    for(int p = 0; p < N; p++){
        for(int q = p + 1; q < N; q++){
            if(a[p] == a[q] && (sum - 2 * a[p]) < ans){ans = sum - 2 * a[p];}
        }
    }

    for(int p = 0; p < N; p++){
        for(int q = p + 1; q < N; q++){
            for(int r = q + 1; r < N; r++){
                if(a[p] == a[q] && a[p] == a[r] && (sum - 3 * a[p]) < ans){ans = sum - 3 * a[p];}
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
