//JC Abrahamson and Noah Berry
//PE 4 pt 2

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

string GetPlayerChoice(){
    cout << "WHERE WOULD YOU LIKE TO PLAY: " << endl;
    cout << "TL | TM | TR" << endl;
    cout << "CL | CM | CR" << endl;
    cout << "BL | BM | BR" << endl << endl;
    string choice = "";
    getline(cin, choice);
    int i = 0;
    char c;
    while(choice[i]){
        c = choice[i];
        choice[i] = (toupper(c));
        i++;
    }
    return choice;
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
    DisplayBoard(vec);
    char marker_char;

    //Round One
    marker_char = 'X';
    cout << "Turn: " << marker_char << endl;
    string user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Two
    marker_char = 'O';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Three
    marker_char = 'X';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Four
    marker_char = 'O';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Five
    marker_char = 'X';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice(); 
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Six
    marker_char = 'O';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Seven
    marker_char = 'X';
    cout << "Turn: " << marker_char<<endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Eight
    marker_char = 'O';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);
    //Round Nine
    marker_char = 'X';
    cout << "Turn: " << marker_char<< endl;
    user_choice = GetPlayerChoice();
    vec = PlaceMarker(vec, user_choice, marker_char);
    DisplayBoard(vec);

    // //Round Two
    // string user_choice = GetPlayerChoice();
    // marker_char = 'X';
    // vec = PlaceMarker(vec, user_choice, marker_char);
    
    
    
    return 0;
}

