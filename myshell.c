#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>


int main(int argc,char *argv)
{
int i;
char *myvar;
	char  *str,cmd[50],*tok[10],saveptr[50];


	myvar=(char *)&saveptr;
        system("clear");
	
		while(1)
          	{
                 printf("\nMYSHELL::");
		 strcpy(cmd,"\0");
		 gets(cmd);
		
                for (i = 0, str = cmd; ;i++, str = NULL) 
		{
			tok[i]=NULL;
      			tok[i] = strtok_r(str, " ",&myvar);
              		if (tok[i] == NULL)
                  	break;
               	}
                printf("%s\n%s\n%s", tok[0], tok[1], tok[2]);

             if((strcmp(cmd,"exit")==0) || (strcmp(cmd,"q")==0))
		{
   			printf("exit........\n");
   			exit(0);
		}
             else
             execvp(tok[0], tok);

		
}
}
