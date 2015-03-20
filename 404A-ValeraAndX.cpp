#include <cstdio>
#include <iostream>

int main(){

    int n(0); scanf("%d\n", &n);

    std::string line(""); 
    getline(std::cin, line);

    char seek = line[0];
    char other = line[1]; 
    bool result = 1;

    if(seek == other){result = 0;}
    for(int col = 2; col < n - 1; col++){if(line[col] != other){result = 0; break;}}
    if(line[n - 1] != seek){result = 0;}


    for(int row = 1; row < n; row++){
        getline(std::cin, line);
        for(int col = 0; col < n; col++){
            if(col == row  || col == n - 1 - row){if(line[col] != seek){result = 0; break;}}
            else if(line[col] != other){result = 0; break;}
        }
    }

    if(result){puts("YES");}
    else{puts("NO");}

    return 0;
}
