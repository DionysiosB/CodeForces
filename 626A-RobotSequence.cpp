#include <iostream>
#include <vector>

int main(){

    int n; std::string s;
    std::cin >> n >> s;


    std::vector<int> x(n + 1, 0);
    std::vector<int> y(n + 1, 0);
    int cumX(0), cumY(0);
    for(int p = 1; p <= n; p++){
        if(s[p - 1] == 'R'){++cumX;}
        else if(s[p - 1] == 'L'){--cumX;}
        else if(s[p - 1] == 'U'){++cumY;}
        else if(s[p - 1] == 'D'){--cumY;}

        x[p] = cumX; y[p] = cumY;
    }

    long count(0);
    for(int debut = 0; debut < n; debut++){
        for(int fin = debut + 1; fin <= n; fin++){
            if(x[debut] == x[fin] && y[debut] == y[fin]){++count;}
        }
    }

    std::cout << count << std::endl;

    return 0;
}
