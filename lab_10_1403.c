// left most and right most derivative


#include<stdio.h>
int main(){
char input[100],left[100],right[100];
int i,j,k;

char a,b;
printf("enter the string-");
scanf("%s",input);


	for(i=0;;i++){
		if(input[i]=='1'){
		break;}
	}
	
	for(j=0;j<i;j++){
		left[j]=input[j];
	}
	
	left[j]='\0';
	char der1[100];
	k=0;
	for(j=i+1;input[j];j++){
		right[k]=input[j];
		k++;
	}
	right[k]='\0';
	
	
	int l=0;
	
	printf("\n\nleftmost\ns\n");
	printf("A1B\n");
	for(i=0;left[i];i++){
	
		if(left[i]=='0'){
		der1[l]='0';
		der1[l+1]='A';
		der1[l+2]='\0';
		}
		for(j=0;j<l+2;j++){
		printf("%c",der1[j]);
		}
		printf("1B\n");
		l++;
	}
	
	printf("%s1B\n",left);
	
	char der[100];
	k=0;
	for(i=0;right[i];i++){
	printf("%s1",left);
	
	if(right[i]=='0')
	der[k]='0';
	
	
	else if(right[i]=='1')
	der[k]='1';
	
	der[k+1]='B';
	for(int l=0;l<k+2;l++){
		printf("%c",der[l]);
	
		}
		k++;
		printf("\n");
		
	}
	
	
	printf("%s1%s\n\n\n",left,right);
	
	
	printf("rightmost\ns\n");
	printf("A1B\n");
	
	char der2[100];
	k=0;
	for(i=0;right[i];i++){
	printf("A1");
	if(right[i]=='0')
	der2[k]='0';
	
	
	else if(right[i]=='1')
	der2[k]='1';
	der2[k+1]='B';
		printf("%s\n",der2);
		k++;
		
	}
	printf("A1%s\n",right);
	for(i=0;left[i];i++){
	if(i>0)
	printf("0");
		if(left[i]=='0')
		printf("0");
		printf("A");
		
		printf("1%s\n",right);
	}
	
	
	
	printf("%s1%s\n",left,right);
	
	
	
	
return 0;
}
