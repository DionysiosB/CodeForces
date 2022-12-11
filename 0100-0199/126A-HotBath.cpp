#include <iostream>

int main(){

    int64_t  t1, t2, x1, x2,t0; std::cin >> t1 >> t2 >> x1 >> x2 >> t0;
    double best = 1e15;
    int64_t y1, y2;
    while(x1 >= 0 && x2 >= 0){
        double t = (1.0 * t1 * x1 + 1.0 * t2 * x2) / ( 1.0 * x1 + 1.0 * x2);
        if(t < t0){x1--; continue;}
        if(t < best){best = t; y1 = x1; y2 = x2;}
        x2--;
    }

    std::cout << y1 << " " << y2 << std::endl;

    return 0;
}
