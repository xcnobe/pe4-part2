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


std::vector<std::vector<char>> PlaceMarker(std::vector<std::vector<char> > vec, string location, char marker){

    if(location == "TL"){vec[0][0] = marker;}

    if(location == "TM"){vec[0][1] = marker;}

    if(location == "TR"){vec[0][2] = marker;}

    if(location == "CL"){vec[1][0] = marker;}

    if(location == "CM"){vec[1][1] = marker;}

    if(location == "CR"){vec[1][2] = marker;}

    if(location == "BL"){vec[2][0] = marker;}

    if(location == "BM"){vec[2][1] = marker;}

    if(location == "BR"){vec[2][2] = marker;}

    return vec;

int main(){
    std::vector<std::vector<char>> vec = CreateBoard();
   
    
    
    
    
    
    
    return 0;
}

