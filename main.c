#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main(){
	int resp;
	testa();
	while(resp != 4)
	{
		printf("\n O que você deseja?");
		printf("\n\n||====================================||");
		printf("\n 0 - Mostrar todos\n 1 - Buscar\n 2 - Registrar\n 3 - Modificar\n 4 - Sair\n");
		printf("\n\n||====================================||\n : ");
		scanf("%d", &resp);
		switch(resp){
			case 0:        
				mostrarTodos();
				break;
			case 1:
				buscar();
				break;
			case 2:  
				printf("\nDigite o nome: ");
				char *nome;
				fgets(nome, 100, stdin);
				printf("\nDigite o autor: "); 
				char *autor; 
				fgets(autor, 100, stdin);
				printf("Leu? (0 para não, 1 para sim): ");
				int leu;
				scanf("%d", &leu);
				printf("\nGenero\n||====================================||");
				printf("\n 1 - Ação\n 2 - Comédia\n 3 - Drama\n 4 - Ficção\n 5 - Filosofia\n 6 - História\n 7 - Religião\n 8 - Romance\n 9 - Técnico\n 10 - Outros\n");
				printf("\n||====================================||\n : ");
				int genero;
				scanf("%d", &genero);
				registrar(nome, autor, leu, genero);
				break;
			case 3:
				modificar();
				break;
			case 4:
				break;
			default:
				printf("\nValor inválido");
				break;

		}
	}
	printf("\n\nAté mais!\n\n");
	return 0;
}