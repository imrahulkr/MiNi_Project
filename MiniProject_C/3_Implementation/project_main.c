/*******************************************************************
    THIS IS TIC TAC TOE GAME PROGRAME WHICH IS PLAYED BY 2 USER
    THIS PROGRAM INITIALLY DISPLAYS THE BOARD POSITION WITH NUMBERS
    WHICH SHOWS THE POSITION NUMBER AND THOSE SHOWN NUMBERS ARE THE
    ONLY VALID POSITION TO BE ENTERED BY THE USER. 
    THIS GAME FOLLOWS ALL THE RULES OF REAL TIC TAC TOE GAME. NO RULES
    ARE EXEMPTED OR NO NEW RULES IS INTRODUCED.

    ------------------------- BEST OF LUCK ------------------------- 
 ********************************************************************/

#include <stdio.h>

char square[10] = { '.', '.', '.', '.', '.', '.', '.', '.', '.', '.' };

int wincheck();
void board();
void initial_board_position();

int main()
{
    int player = 1, i, choice;
    char mark;
    initial_board_position();
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';
        
        if(square[choice]=='.')
        {

            if (choice == 1)
                square[1] = mark;
            
            else if (choice == 2)
                square[2] = mark;
            
            else if (choice == 3)
                square[3] = mark;
            
            else if (choice == 4 )
                square[4] = mark;
            
            else if (choice == 5)
                square[5] = mark;
            
            else if (choice == 6)
                square[6] = mark;
            
            else if (choice == 7)
                square[7] = mark;
            
            else if (choice == 8)
                square[8] = mark;
            
            else if (choice == 9)
                square[9] = mark;
        }
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = wincheck();
      //  printf("%d\n",i);
        player++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}

/*********************************************

THIS FUNCTION RETURNS THE STATUS OF THE GAME 
------  1 WHEN SOMEONE HAS WON
------ -1 WHEN GAME IS STILL IN PROGRESS
------  O WHEN THE GAME IS OVER WITHOUT ANY RESULT
 **********************************************/

int wincheck()
{   
    int i=0;
    if(square[1]=='O'||square[1]=='X'){
        if (square[1] == square[2] && square[2] == square[3])
            return 1;
        else if (square[1] == square[4] && square[4] == square[7])
            return 1;
        else if (square[1] == square[5] && square[5] == square[9])
            return 1;
    }

    if(square[2]=='O'||square[2]=='X'){
        if (square[2] == square[5] && square[5] == square[8])
            return 1;
    }

    if(square[3]=='O'||square[3]=='X'){
        if (square[3] == square[6] && square[6] == square[9])
            return 1;
     
        else if (square[3] == square[5] && square[5] == square[7])
            return 1;
    }
    if(square[4]=='O'||square[4]=='X'){
        if (square[4] == square[5] && square[5] == square[6])
            return 1;
    }

    if(square[7]=='O'||square[7]=='X'){   
        if (square[7] == square[8] && square[8] == square[9])
            return 1;
    }    
   
    for (i=1; i<10; i++)
        if(square[i]=='.')
            break;
    if(i==10)
        return 0;
    else
        return  - 1;
}


/*******************************************************************
    THIS FUNCTION WILL DROW THE BOARD POSITION AFTER EACH SUCCESSFUL
    ENTRY BY THE USER
 ********************************************************************/


void board()
{
   // system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}

/*******************************************************************
    THIS FUNCTION WILL DROW THE INITIAL BOARD POSITION AND SHOWS THE
    BOARD NUMBER WHICH IS ACTUAL VALID POSITION NUMBER WHICH WILL BE
    ENTERED BY THE PLAYER
 ********************************************************************/

void initial_board_position(){
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  1  |  2  |  3 \n");

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  4  |  5  |  6 \n");

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  7  |  8  |  9 \n");
    printf("     |     |     \n\n");
}