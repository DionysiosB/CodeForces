#include <cstdio>

int main(){

    const long maxSteps = 1000000000;

    long long yardX(0), yardY(0); scanf("%lld %lld", &yardX, &yardY);
    long long currentX(0), currentY(0); scanf("%lld %lld", &currentX, &currentY);

    long long total(0);
    long numVectors(0); scanf("%ld", &numVectors);

    while(numVectors--){

        long vectorX(0), vectorY(0); scanf("%ld %ld", &vectorX, &vectorY);

        long numStepsX(maxSteps); 
        if(vectorX > 0){numStepsX = (yardX - currentX) / vectorX;} 
        else if(vectorX < 0){numStepsX = (currentX - 1) / (-vectorX);}

        long numStepsY(maxSteps); 
        if(vectorY > 0){numStepsY = (yardY - currentY) / vectorY;} 
        else if(vectorY < 0){numStepsY = (currentY - 1) / (-vectorY);}

        long numSteps(0);
        if(numStepsX > 0 && numStepsY > 0){numSteps = (numStepsX < numStepsY) ? numStepsX : numStepsY;}

        currentX += numSteps * vectorX;
        currentY += numSteps * vectorY; 
        total += numSteps;
        
    }

    printf("%lld\n", total);

    return 0;
}
