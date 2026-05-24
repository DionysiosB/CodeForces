#include <iostream>

int main(){

    int s, x1, x2; std::cin >> s >> x1 >> x2;
    int t1, t2; std::cin >> t1 >> t2;
    int p, d; std::cin >> p >> d;

    if(x1 > x2){
        x1 = s - x1;
        x2 = s - x2;
        d = -d;
        p = s - p;
    }

    p *= d;
    if(p > x1){p -= 2 * s;}

    int f1 = (x2 - x1) * t2;
    int f2 = (x2 - p) * t1;
    int ans = (f1 < f2) ? f1 : f2;
    std::cout << ans << std::endl;

    return 0;
}
