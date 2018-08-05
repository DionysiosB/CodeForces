#include <cstdio>
#include <vector>

int main(){

    int n; scanf("%d", &n);
    std::vector<std::vector<long> > a(n, std::vector<long>(n, 0));

    for(int row = 0; row < n; row++){for(int col = 0; col < n; col++){scanf("%ld", &a[row][col]);}}

    bool possible(true);
    for(int row = 0; row < n; row++){
        if(!possible){break;}
        for(int col = 0; col < n; col++){
            if(a[row][col] == 1){continue;}
            bool current = false;
            for(int x = 0; x < n; x++){for(int y = 0; y < n; y++){if(a[row][col] == a[row][y] + a[x][col]){current = true;}}}
            if(!current){possible = false; break;}
        }
    }

    puts(possible ? "Yes" : "No");

    return 0;
}
