#include<stdio.h>
#include<string.h>
#include<ctype.h>




/* generate a parser for the following grammar
S -> E=
E -> V | VOE
V -> N | SN
N -> U | U.U
U -> D | DU
D -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
S -> + | -
O -> + | - | * | / 
*/

void Start();
void E();
void V();
void N();
void U();
void D();
void S();
void O();


char input[10];
int i, error;

main() {
    
    i = 0;
    error = 0;
    
    printf("Enter an arithmetic expression   :  "); 
    gets(input);
    
    Start();
    
    if (strlen(input) == i && error == 0){
        printf("\nThe string %s is accepted by the defined grammer\n", input);
    }
    else{
        printf("\nThe string %s is rejected as it isn't a part of the defined grammer\n", input);
    }
}


void Start() {
    E();
    if(input[i] == '='){
        i++;
    }
    else{
        error = 1;
    }
}

void E() {
    V();
    if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
        O();
        E();
    }
}


void V() {
    if(input[i] == '+' || input[i] == '-'){
        S();
        N();
    } else {
        N();
    }
}


void N() {
    U();
    if(input[i] == '.'){
        i++;
        U();
    }
}

void U() {
    D();
    if(isdigit(input[i])){
        i++;
        U();
    }
}

void D(){
    if(isdigit(input[i])){
        i++;
    }
    else{
        error = 1;
    }
}

void S(){
    if(input[i] == '+' || input[i] == '-'){
        i++;
    }
    else{
        error = 1;
    }
}


void O() {
    if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
        i++;
    }
    else{
        error = 1;
    }
}
