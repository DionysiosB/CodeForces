#include <cstdio>
#include <vector>

int main(){

    int n(0); scanf("%d", &n);
    std::vector<std::vector<int> > laptop;
    for(int k = 0; k < n; k++){
        laptop.push_back(std::vector<int>(4,0));
        int speed(0), ram(0), hdd(0), cost(0);
        scanf("%d %d %d %d", &speed, &ram, &hdd, &cost);
        laptop[k][0] = speed;
        laptop[k][1] = ram;
        laptop[k][2] = hdd;
        laptop[k][3] = cost;
    }

    bool *candidate = new bool[n]; for(int k = 0; k < n; k++){candidate[k] = 1;}

    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            if(a == b){continue;}
            if(laptop[a][0] < laptop[b][0] && laptop[a][1] < laptop[b][1] && laptop[a][2] < laptop[b][2] && laptop[a][3] < laptop[b][3]){candidate[a] = 0; break;}
        }
    }

    int bestLaptop(-1), bestPrice(1001);
    for(int k = 0; k < n; k++){
        if(!candidate[k]){continue;}
        if(laptop[k][3] < bestPrice){bestPrice = laptop[k][3]; bestLaptop = k;}
    }

    printf("%d\n", bestLaptop + 1);

    return 0;
}