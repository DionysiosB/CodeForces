#include <iostream>

int main(){

    double s; std::cin >> s;
    double a, b, c; std::cin >> a >> b >> c;
    double x(s/3), y(s/3), z(s/3);
    double d = a + b + c;
    if(d > 0){x = s * (a / d); y = s * (b / d); z = s * (c / d);}
    printf("%.15lf %.15lf %.15lf\n", x, y, z);

    return 0;
}
