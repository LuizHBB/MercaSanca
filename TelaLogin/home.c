#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.c>

//variaveis globais
FILE *file;
 struct funcionario{
    int id;
    //char usuario[100];
    char senha[100];
    char nome[100];
    char email[100];
}func;

int main(){
    if((file = fopen("funcionario.txt", "w"))==NULL){
        printf("\n\nErro ao abrir o arquivo!");
    }
    printf("\nC A D R A S T O\n ");
    printf("ID: ");
    scanf("%d", &func.id);
    printf("Nome: ");
    gets(func.nome);
    printf("Email: ");
    gets(func.email);
    printf("Senha: ");
    gets(func.senha);
}