#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void testa()
{
	FILE* arq = fopen("dados.csv", "r");
	if(!arq)
	{
		FILE* arqn = fopen("dados.csv", "w");
		fprintf(arqn, "Codigo, nome, autor, lido, genero");
		fclose(arqn);
	}
	fclose(arq);
}

int registrar(const char *nome, const char *autor, int lido, int genero)
{
	FILE* arq = fopen("dados.csv", "a+");
	if(!arq)
	{
		fclose(arq);
		return 0;
	}
	int codigo = buscarNumeroDeLivros();
	fprintf(arq, "%d, %s, %s, %d, %d",codigo, nome, autor, lido, genero);
	fclose(arq);
	return 1;
}

void modificar()
{
	printf("\n\n||====================================||");
	printf("\n  O que deseja modificar?");
	printf("\n  1 - Nome\n  2 - Autor\n  3 - Lido?\n  4 - Genero");
	printf("\n||====================================||");
	printf("\n: ");
	scanf("%d", &resp);
	switch(resp)
	{
		case 1:
			printf("\nCódigo do livro: ");
			int codigoNovo;
			scanf("%d", &codigoNovo);
			char novo_valor[100];
			printf("\nNovo valor: ");
			scanf("%s", &novo_valor);
			modificarFile(codigoNovo, resp, 20, novo_valor);
			break;
		case 2:
			printf("\nCódigo do livro: ");
			int codigoNovo;
			scanf("%d", &codigoNovo);
			char novo_valor[100];
			printf("\nNovo valor: ");
			scanf("%s", &novo_valor);
			modificarFile(codigoNovo, resp, 20, novo_valor);
			break;
		case 3:
			printf("\nCódigo do livro: ");
			int codigoNovo;
			scanf("%d", &codigoNovo);
			printf("Leu? (0 para não, 1 para sim): ")
			int novoValor;
			scanf("%d", &novoValor);
			modificarFile(codigoNovo, resp, novoValor, "");
			break;
		case 4:
			printf("\n||====================================||");
			printf("\n 1 - Ação\n 2 - Comédia\n 3 - Drama\n 4 - Ficção\n 5 - Filosofia\n 6 - História\n 7 - Religião\n 8 - Romance\n 9 - Técnico\n 10 - Outros\n");
			printf("\n||====================================||\n: ");
			int novoValor;
			scanf("%d", &novoValor);
			modificarFile(codigoNovo, resp, novoValor, "");
			break;
		default:
			break;
	}

}

char* buscar(int codigo=0)
{
	int resp = codigo;
	if(resp == 0)
	{
		printf("\n\n||====================================||");
		printf("\n  O que deseja buscar?");
		printf("\n  0 - Codigo\n  1 - Nome\n  2 - Autor\n  3 - Lido?\n  4 - Genero");
		printf("\n||====================================||");
		printf("\n: ");
		scanf("%d", &resp);
		FILE* arq = fopen("dados.csv", 'r');
		char buffer[1000];
		int linha = 0;
		char retorno[4][100]
		while(fgets(buffer,1000, arq))
		{
			if(linha = 0)
			{
				linha++;
				continue;
			}
			char *conteudo = strtok(buffer, ", ");
			if(conteudo[resp] == (char)resp)
			{
				printf("\n\n||====================================||");
				printf("\n  Codigo: %s\n  Nome: %s\n  Autor: %s\n  Lido?: ",conteudo[0], conteudo[1], conteudo[2]);
				if((int)conteudo[3] == 0)
				{
					printf("Não\n");
				}
				if((int)conteudo[3] == 1)
				{
					printf("Sim\n");
				}else
				{
					printf("?\n");
				}
				printf("  Gênero: ");

				switch((int)conteudo[4])
				{
					case 1:
						printf("Ação\n");
						break;
					case 2:
						printf("Comédia\n");
						break;
					case 3:
						printf("Drama\n");
						break;
					case 4:
						printf("Ficção\n");
						break;
					case 5:
						printf("Filosofia\n");
						break;
					case 6:
						printf("História\n");
						break;
					case 7:
						printf("Religião\n");
						break;
					case 8:
						printf("Romance\n");
						break;
					case 9:
						printf("Técnico\n");
						break;
					default:
						printf("Outros\n");
						break;
				}
				printf("||====================================||\n\n")
				for(int c = 0; c <= 4; c++)
				{
					retorno[c] = conteudo[c];
				}
				break;
			}
		}
		fclose(arq);
		return retorno;
	}
	FILE* arq = fopen("dados.csv", 'r');
	char buffer[1000];
	int linha = 0;
	char retorno[4][100]
	while(fgets(buffer,1000, arq))
	{
		if(linha = 0){
			linha++;
			continue;
		}
		char *conteudo = strtok(buffer, ", ");
		if(conteudo[0] == (char)resp)
		{
			printf("\n\n||====================================||");
			printf("\n  Codigo: %s\n  Nome: %s\n  Autor: %s\n  Lido?: ",conteudo[0], conteudo[1], conteudo[2]);
			if((int)conteudo[3] == 0)
			{
				printf("Não\n");
			}
			if((int)conteudo[3] == 1)
			{
				printf("Sim\n");
			}else
			{
				printf("?\n");
			}
			printf("  Gênero: ");

			switch((int)conteudo[4])
			{
				case 1:
					printf("Ação\n");
					break;
				case 2:
					printf("Comédia\n");
					break;
				case 3:
					printf("Drama\n");
					break;
				case 4:
					printf("Ficção\n");
					break;
				case 5:
					printf("Filosofia\n");
					break;
				case 6:
					printf("História\n");
					break;
				case 7:
					printf("Religião\n");
					break;
				case 8:
					printf("Romance\n");
					break;
				case 9:
					printf("Técnico\n");
					break;
				default:
					printf("Outros\n");
					break;
			}
			printf("||====================================||\n\n")
			for(int c = 0; c <= 4; c++)
			{
				retorno[c] = conteudo[c];
			}
			break;
		}
	}
	fclose(arq);
	return retorno;
}

int sugerir(){

}

int buscarNumeroDeLivros()
{
	FILE* arq = fopen("dados.csv", 'r');
	char buffer[1000];
	int linha = 0;
	while(fgets(buffer,1000, arq))
	{
		linha++;
	}
	fclose(arq);
	return linha;

}


void modificarFile(int codigo, int indice, int valorInt=20, char* valor)
{
	FILE* arq = fopen("dados.csv", 'r');
	char buffer[1000];
	int linha = 0;
	char retorno[100][4]
	while(fgets(buffer,1000, arq)){
		if(linha = 0){
			linha++;
			continue;
		}
		char *conteudo = strtok(buffer, ", ");
		if(conteudo[0] == (char)codigo)
		{
			if( valorInt == 20)
			{
				strcpy(conteudo[indice], valor);
			}
			if(valor == "")
			{
				conteudo[indice] = (char)valorInt;
			}
		}
			
	}
}