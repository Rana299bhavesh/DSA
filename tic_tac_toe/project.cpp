#include<iostream>
using namespace std;

char arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row, col;
bool draw = false;

void display_board(){
    system("cls");
    cout<<"\n\n    T I C   T A C   T O E"<<endl;
    cout<<"\tPlayer1[X] \n\tPlayer2[O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |  "<<arr[0][2]<<"  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |  "<<arr[1][2]<<"  \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |  "<<arr[2][2]<<"  \n";
    cout<<"\t\t     |     |     \n";
}

void player_turn(){
    int choice;
    
    if(turn=='X'){
        cout<<"\n\tPlayer1[X] turn: ";
    }
    if(turn=='O'){
        cout<<"\n\tPlayer2[X] turn: ";
    }
    cin>>choice;

    switch(choice){
        case 1: row=0; col=0; break;
        case 2: row=0; col=1; break;
        case 3: row=0; col=2; break;
        case 4: row=1; col=0; break;
        case 5: row=1; col=1; break;
        case 6: row=1; col=2; break;
        case 7: row=2; col=0; break;
        case 8: row=2; col=1; break;
        case 9: row=2; col=2; break;
        
        

            default:
                cout<<"Invalid Choice"<<endl;
                break;
                
    }

    if(turn== 'X' && arr[row][col]!='X' && arr[row][col]!='O'){
        arr[row][col]='X';
        turn='O';
    }
    else if(turn== 'O'  && arr[row][col]!='X' && arr[row][col]!='O'){
        arr[row][col]='O';
        turn='X';
    }
    else{
        cout<< "BOX already filled!\n Please Try again!!\n\n";
        player_turn();
        
    }
    display_board();
}
bool game_over(){

    //Check who has won
    for(int i=0; i<3; i++){
        if(arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2] || arr[0][i]==arr[1][i] && arr[0][i]==arr[2][i] )
        return false;
    }
    if(arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2] || arr[0][2]==arr[1][1] && arr[0][0]==arr[2][0]){
        return false;
    }

    //Check whether all boxes are filed
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(arr[i][j]!= 'X' && arr[i][j]!='O')
    return true;

    //Check there is a Draw
    draw=true;
    return false;
}


main(){

    
    
    while(game_over()){
        display_board();
        player_turn();
        game_over();
        

    }


    if(turn=='X' && draw == false){
        cout<<"Player2[O] Wins!! Congratulations\n";
    }
    else if(turn=='O' && draw == false){
        cout<<"Player1[X] Wins!! Congratulations\n";
    }
    else{
        cout<<"GAME DRAW!! \n";
    }
    
    


}