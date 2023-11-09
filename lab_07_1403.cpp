/*
B A
A C
D B
D A
D F
G E
F G
G D
*/

#include <iostream>
#define MAX_STATE 100
using namespace std;
int n_state=8,n_alpha=2;
int equivCount=0;

int main(){

    char states[n_state]={'A','B','C','D','E','F','G','H'};
    char alpha[n_alpha]={'0','1'};
    char transition[n_state][n_alpha];
    char table[n_state][n_state];
    char finalstate[n_state]={'D'};
    char equivalentState[n_state][n_alpha];
    int statein1,statein2;

printf("Enter the transition table:\n");
    for(int i=0;i<n_state;i++){
        printf("From %c to ->\n",states[i]);
        for(int j=0;j<n_alpha;j++){
            printf("If %c is encountered, move to-",alpha[j]);
            scanf("%c",&transition[i][j]);
            getchar();
        }
    }

    for(int i=0;i<n_state;i++){
        for(int j=0;j<n_alpha;j++){
            printf("%c ",transition[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<n_state;i++){
        for(int j=0;j<i;j++){
            table[i][j]='0';
        }
    }

    //giving X in the end state's row and column
    for (int i=0;i<n_state;i++) {
        for (int j=0;j<i;j++) {
            if (states[i] == finalstate[0] || states[j] == finalstate[0]) {
                table[i][j] = 'X';
            }
        }
    }


    for(int p=0;p<n_state;p++){
        for(int i=0;i<n_state;i++){
            for(int j=0;j<n_state;j++){
                if(i>j){
                    for(int k=0;k<n_alpha;k++){
                        for(int m=0;m<n_state;m++){
                            if(states[m]==transition[i][k]) statein1=m;
                            if(states[m]==transition[j][k]) statein2=m;
                        }

                        if(table[statein1][statein2]=='X'||table[statein2][statein1]=='X'){
                            table[i][j]='X';
                        }

                    }
                }
            }
        }
    }
//replacing the 0 with =
    for (int i=0;i<n_state;i++){
        for (int j=0;j<n_state;j++){
            if(table[i][j]=='0'){
                table[i][j]='=';
            }
        }
    }


    //printing the table
    for(int i=0;i<n_state;i++){
        for(int j=0;j<i;j++){
            printf("%c ",table[i][j]);
        }
        printf("\n");
    }


    return 0;
}

