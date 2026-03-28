#ifndef buscar_h
#define buscar_h

// função que faz a modelagem
typedef struct{
    int id;
    char codigo_voo[15];
    float x,y;
    float altitude;
    float velocidade;
    int status;

} Aeronave;

int findAeronave(Aeronave lista[] , int tamanho,char callsing []); // função em que procura a aeronave, o tamanho e o código dessa aeronave
#endif

