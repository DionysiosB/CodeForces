#include <cstdio>

int main(){

    long n(0); scanf("%ld", &n);
    long digits[10] = {0};

    int total(0);
    for(long k = 0; k < n; k++){
        int temp(0); scanf("%d", &temp);
        ++digits[temp];
        total += temp; 
        total %= 3;
    }


    bool possible(1);

    if(digits[0] == 0){possible = 0;}
    else{
        if(total == 1){
            if(digits[1] > 0){--digits[1];}
            else if(digits[4] > 0){--digits[4];}
            else if(digits[7] > 0){--digits[7];}
            else if(digits[2] > 1){digits[2] -= 2;}
            else if(digits[2] > 0 && digits[5] > 0){--digits[2]; --digits[5];}
            else if(digits[2] > 0 && digits[8] > 0){--digits[2]; --digits[8];}
            else if(digits[5] > 1){digits[5] -= 2;}
            else if(digits[5] > 0 && digits[8] > 0){--digits[5]; --digits[8];}
            else if(digits[8] > 1){digits[8] -= 2;}
            else{possible = 0;}
        }
        if(total == 2){
            if(digits[2] > 0){--digits[2];}
            else if(digits[5] > 0){--digits[5];}
            else if(digits[8] > 0){--digits[8];}
            else if(digits[1] > 1){digits[1] -= 2;}
            else if(digits[1] > 0 && digits[4] > 0){--digits[1]; --digits[4];}
            else if(digits[1] > 0 && digits[7] > 0){--digits[1]; --digits[7];}
            else if(digits[4] > 1){digits[4] -= 2;}
            else if(digits[4] > 0 && digits[7] > 0){--digits[4]; --digits[7];}
            else if(digits[7] > 1){digits[7] -= 2;}
            else{possible = 0;}
        }
    }
    
    bool isPositive(0); for(int k = 1; k <= 9; k++){if(digits[k] > 0){isPositive = 1; break;}}
        
    
    if(!isPositive){puts("0");}
    else if(possible){for(int k = 9; k >= 0; k--){while(digits[k]--){printf("%d", k);}}; puts("");}
    else{puts("-1");}

    return 0;
}
