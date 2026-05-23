#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

int main(){

    int n; std::cin >> n;
    std::vector<std::pair<std::string, std::string> > requests(n);
    std::set<std::string> names;
    std::map<std::string, std::string> newToOld;

    for(int p = 0; p < n; p++){
        std::string original, requested; std::cin >> original >> requested;
        //std::cout << "_"<< original<<"_" << requested <<"_" <<  std::endl;

        if(names.count(requested)){continue;}
        names.insert(original); names.insert(requested);
        
        if(newToOld.count(original) > 0){
            //std::cout << "Original already present\n";
            std::string oldOriginal = newToOld[original];
            newToOld.erase(original);
            newToOld.insert(std::pair<std::string, std::string>(requested, oldOriginal));
        }
        else{newToOld.insert(std::pair<std::string, std::string>(requested, original));}
        //puts("\n===\n");
    }

    std::cout << newToOld.size() << std::endl;
    for(std::map<std::string, std::string>::iterator mapIter = newToOld.begin(); mapIter != newToOld.end(); mapIter++){
        std::cout << mapIter->second << " " << mapIter->first << std::endl;
    }

    return 0;
}
