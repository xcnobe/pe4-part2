#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>
#include <ctype.h>
using namespace std;


/**
 * JC Abrahamson and Noah Berry
 * PE 4pt2
 * Simulates a game of tic tac toe. the functions build and dsiplay the board and support 
 * turns by taking user input and updating the board appropiately
 */



/**
 * Create board just initializes a 3x3 blank board as a vector of char vectors
 * @return vector<std::vector<char>> vec a blank board of chars '-' 
 */
std::vector<std::vector<char>> CreateBoard(){
    int n = 3; 
    int m = 3; 
    std::vector<std::vector<char> > vec( n , std::vector<char> (m, '-'));  
    return vec;
}

/**
 * Prints the current board state
 * @param vec the current board state vector
 */
void DisplayBoard(std::vector<std::vector<char>> vec){
    for(int i = 0; i < vec[0].size(); i++) {
        cout<< "|";
        for (int j = 0; j < vec[0].size(); j++){ 
            std::cout<< vec[i][j]<< "|"; //for visual effect
        } 
        cout<< "\n"; 
    } 
}

/**
 * Gets user input for where they would like to play and return this position as a string
 * @return choice a string of the user choice
 */
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
        choice[i] = (toupper(c)); //error handling
        i++;
    }
    return choice;
}

/**
 * Gets user input for where they would like to play and return this position as a string
 * @param vec the current state fo the board vector
 * @param location, the user input choice of location to play
 * @param marker the char to replace the chosen location with
 * @return a updated version of the board after the play is made
 */
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

    

    return 0;
}

