#include<iostream>
#include<vector>

int main(){

    const long N = 4;
    char rot[] = {'v', '<', '^', '>'};

    char a, b; std::cin >> a >> b;
    long n; std::cin >> n;
    n %= N;

    std::string direction = "undefined";
    if(n == 0 || n == 2){direction = "undefined";}
    else{
        for(long p = 0; p < N; p++){
            if(rot[p] == a && rot[(p + n) % N] == b){direction = "cw"; break;}
            else if(rot[p] == a && rot[(p - n + N) % N] == b){direction = "ccw"; break;}
        }
    }

    std::cout << direction << std::endl;

    return 0;
}
