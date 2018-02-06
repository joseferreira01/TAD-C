/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jose
 *
 * Created on 6 de Fevereiro de 2018, 20:57
 */

#include "LISTA.h"


/*
 * 
 */
int main(int argc, char** argv) {

	node *LISTA = inicia();
	if(!LISTA){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
	inicia(LISTA);
	int opt;
	
	do{
		opt=menu();
		opcao(LISTA,opt);
	}while(opt);

	free(LISTA);
	return 0;
	}
    return (EXIT_SUCCESS);
}

