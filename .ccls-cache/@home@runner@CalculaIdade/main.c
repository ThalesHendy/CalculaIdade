#include <stdio.h>

int main(void) {
  
  int idade;
  int nascimento;
  int anoAtual;
  printf("Entre com o ano de nascimento: ");
  scanf("\n %d",&nascimento);
  printf("Ano atual: ");
  scanf("\n %d",&anoAtual);
  idade = anoAtual - nascimento;
  if (idade >= 0 && idade < 16)
      printf("Idade: %d anos de idade, é uma criança", idade);
        else if (idade >=16 && idade <21)
          printf("Idade: %d anos de idade, é um adolescente", idade);
            else if (idade >=21 && idade <50)
              printf("Idade: %d anos de idade, é um adulto", idade);
                else
                  printf( "Idade: %d anos de idade, é um idoso", idade);
  
  return 0;
}