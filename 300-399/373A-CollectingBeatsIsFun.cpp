#include <cstdio>
#include <iostream>
#include <string>


int main(){
    
    int k(0); scanf("%d", &k);
    int count[10] = {0};

    for(int row = 0; row < 5; row++){
        for(int col = 0; col < 5; col++){
            char temp('.'); scanf("%c", &temp); 
            if(temp != '.'){++count[temp - '0'];}
        }
        scanf("\n");
    }

    std::string output("YES");
    for(int p = 1; p <= 9; p++){if(count[p] > 2 * k){output = "NO"; break;}}
    std::cout << output << std::endl;
    return 0;
}
