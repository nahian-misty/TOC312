/*
2 1
3 1
3 2
*/


#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
int i,j,k,l;
int numState,numAlp;
int states[20],alpha[20];
printf("enter the number of states-");
scanf("%d",&numState);

printf("enter the states-");
for(i=0;i<numState;i++){
    scanf("%d",&states[i]);
}

printf("enter the number of alphabets-");
scanf("%d",&numAlp);

printf("enter the alphabets-");
for(i=0;i<numAlp;i++){
    scanf("%d",&alpha[i]);
}

int tran[numState][numAlp];

for(i=0;i<numState;i++){

    for(j=0;j<numAlp;j++){
        printf("from q%d state with the alphabet %d-",states[i],alpha[j]);
            scanf("%d",&tran[i][j]);
    }
}


for(i=0;i<numState;i++){

    for(j=0;j<numAlp;j++){
        //printf("transition table-\n%d ",tran[i][j]);
            //scanf("%d",&tran[i][j]);
    }
    printf("\n");
}


string r[3][numState+1][numState+1];
    for(i=0;i<numState;i++){

        for(j=i;j<numState;j++){

            for(l=0;l<numAlp;l++){
                if(tran[i][l]==j+1){

                    r[0][i+1][j+1]+=to_string(l);
                    if(i==j)
                        r[0][i+1][j+1]+="+e";
                        break;

                }
            }
            if(l==numAlp){
                r[0][i+1][j+1]+="N";
            }
        }
    }


    for(k=1;k<3;k++){

        for(i=1;i<numState+1;i++){

            for(j=i;j<numState+1;j++){

                r[k][i][j]=r[k-1][i][j]+"+"+r[k-1][i][k]+"("+r[k-1][k][k]+")*"+r[k-1][k][j];

            }
        }
    }

    for(k=0;k<3;k++){

        for(i=1;i<numState+1;i++){

            for(j=i;j<numState+1;j++){
                //printf("R(%d)%d%d--%s",k,i,j,r[k][i][j]);
                cout<<"R"<<"("<<k<<")"<<i<<j<<": "<<r[k][i][j]<<endl;

            }
        }
    }


return 0;
}
