#include <stdio.h>
 
int main() {
    int inicio, termino;
    scanf("%d %d",&inicio,&termino);
    if(inicio==termino){
        printf("O JOGO DUROU %d HORA(S)\n",24-inicio+termino);
    }else if(inicio>termino){
        printf("O JOGO DUROU %d HORA(S)\n",24-inicio+termino);
    }else{
        printf("O JOGO DUROU %d HORA(S)\n",24-inicio+termino);
    }
 
    return 0;
}
