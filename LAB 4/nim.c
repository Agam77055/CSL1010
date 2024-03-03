#include<stdio.h>

int win(int k){
    if(k<2){
        return 0;
        
    }
    if(k == 2|| k ==3){
        return 1;

    }
    return !(win(k-2) && win(k-3));
}
int main(){
    int n;
    scanf("%d", &n);
    if (win(n)){
        printf("Sumit\n");
    }
    else{printf("Tanmay\n");}
    

    return 0;
}
