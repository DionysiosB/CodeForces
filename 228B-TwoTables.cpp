#include <cstdio>
#include <vector>

int main(){

    int na, ma; scanf("%d %d\n", &na, &ma);
    std::vector<std::vector<char> > first(na, std::vector<char>(ma, '0')); 
    for(int row = 0; row < na; row++){for(int col = 0; col < ma; col++){scanf("%c", &first[row][col]);}; scanf("\n");}

    int nb, mb; scanf("%d %d\n", &nb, &mb);
    std::vector<std::vector<char> > second(nb, std::vector<char>(mb, '0')); 
    for(int row = 0; row < nb; row++){for(int col = 0; col < mb; col++){scanf("%c", &second[row][col]);}; scanf("\n");}


    long maxSum(0); int shiftMaxRow(0), shiftMaxCol(0);

    int boundRow = na; if(na < nb){boundRow = nb;}
    int boundCol = ma; if(ma < mb){boundCol = mb;}


    for(int rowShift = -boundRow; rowShift <= boundRow; rowShift++){
        for(int colShift = -boundCol; colShift <= boundCol; colShift++){
            long totalSum(0);
            for(int row = 0; row < na; row++){
                for(int col = 0; col < ma; col++){
                    if(row + rowShift >= 0 && row + rowShift < nb && col + colShift >= 0 && col + colShift < mb && first[row][col] == '1' && second[row + rowShift][col + colShift] == '1'){
                        ++totalSum;
                    }
                }
            }
            if(totalSum > maxSum){maxSum = totalSum; shiftMaxCol = colShift; shiftMaxRow = rowShift;}
            printf("x:%d\ty:%d\ttotalSum:%ld\tmaxSum:%ld\n", rowShift, colShift, totalSum, maxSum);
        }
    }

    printf("%d %d\n", shiftMaxRow, shiftMaxCol);

    return 0;
}
