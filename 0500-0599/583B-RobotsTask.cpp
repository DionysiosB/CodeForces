#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<int> robots(n);
    std::vector<bool> done(n);
    for(int p = 0; p < n; p++){scanf("%d", &robots[p]); done[p] = 0;}

    int read(0);
    int changes(0);
    int direction = 1; int start(0); int finish(n);
    while(read < n){
        for(int p = 0; p < n; p++){
            if(done[p]){continue;}
            if(read >= robots[p]){done[p] = 1; ++read;}
        }

        if(read >= n){break;}
        ++changes;

        for(int p = n - 1; p >= 0; p--){
            if(done[p]){continue;}
            if(read >= robots[p]){done[p] = 1; ++read;}
        }

        if(read >= n){break;}
        ++changes;
    }


    printf("%d\n", changes);

    return 0;
}
