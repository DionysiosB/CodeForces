#include <cstdio>
#include <iostream>

long lmin(long a, long b){return a < b ? a : b;}
long lmax(long a, long b){return a < b ? b : a;}

int main(){

    long n(0); scanf("%ld\n", &n);
    long currentMin = -2e9;
    long currentMax = 2e9;

    while(n--){

        std::string query(""); long qNum(0); char ans;
        std::cin >> query >> qNum >> ans;
        
        if(query == ">" && ans == 'Y'){      currentMin = lmax(currentMin, qNum + 1);}
        else if(query == ">" && ans == 'N'){ currentMax = lmin(currentMax, qNum);}
        else if(query == ">=" && ans == 'Y'){currentMin = lmax(currentMin, qNum);}
        else if(query == ">=" && ans == 'N'){currentMax = lmin(currentMax, qNum - 1);}

        else if(query == "<" && ans == 'Y'){ currentMax = lmin(currentMax, qNum - 1);}
        else if(query == "<" && ans == 'N'){ currentMin = lmax(currentMin, qNum);}
        else if(query == "<=" && ans == 'Y'){currentMax = lmin(currentMax, qNum);}
        else if(query == "<=" && ans == 'N'){currentMin = lmax(currentMin, qNum + 1);}
    }
    

    if(currentMin <= currentMax){printf("%ld\n", currentMin);}
    else{puts("Impossible");}

    return 0;

}
