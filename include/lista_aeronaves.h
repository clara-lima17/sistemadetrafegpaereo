#ifndef LISTA_AERONAVES_H
#define LISTA_AERONAVES_H

#include "aeronave.h"

#define MAX_AERONAVES 100

// Estrutura que representa a lista de aeronaves
typedef struct {
    Aeronave aeronaves[MAX_AERONAVES];
    int contador;
} ListaAeronaves;

// Inicializa a lista (deve ser chamada antes de qualquer outra função)
void inicializarLista(ListaAeronaves *lista);

// Adiciona uma aeronave à lista via terminal (status padrão: aguardando)
int addAeronave(ListaAeronaves *lista);

// Altera o status de uma aeronave pelo ID
// status: 0 = voando, 1 = pousando, 2 = aguardando
int alterarStatusAeronave(ListaAeronaves *lista, int id, int novoStatus);
int findAeronave(Aeronave lista[] , int tamanho,char callsing []); // função em que procura a aeronave, o tamanho e o código dessa aeronave

#endif 
