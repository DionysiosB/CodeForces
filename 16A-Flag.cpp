#include <cstdio>
#include <iostream>

int main(){

    int n(0), m(0); scanf("%d %d\n", &n, &m);

    std::string currentLine("");
    int currentColor = -1; 
    bool output(1);
    for(int row = 0; row < n; row++){
        getline(std::cin, currentLine);
        if(currentLine[0] == currentColor || output == 0){output = 0; break;}
        else{currentColor = currentLine[0];
        for(int col = 1; col < m; col++){if(currentLine[col] != currentColor){output = 0; break;}}
        }
    }

    if(output){puts("YES");} else {puts("NO");}
    return 0;
}
