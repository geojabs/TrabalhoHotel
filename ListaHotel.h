struct Hospedes
{
    char nome[70];
    long int cpf;
};

struct Quartos
{
    struct Hospedes hospede; //Aqui armazena o hospede respons�vel pela hospedagem...

    int numero;
    int andar;
    int qtde_pessoas;

    float valorQuarto;

    char tipoQuarto[20];    //Ex.: Suite, simples
    char statusQuarto[40]; //Ex.: Livre, ocupado
    char detalhes[140];   //Ex.: Possui 3 camas, TV a Cabo etc..
    char data_entrada[10];
    char data_saida[10];
};

struct ListaHotel
{
    //Deyvid, aqui � com voc�...

    struct Quartos quarto; //Aqui as informa��es de cada quarto.
    struct Hotel *prox;   //Ponteiro respons�vel por aponta o pr�ximo elemento da lista.
};
