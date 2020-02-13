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




int main(){
    std::vector<std::vector<char>> vec = CreateBoard();
   
    
    
    
    
    
    
    return 0;
}

