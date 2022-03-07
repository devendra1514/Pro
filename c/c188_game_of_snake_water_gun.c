// 188)WAP to create a game of snake, water and gun.
#include<stdio.h>
#include<stdlib.h>        //for rand() and srand()
#include<time.h>       //for time()
int game(char you,char comp){
    if(you == comp){
        return 0;
    }
    else if(you == 's' && comp == 'w'){
        return 1;
    }
    else if(you == 'w' && comp == 's'){
        return -1;
    }
    else if(you == 'w' && comp == 'g'){
        return 1;
    }
    else if(you == 'g' && comp == 'w'){
        return -1;
    }
    else if(you == 'g' && comp == 's'){
        return 1;
    }
    else if(you == 's' && comp == 'g'){
        return -1;
    }
}
void main(){
    char you,comp;
    int number=0;
    srand(time(0));
    do{
        number=rand()%100+1;    //random number generate between 1 to 32767 so we divided to 100 
        if(number < 33){        //and we get a number between 1 to 100
            comp='s';
        }
        else if(number > 33 && number < 66){
            comp='w';
        }
        else{
            comp='g';
        }
        printf("\n>>>Enter 's' for snake, 'w' for water and 'g' for gun :");
        printf("\nYour answer >>> ");
        fflush(stdin);          //clear for garbage value
        scanf("%c",&you);
        int result=game(you,comp);
        if(result == 1){
            printf("\nYou win....... Computer choose '%c' and You choose '%c'\n",comp,you);
        }
        else if(result == -1){
            printf("\nYou lose........computer choose '%c' and You choose '%c'\n",comp,you);
        }
        else if(result == 0){
            printf("\nGame Draw....\n");
        }
        else{
            printf("\nSuccesfully exit !!!!!!");
            exit(1);
        }
    }while(you == 's' || you == 'w' || you == 'g');
}