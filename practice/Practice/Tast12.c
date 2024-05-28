#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct 
{
    int group_id;
    char group_name[30];
    int tasks[5];
}Group;

void input(){
    FILE *fptr= fopen("comrecourd.txt","a");
    if(fptr==NULL){
        printf("error in file opning");
        return;
    }

    Group Group;
    printf("entr the id of group:");
    scanf("%d",&Group.group_id);
    printf("Enter the name of group:");
    scanf("%s",&Group.group_name);

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the result of task %d(1 or 0):",i+1);
        scanf("%d",&Group.tasks[i]);
    }
    fprintf(fptr,"%d %s %d %d %d %d %d\n",Group.group_id,Group.group_name,Group.tasks[0],Group.tasks[1],Group.tasks[2],Group.tasks[3],Group.tasks[4]);
     fclose(fptr);
    return;
}//end of input funcation

void dispaly(){
    FILE *fptr= fopen("comrecourd.txt","r");
     if(fptr==NULL){
        printf("error in file opning");
        return;
    }
    int maxtask=0;
    int group_id;
    int curentid;
    char group_name[30];
    char curntgroupname[30];
    int task[5];
    while(fscanf(fptr,"%d %s %d %d %d %d %d",&curentid,curntgroupname,&task[0],&task[1],&task[2],&task[3],&task[4])==7){
        int grouptask=0;
        for (int i = 0; i < 5; i++)
        {
           grouptask+=task[i];
        }
        if(grouptask>maxtask){
            maxtask=grouptask;
            strcpy(group_name,curntgroupname);
            group_id=curentid;

        }
        
    }
    fclose(fptr);
    printf("The winer group's detail:\n");
    printf("gorup id is %d\n",group_id);
    printf("group name is %s\n",group_name);
    printf("group task %d",maxtask);
    return;
}// end of dispaly winer;

void Search(){
    FILE *fptr= fopen("comrecourd.txt","r");
     if(fptr==NULL){
        printf("error in file opning");
        return;
    }
        int choice;
       while (1)
       {
          printf("enter the id you wont to found(0: for exit)");
          scanf("%d",&choice);
         
          int maxtask=0;
          int group_id;
          int curentid;
          char group_name[30];
          char curntgroupname[30];
          int found=0;
          int task[5];
          while(fscanf(fptr,"%d %s %d %d %d %d %d",&curentid,curntgroupname,&task[0],&task[1],&task[2],&task[3],&task[4])==7){
            
            if(choice==curentid){
                found=1;
                printf("Group name is :%s\n",curntgroupname);
                printf("Tasks Result is ");
                for (int i = 0; i < 5; i++)
                {
                    printf("%d ",task[i]);
                }
            }
          }
          printf("\n");
           if(!found){
              printf("This group id is not valid entr valid id\n");
           }else break;
       }
       
    return;
}
int main(int argc, char const *argv[])
{
    int choice;
    do
    {
        printf("mnue\n");
        printf("1: for input in the file \n");
        printf("2: for dispaly the winer:\n");
        printf("3: for Search the group:\n");
        printf("0: for exit\n");
        printf("enter your chouse:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            input();
            break;
        case 2: 
            dispaly();
            break;
        case 3:
            Search();
            break;
        case 0:
            printf(" ");
            break;    
        default:
        printf("inter the valide choice:\n");
            break;
        }
    } while (choice != 0);
    
    return 0;
}
