#include <cstdio>
#include <iostream>

int main(){

    int x, t, a, b, da, db; scanf("%d %d %d %d %d %d\n", &x, &t, &a, &b, &da, &db);

    std::string output = "NO"; if(x == 0){output = "YES";}
    for(int first = 0; first < a / da && first < t; first++){
        if(output == "YES"){break;}
        for(int second = 0; second < b / db && second < t; second++){
            if(da * first == a - x){output = "YES"; break;}
            if(db * second == b - x){output = "YES"; break;}
            if(da * first + db * second == a + b - x){output = "YES"; break;}
            if(db * first + da * second == a + b - x){output = "YES"; break;}
        }
    }

    std::cout << output << std::endl;

    return 0;
}
