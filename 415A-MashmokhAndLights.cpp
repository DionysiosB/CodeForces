#include <cstdio>
#include <vector>

int main(){

    int n(0), m(0); scanf("%d %d", &n, &m);
    std::vector<int> lights(n + 1,0);

    for(int k = 0; k < m; k++){
        int button(0); scanf("%d", &button);
        for(int p = button; p <= n; p++){if(lights[p] == 0){lights[p] = button;} else{break;}}
    }


    for(int p = 1; p <= n; p++){printf("%d ", lights[p]);}
    puts("");

    return 0;
}
