#include <iostream>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    long t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::string a, b; std::cin >> a >> b;
        long win(0), lose(0);
        for(long p = 0; p < n; p++){
            win  += (a[p] > b[p]);
            lose += (a[p] < b[p]);
        }

        if(win > lose){puts("RED");}
        else if(win == lose){puts("EQUAL");}
        else if(win < lose){puts("BLUE");}
    }

}
