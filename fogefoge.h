void liberamapa();
void lemapa();
void alocamapa();
void imprimemapa();
void move(char direcao);
int acabou();

struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};
