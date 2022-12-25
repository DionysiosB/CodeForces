#include <cstdio>
#include <iostream>

int main(){

    int n(0); scanf("%d\n", &n);
    std::string line(""); getline(std::cin, line);

    int state(0), output(0), startPos(0);

    for(int k = 0; k < line.size(); k++){
        if(state == 0 && line[k] == '.'){++output;}
        else if(state == 0 && line[k] == 'L'){output = 0;}
        else if(state == 0 && line[k] == 'R'){state = 1; startPos = k;}
        else if(state == 1 && line[k] == 'L'){state = 0; output += (k + 1 - startPos) % 2;}
    }

    printf("%d\n", output);

    return 0;
}
