#include <stdio.h>

void findway(char maze[][100],int i, int j) {
    int a,b,c,d;
    a = i + 1;b = j + 1;
    c = i - 1;d = j -1;
    if (maze[i][j] == 'S') {
        printf("(%d,%d)->", i, j);
        return;
    }else

    if ((maze[i][j + 1] == 'O' || maze[i][j + 1] == 'S')) {
        //if(maze[i][j+2]=='O')
        findway(maze, i, j + 1);
        maze[i][j] = 'W';
        printf("(%d,%d)<-", i, j);
        return;
    }else

    if ( (maze[i + 1][j] == 'O' || maze[i + 1][j] == 'S')) {
        findway(maze, i + 1, j);
        maze[i][j] = 'W';
        printf("(%d,%d)->", i, j);
        return;
    }else

    if ( (maze[i][j - 1] == 'O' || maze[i][j - 1] == 'S')) {
        maze[i][j] = 'W';
        findway(maze, i, j - 1);
        printf("(%d,%d)->", i, j);
        return;
    }else

    if ((maze[i - 1][j] == 'O' || maze[i - 1][j] == 'S')) {
        maze[i][j] = 'W';
        findway(maze,i - 1, j);
        maze[i][j] = 'W';
        printf("(%d,%d)->", i, j);
        return;
    }
}//end of functin

int main() {
    int r, c;
    char maze[100][100];

    printf("Enter the number of rows in the maze: ");
    scanf("%d", &r);
    printf("Enter the number of columns in the maze: ");
    scanf("%d", &c);

    printf("Enter the maze:\n");
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++){
        scanf("%s", &maze[i][j]); // Use %s to read a whole line as a string
       }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (maze[i][j] == 'E') {
                findway(maze, i, j);
            }
        }
    }
    printf("END");

    return 0;
}