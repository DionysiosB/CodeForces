#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> lesson(n + 1, 0);
    for(int p = 0; p < n; p++){scanf("%d", &lesson[p]);}
    

    int state(0), total(0);
    for(int p = 0; p < n; p++){
        if(state == 1 && !lesson[p] && !lesson[p + 1]){state = 0; continue;}
        if(lesson[p]){state = 1;}
        total += (state || lesson[p]);
    }

    printf("%d\n", total);

    return 0;
}
