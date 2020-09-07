/**
MARIA LUCIA CODE FOR 10.2
 */

#include <stdio.h>
#include <string.h>
#include <dirent.h>
void lsr(char *p);


int main(){
    char p[100];
    printf("Enter direction for files: ");    // Input path
    scanf("%s", p);
    lsr(p);
    return 0;
}


void lsr(char *bp)
{
    char p[1000];
    struct dirent *dp;
    DIR *d = opendir(bp);
    
  
    if (!d)   //  when it isn unable to open directory stream
        return;
    
    while ((dp = readdir(d)) != NULL)
    {
        if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
        {
            printf("%s\n", dp->d_name);
            
            
            strcpy(p, bp);
            strcat(p, "/");
            strcat(p, dp->d_name);
            // Construct new path from  base path
            
            lsr(p); //recursivity
        }
    }
    
    closedir(d);
}
