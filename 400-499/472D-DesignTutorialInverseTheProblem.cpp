#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<std::vector<long> > distance(n + 1, std::vector<long>(n + 1, 0));

    for(long row = 1; row <= n; row++){
        for(long col = 1; col <= n; col++){
            scanf("%ld", &distance[row][col]);
        }
    }

    bool possible = 1;

    for(long row = 1; row <= n; row++){
        if(!possible){break;}
        if(distance[row][row] != 0){possible = 0; break;}
        for(long col = row + 1; col <= n; col++){
            if(distance[row][col] != distance[col][row] || distance[row][col] == 0){possible = 0; break;}
        }
    }


    for(long node = 1; node <= n; node++){
        if(!possible){break;}
        long closest = 1;
        for(long other = 1; other <= n; other++){
            if(node == other){continue;}
            if(distance[node][other] < distance[node][closest]){closest = other;}
        }

        for(long other = 1; other <= n; other++){
            long current = distance[node][other] - distance[other][closest];
            if(current < 0){current = -current;}
            if(distance[node][closest] != current){possible = 0; break;}
        }
    }


    puts(possible ? "YES" : "NO");

    return 0;
}
