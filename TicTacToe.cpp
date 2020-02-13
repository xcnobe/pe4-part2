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
void DisplayBoard(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout << SymbolVisualizer(board_[i][j]);
		}
		std::cout<<std::endl; 
	}
	std::cout<<std::endl;
} 



int main(){
    std::vector<std::vector<char>> vec = CreateBoard();
   
    
    
    
    
    
    
    return 0;
}

