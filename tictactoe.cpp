#include<iostream>
using namespace std;
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
//game status
int status(){
    if (square[1]==square[2] and square[2]==square[3]){
        return 1;
    }
    else if (square[4]==square[5] and square[5]==square[6]){
        return 1;
    }
    else if (square[7]==square[8] and square[8]==square[9]){
        return 1;
    }
    else if (square[1]==square[4] and square[4]==square[7]){
        return 1;
    }
    else if (square[2]==square[5] and square[5]==square[8]){
        return 1;
    }
    else if (square[3]==square[6] and square[6]==square[9]){
        return 1;
    }
    else if (square[1]==square[5] and square[5]==square[9]){
        return 1;
    }
     else if (square[3]==square[5] and square[5]==square[7]){
        return 1;
    }
    else if (square[1] !='1' and square[2]!='2' and square[3]!='3' 
            and square[4]!='4' and square[5]!='5' and square[6]!='6' 
            and square[7]!='7' and square[8]!='8' and square[9]!='9'){
                return 0;
            }
    else {
        return -1;
    }
}
//function for board
void board(){
    system("cls");
    cout<<"\n\n\t TIC TAC TOE \n\n";
    cout <<"Player 1(X) - Player 2(O)"<<endl<<endl<<endl;

    //drawing board 
    cout<<"    |    |    "<<endl;
    cout<<" "<<square[1]<<"  |  "<<square[2]<<" |  "<<square[3]<< endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<square[4]<<"  |  "<<square[5]<<" |  "<<square[6]<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |    "<<endl;
    cout<<" "<<square[7]<<"  |  "<<square[8]<<" |  "<<square[9]<<endl;
    cout<<"    |    |    "<<endl<<endl;
}
int main(){
    int player  = 1, i, choice;
    char mark;
    do {
        board();
        player=(player%2)?1:2;
        cout<<"Player "<< player <<", enter the number: ";
        cin>>choice;
        mark=(player == 1)?'X' : 'O';
        if (choice == 1 and square[1] == '1'){
            square[1] = mark;
        }
        else if (choice == 2 and square[2] == '2'){
            square[2] = mark;
        }
        else if (choice == 3 and square[3] == '3'){
            square[3] = mark;
        }
        else if (choice == 4 and square[4] == '4'){
            square[4] = mark;
        }
        else if (choice == 5 and square[5] == '5'){
            square[5] = mark;
        }
        else if (choice == 6 and square[6] == '6'){
            square[6] = mark;
        }
        else if (choice == 7 and square[7] == '7'){
            square[7] = mark;
        }
        else if (choice == 8 and square[8] == '8'){
            square[8] = mark;
        }
        else if (choice == 9 and square[9] == '9'){
            square[9] = mark;
        }
        else {
            cout<<"INVALID MOVE";
            player--;
            cin.ignore();
            cin.get();
        }
        i = status();
        player++;
    }
    while(i == -1);
    board();
    if (i == 1){
        cout<<"\aCONGRADULATIONS PLAYER "<<--player<<" WINS";
    }
    else{
        cout<<"\aGAME DRAW";
    }
    cin.ignore();
    cin.get();
    return 0;

}