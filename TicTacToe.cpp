#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
using namespace std;


std::vector<std::vector<char>> CreateBoard(){
    int n = 3; 
    int m = 3; 
    std::vector<std::vector<char> > vec( n , std::vector<char> (m, '-'));  
    return vec;
}

void DisplayBoard(std::vector<std::vector<char>> vec){
    for(int i = 0; i < vec[0].size(); i++) {
        cout<< "|";
        for (int j = 0; j < vec[0].size(); j++){ 
            std::cout<< vec[i][j]<< "|"; 
        } 
        cout<< "\n"; 
    } 
}




int main(){
    std::vector<std::vector<char>> vec = CreateBoard();
   
    
    
    
    
    
    
    return 0;
}

