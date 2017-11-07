#include <cstdio>
#include <vector>

std::vector<int> decimalToTernary(long x){
    std::vector<int> output;
    while(x > 0){output.push_back(x % 3);x /= 3;}
    return output;
}

long ternaryToDecimal(std::vector<int> x){
    long output(0);
    for(int k = x.size() - 1; k >= 0; k--){output = 3 * output + x[k];}
    return output;
}

std::vector<int> inverseTorOperation(std::vector<int> x, std::vector<int> y){
    std::vector<int> output;
    for(int k = 0; k < x.size() || k < y.size(); k++){
        int temp(0);
        if(k < x.size()){temp += 3 + x[k];} 
        if(k < y.size()){temp += 3 - y[k];} 
        output.push_back(temp % 3); 
    }
    return output;
}

int main(){
    long a, c; scanf("%ld %ld", &a, &c);
    printf("%ld\n", ternaryToDecimal(inverseTorOperation(decimalToTernary(c), decimalToTernary(a))));
    return 0;
}
