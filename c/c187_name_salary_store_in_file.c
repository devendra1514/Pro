/* Take Name and salary of two employee as input from user and write them to a text file in 
    following format:
    devendra,44.55
    pradeep,55.44
*/

#include<stdio.h>
void main(){
    char name[10];
    float salary;
    FILE* fp;
    fp=fopen("c187.txt","w");
    for(int i=1;i<=2;i++){
        fflush(stdin);
        printf("Enter %d employee name :",i);
        scanf("%s",name);
        fflush(stdin);
        printf("Enter %d employee salary :",i);
        scanf("%f",&salary);
        
        fprintf(fp,"%s , %.2f\n",name,salary);
    }
    fclose(fp);
}