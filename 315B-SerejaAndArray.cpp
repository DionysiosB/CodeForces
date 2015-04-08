#include <cstdio>
#include <iostream>

int main(){

    long n(0), m(0); scanf("%ld %ld", &n, &m);
    long *data = new long[n + 1];
    data[0] = 0; for(int k = 1; k <= n; k++){scanf("%ld", data + k);}

    long globalAdd(0);
    
    while(m--){
        int action; std::cin >> action;

        if(action == 1){long element, value; std::cin >> element >> value; data[element] = value - globalAdd;}
        else if(action == 2){long addNew(0); std::cin >> addNew; globalAdd += addNew;}
        else if(action == 3){long element; std::cin >> element; std::cout << data[element] + globalAdd << std::endl;}
    }

    return 0;
}
