#include <cstdio>
#include <vector>

int maxSubarraySum(std::vector<int> inputArray){

    int output(0), currentMax(0), maxSoFar(0);
    for(int index = 0; index < inputArray.size(); index++){
        maxSoFar += inputArray[index];
        if(maxSoFar < 0){maxSoFar = 0;}
        else if(maxSoFar > currentMax){currentMax = maxSoFar;}
    }
    return currentMax;
}

int main(){

    int n(0); scanf("%d", &n);

    int temp(0), total(0); 
    std::vector<int> array;
    for(int k = 0; k < n; k++){
        scanf("%d", &temp); 
        total += temp; 
        array.push_back(-2 * temp + 1);
    }

    if(total < array.size()){total += maxSubarraySum(array);}
    else{--total;}

    printf("%d\n", total);
    return 0;
}
