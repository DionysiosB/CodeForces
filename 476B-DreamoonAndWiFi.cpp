#include <cstdio>
#include <iostream>
#include <string>
#include <cstdlib>

double myFact(int n){
    double output = 1;
    for(int p = 2; p <= n; p++){output *= p;} 
    return output;
}


int main(){

    std::string sent; getline(std::cin, sent);
    std::string received; getline(std::cin, received);

    int desired = 0;
    for(int p = 0; p < sent.size(); p++){
        desired += (sent[p] == '+') ? 1 : -1;
    }

    int sure(0), uncertain(0);
    for(int p = 0; p < received.size(); p++){
        if(received[p] == '+'){++sure;}
        else if(received[p] == '-'){--sure;}
        else if(received[p] == '?'){++uncertain;}
    }

    int diff = abs(desired - sure);

    if(diff > uncertain || (diff % 2 != uncertain % 2)){puts("0.000000000000");}
    else{
        int dir = (uncertain + diff) / 2;
        double probability = myFact(uncertain) / myFact(dir) / myFact(uncertain - dir);
        for(int p = 0; p < uncertain; p++){probability /= 2.0;}
        printf("%.11f\n", probability);
    }

    return 0;

}
