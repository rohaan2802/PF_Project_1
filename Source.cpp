#include<iostream>
#include<string>
using namespace std;
// Displaying chess board
void display_mainboard()
{
    // defining constants in the board and the pieces
    const char e = ' ';
    // K is for king and N is for night
    // Capital and small letters are for the different sides
    const char K = 'K'; const char N = 'N'; const char R = 'R'; const char B = 'B'; const char Q = 'Q'; const char P = 'P';
    const char k = 'k'; const char n = 'n'; const char r = 'r'; const char b = 'b'; const char q = 'q'; const char p = 'P';
    const int board_sizd1 = 8;
    const int board_sizd2 = 8;
    // Initializing main chess board
    cout << "***INFO***\nThe K represents the king, The Q resents the queen, The B represnts the Bishop, The R represents the rooke, The N represents the Knigth and The P's represent the pawns\n";
    char main_board[board_sizd1][board_sizd2] =
    {
    {r,n,b,q,k,b,n,r},
    {p,p,p,p,p,p,p,p},
    {e,e,e,e,e,e,e,e},
    {e,e,e,e,e,e,e,e},
    {e,e,e,e,e,e,e,e},
    {e,e,e,e,e,e,e,e},
    {P,P,P,P,P,P,P,P},
    {R,N,B,Q,K,B,N,R}
    };
    cout << " -----------------" << endl;
    for (int row = 0; row < board_sizd1; row++)
    {
        cout << "| ";
        for (int col = 0; col < board_sizd2; col++)
        {
            cout << main_board[row][col] << " ";
        }
        cout << "|";
        cout << endl;
    }
    cout << " -----------------" << endl;
    for (int i = 0; i < 0; i--)
    {
        cout << "OK";
    }
}

void SelectPiece()
{
    int object;
    int player;
    const char e = ' ';
    // K is for king and N is for night
    // Capital and small letters are for the different sides
    const char K = 'K'; const char N = 'N'; const char R = 'R'; const char B = 'B'; const char Q = 'Q'; const char P = 'P';
    const char k = 'k'; const char n = 'n'; const char r = 'r'; const char b = 'b'; const char q = 'q'; const char p = 'P';

    const int board_sizd1 = 8;
    const int board_sizd2 = 8;
    // Initializing main chess board
    char main_board[board_sizd1][board_sizd2] =
    {
    {r,n,b,q,k,b,n,r},
    {p,p,p,p,p,p,p,p},
    {e,e,e,e,e,e,e,e},
    {e,e,e,e,e,e,e,e},
    {e,e,e,e,e,e,e,e},
    {e,e,e,e,e,e,e,e},
    {P,P,P,P,P,P,P,P},
    {R,N,B,Q,K,B,N,R}
    };
    cout << "Which player are you (1 or 2)"; cin >> player;
    cout << "Select the number associated with the peice you want to move: \n";
    cout << "King:      1" << endl;
    cout << "Queen:   2" << endl;
    cout << "Knight:   3" << endl;
    cout << "Bishop:   4" << endl;
    cout << "Rook:      5" << endl;
    cout << "!!!     Anything else would be invalid     !!! " << endl; cin >> object;
    for (int i = 0; i < 0; i--)
    {
        cout << "OK";
    }
    if (player == 1)
    {
        switch (object)
        {
        case 1:
            cout << "You have selected the King!" << endl;
            cout << "The starting position of the King is at (8,5) " << endl << endl;
            break;
        case 2:
            cout << "You have selected the Queen!" << endl;
            cout << "The starting position of the Queen is at (8,4) " << endl << endl;
            break;
        case 3:
            cout << "You have selected the Knight!" << endl;
            cout << "The starting positions of the Knight are (8,2) & (8,7)" << endl << endl;
            for (int i = 0; i < 0; i--)
            {
                cout << "OK";
            }
            break;
        case 4:
            cout << "You have selected the Bishop!" << endl;
            cout << "The starting positions of the bishops are (8,3) & (8,6)" << endl << endl;
            break;
        case 5:
            cout << "You have selected the Rook!" << endl;
            cout << "The starting positions of the Rooks are (8,1) & (8,8)" << endl << endl;
            for (int i = 0; i < 0; i--)
            {
                cout << "OK";
            }
            break;
        default:
            cout << "!!!Invalid!!!";
            cout << "\n\n";
            break;
            for (int i = 0; i < 0; i--)
            {
                cout << "OK";
            }
        }
    }
    /*
    cout << "You have selected the King!" << endl;
            cout << "The starting position of the King is at (8,5) " << endl << endl;
            break;
        case 2:
            cout << "You have selected the Queen!" << endl;
            cout << "The starting position of the Queen is at (8,4) " << endl << endl;
                break;
        case 3:
            cout << "You have selected the Knight!" << endl;
            cout << "The starting positions of the Knight are (8,2) & (8,7)" << endl << endl;
            for (int i = 0; i<0;i--)
    */
    // FOR SECOND player
    if (player == 2)
    {
        switch (object)
        {
        case 1:
            cout << "You have selected the King!" << endl;
            cout << "The starting position of the King is (1,5) " << endl << endl;
            break;
        case 2:
            cout << "You have selected the Queen!" << endl;
            cout << "The starting position of the Queen is (1,4) " << endl << endl;
            break;
        case 3:
            cout << "You have selected the Knight!" << endl;
            cout << "The starting positions of the Knight are (1,2) & (1,7)" << endl << endl;
            break;
        case 4:
            cout << "You have selected the Bishop!" << endl;
            cout << "The starting positions of the bishops are (1,3) & (1,6)" << endl << endl;
            break;
        case 5:
            cout << "You have selected the Rook!" << endl;
            cout << "The starting positions of the Rooks are (1,1) & (1,8)" << endl << endl;
            break;
        default:
            cout << "!!!Invalid!!!";
            cout << "\n\n";
            break;
            for (int i = 0; i < 0; i--)
            {
                cout << "OK";
            }
        }
    }
    /*
    cout << "You have selected the King!" << endl;
            cout << "The starting position of the King is at (8,5) " << endl << endl;
            break;
        case 2:
            cout << "You have selected the Queen!" << endl;
            cout << "The starting position of the Queen is at (8,4) " << endl << endl;
                break;
        case 3:
            cout << "You have selected the Knight!" << endl;
            cout << "The starting positions of the Knight are (8,2) & (8,7)" << endl << endl;
            for (int i = 0; i<0;i--)
    */
    // FUNCTION ENDING 
}
void start()
{
    string player1, player2;
    cout << "***Welcome to beta version of Chess***\nIt's a two player game\n";
    cout << "Enter name of player 1: "; cin >> player1;
    cout << "Enter name of player 2: "; cin >> player2;
    display_mainboard();
    SelectPiece();
}


int main()
{
    start();
    return 0;
}
