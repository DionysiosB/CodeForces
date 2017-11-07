#include <cstdio>
#include <iostream>
#include <iostream>


int main(){

    std::string input; getline(std::cin, input);
    int k; scanf("%d\n", &k);
    long total(0);

    for(int p = 0; p < k; p++){
        std::string forbidden; getline(std::cin, forbidden);
        //std::cout << "Pair: " << forbidden << std::endl;
        bool inside = 0;
        long first(0), second(0);

        for(long s = 0; s < input.size(); s++){
            //std::cout << "\nLetter: " << input[s] << "\t";
            if(!inside && input[s] != forbidden[0] && input[s] != forbidden[1]){continue;}
            if(inside && input[s] != forbidden[0] && input[s] != forbidden[1]){
                //puts("Got out");
                inside = 0; 
                long minimum = first; if(first > second){minimum = second;}
                total += minimum;
                first = 0; second = 0;
            }
            else if(input[s] == forbidden[0] || input[s] == forbidden[1]){
                inside = 1;
                if(input[s] == forbidden[0]){++first;}
                else if(input[s] == forbidden[1]){++second;}
            }
        }

        if(inside){long minimum = first; if(first > second){minimum = second;}; total += minimum;}
    }

    printf("%ld\n", total); 

    return 0;
}
