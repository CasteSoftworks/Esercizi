#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

# define MAXR 7
# define MAXC 81

void matriceSovra();

void allocazioneDinamica();
char *mem_str(char str[]);
void elim_str(char **str);

int main(){

    int i;
    while(i!=0){
        printf("\nVuoi fare la sovradimensionta (1), la allocazione dinamica (2) o uscire (0)?\n");
        scanf("%d",&i);
        if(i==1)
            matriceSovra();
        if(i==2)
            allocazioneDinamica();
        if(i==0)
            return 0;
    }

}

void matriceSovra(){

    char pagina[MAXR][MAXC];
    int r=0, i=0;
    char riga[MAXC];

    printf("\nSovradimensionata, inserisci quante parole tu voglia, premi invio dopo una parola per uscire.\n");

    fflush(stdin);
    gets(riga);
    while((strcmp(riga,"")!=0)&& (r<MAXR)){
        strcpy(pagina[r],riga);
        r++;
        gets(riga);
    }

    while(i!=r){
        printf("\n%s",pagina[i++]);
    }
}

void allocazioneDinamica(){

    char *pagina[MAXC];
    char riga[MAXC];
    int r=0, i=0;

    printf("\nAllocata dinamicamente, inserisci quante parole tu voglia, premi invio dopo una parola per uscire.\n");

    fflush(stdin);
    gets(riga);
    while((strcmp(riga,"")!=0)&& (r<MAXR)){
        pagina[r]=mem_str(riga);
        r++;
        gets(riga);
    }

    while(i!=r){
        elim_str(&pagina[i]);
        i++;
    }

}

char *mem_str(char str[]){

    char *punt;

    punt = (char*)malloc((strlen(str)+1)*sizeof(char));
    if(punt==NULL){
        printf("\n\tERRORE ALLOCAZIONE");
    }
    else{
        strcpy(punt,str);
        printf("\t\t\"%s\" locale --> \"%s\" heap\n",str,punt);
    }
    return punt;

}

void elim_str(char **str){

    printf("\n%s",*str);

    free(*str);
    printf("\t\tliberazione della Heap --> %s non e' piu' come prima %s %s",*str,*str,*str);
    *str=NULL;

}
