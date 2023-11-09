#include<stdio.h>
#include<string.h>
int main(){
char prod[100],input[20];
int i,flag=0;
int r;
char first[20],last[20],start[20],end[20],rev[20];
printf("enter the input-");
gets(input);


int len=strlen(input);
if(len%2==1){
    flag=1;
}
int k=len/2;
if(flag==1){
for(i=0;i<len/2;i++,k++){
    start[i]=input[i];
    end[i]=input[k+1];
    }
    start[len/2]='\0';
    end[len/2]='\0';
    //printf("%s %s\n",start,strrev(end));
    r=strcmp(start,strrev(end));
    //printf("the value of r-%d",r);
     if(r!=0){
        printf("Not in this grammar\n");
}
}

if(flag==0){
for(i=0;i<len/2;i++,k++){
    start[i]=input[i];
    end[i]=input[k];

    }
    start[len/2]='\0';
    end[len/2]='\0';

    r=strcmp(start,strrev(end));

    if(r!=0){
        printf("Not in this grammar\n");
}
}

//printf("len-%d %d\n",len/2,flag);
//printf("%s\n",strrev(input));

if(r==0){
    printf("P\n");
            for(int j=0;j<len/2;j++){
                    if(input[j]=='1'){
                            first[j]='1';
                            first[j+1]='\0';
                            last[j]='1';
                            last[j+1]='\0';
                            printf("%sP",first);
                            for(i=(strlen(last)-1);i>=0;i--){
                                printf("%c",last[i]);
                            }
                            printf("\n");


                    }

                    if(input[j]=='0'){
                            first[j]='0';
                            first[j+1]='\0';
                            last[j]='0';
                            last[j+1]='\0';
                            printf("%sP",first);
                            for(i=(strlen(last)-1);i>=0;i--){
                                printf("%c",last[i]);
                            }
                            printf("\n");


                    }

            }
            printf("%s\n",input);}




return 0;
}
