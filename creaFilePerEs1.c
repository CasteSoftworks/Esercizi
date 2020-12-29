#include <stdio.h>
#include<stdlib.h>
struct Tfornitore {int codice; char nome[20];};
struct Tindice {int codice; int pos;};
struct Tfornitore fornitore;
struct Tindice indice;
int main(){
    FILE *PtrIndice, *PtrFornitore;
    PtrFornitore = fopen("fornitore.dat", "wb");
    if (PtrIndice == NULL)
        printf("errore in aperura di indice.dat\n");
    else{
        while(fornitore.codice!=99){
            printf("codice: ");
            scanf("%d",&fornitore.codice);
            indice.codice=fornitore.codice;
            printf("nome: ");
            scanf("%s",&fornitore.nome);
            fwrite(&fornitore,sizeof(struct Tfornitore),1,PtrFornitore);
            //fflush(st)
        }
    //fclose(PtrIndice);
    fclose (PtrFornitore);
    }
}
