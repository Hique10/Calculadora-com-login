#include <stdio.h>
#include <string.h>

int main(){
    int login = 0, calculos;
    char user[15];
    char user1[15]= "Hique";
    char pwd[10];
    char pwd1[10]= "123";
    float x, y;

    while (login == 0){
        printf("Digite seu usuario:");
        scanf("%s", user);
        printf("Digite sua senha:");
        scanf("%s", &pwd);
        printf("\n");

        if (strcmp (user, user1) == 0 && strcmp (pwd, pwd1) == 0){
            printf("Logado\n\n");
            login = 1;
        }
        else{
            printf("Tente novamente\n");
            printf("Usuario ou senha incorretos\n");
            login = 0;
        }
    if (login == 1){
        printf("Calculadora\n");

        printf("Digite (1) Para Soma\n");
        printf("Digite (2) Para Subtracao\n");
        printf("Digite (3) Para Multiplicacao\n");
        printf("Digite (4) Para Divisao\n");
        scanf("%d", &calculos);
        printf("Digite o primeiro Numero:\n");
        scanf("%f", &x);
        printf("Digite o segundo Numero:\n");
        scanf("%f", &y);
        
        switch (calculos){
            
            case 1:
                printf("A Soma dos valores e: %.2f\n", x+y);
                break;
            case 2:
                printf("A Subtracao dos valores e: %.2f\n", x-y);
                break;
            case 3:
                printf("A Multiplicacao dos valores e: %.2f\n", x*y);
                break;
            case 4:
                printf("A Divisao dos valores e: %.2f\n", x/y);
                break;   
        }

    }
    
    }

    return 0;
}
