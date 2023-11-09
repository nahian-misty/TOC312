#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main(){
int line=1,h;
    FILE *fp;
    char ch;
    char input[1000];
   
    fp = fopen("regular.txt", "r");
 
    if (NULL == fp) {
        printf("this file can't be opened \n");
    }
 
 else{
	    printf("the content of this file are \n");
 
     
    for(int i=0;ch!=EOF;i++){
    ch = fgetc(fp);
    	input[i]=ch;
    	h=i;
    }
    input[h]='\0';//if i don't add null at the end,it prints some garbage value after reading the file from the array
    
   //printf("%s",input);
//printing the array which stored the file
      
    for(int i=0;input[i];i++){
    
      if(input[i]=='\n')
      line++;
      
      if(input[i]=='/'){
      		if(input[i+1]=='/'){
      		printf("line no-%d:",line);
      			for(int j=i+2;input[j]!='\n';j++){
      				printf("%c",input[j]);
      			}
      		printf("\n");
      		}
      	
      		else if(input[i+1]=='*'){
      		printf("line no-%d:",line);
      			for(int j=i+2;input[j]!='*',input[j+1]!='/';j++){
      		   		printf("%c",input[j]);
      			}
      		printf("\n");
      		}
      	
      }
      
    }
 
      fclose(fp);
      
 }     
    
    return 0;
}
