#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

struct person
{
    int id;
    char fname[20];
    char lname[20];
};

typedef struct date{
    int jour;
    int month;
    int annee;
}date;

typedef struct ouvrage{
    int  cote;
    char titre[30];
    int  nbe_bib;
    int  nbe_empruntes;
}ouvrage[1000];

typedef struct etudiant{
    int  matricule;
    char abonnement; // P = Premium   or   C = classique
    int  penalite;
}e;

typedef struct emprunts_des_ouvrages {
    int m_de_etudiant;
    int c_de_ouvrage_emprunte;
    date d_emprunt;
    date d_retour;
}e_ouvrage;


void Ajouter_un_etudiant(e list[]){
    char f,m;
    int i;
    do{
        system("cls");
    int flag=0;
    printf("\n\n\t\t\t\t Ajout d'un etudiant\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n\tLe matricule d'etudiant  ");
    scanf("%d", &e[size].matricule);
    printf("\t~~~~~~~~~~~~~~~~");
        for(i=0; i=size-1; i++){
            if(e[size].matricule==e[i].matricule){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("\n\n\t preciser le type d'abonnement d'etudiant (p:pour le type premium || c:pour le type classic) ");
            scanf("%s", &e[size].abonnement);
            printf("\n\n\t entrer le nombre des penalites");
            scanf("%d", &e[size].penalite);
            ++size;
                do{
                    printf("\n\n voulez vous l'enregistrer : (y/n) ");
                    scanf("%s", &m);
                    if(m=='y'||m=='Y'){
                            printf("voulez vous un autre etudiant");
                            scanf("%s", &f);


                    }
                    else{
                        printf("\n s'il vous plait entre y ou Y pour enregistrer l'information");

                    }
                    while(m=='n'||m=='N');
                }
                 if(flag!=0){
                    printf("\n l'etudiant existe deja ");
                    getch();
                }
            }while(f=='y'||m=='Y');



            }
        }

void Ajouter_un_ouvrage(ouvrage list[1000]){
    char f,p;
    int  i;
    do{
        system("cls");
    int flag=0;
    printf("\n\n\n\n\n\n\n Ajout d'un ouvrage \n\n\n\n\n\n\n");
    printf("\n\n\n titre: \n\n\n");
    scanf("%s", &ouvrage[size].titre);
            for( i=0; i=size-1; i++){
                if(ouvrage[size].titre==ouvrage[i].titre){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("\n\n la cote ");
                scanf("%l", &ouvrage[size].cote);
                printf("\n\n le nombre que voulez vous l'ajouter ");
                scanf("%c", &ouvrage[size].nbe_bib);
                ++size;
                do{
                    printf("\n\n voulez vous l'enregistrer : (y/n) ");
                    scanf("%s", &m);
                    if(m=='y'||m=='Y'){
                            printf("voulez vous un autre ouvrage");
                            scanf("%s", &f);


                    }
                    else{
                        printf("\n s'il vous plait entre y ou Y pour enregistrer l'information");

                    }
                    while(m=='n'||m=='N');
                }
                 if(flag!=0){
                    printf("\n l'ouvrage existe deja ");
                    getch();
                }
            }while(f=='y'||m=='Y');



    }
}
void consulter la liste de tout les ouvrages (){
    int i;
    printf("\n\n\t\t\t\t\t List des ouvrages \n\t\t\t\t\t~~~~~~~~~~~~~~~~\n\nTitre d'ouvrage\t\t\tCote\t\t\tNombre des ouvrages");
    for(i=0; i<size; i++){
        printf("\n\n %d  %s     \t\t\t%s    \t\t\t%d    \n          \t\t\tStatus: nombre des ouvrages disponible : %d ", ouvrage[i].titre,ouvrage[i].cote,ouvrage[i].nbe_bib,ouvrage[i].nbe_empruntes-ouvrage[i].nbe_empruntes);
        printf("\n");
    }
    getch()
}



int main(){
    int n,m;
    int size=0;

    etudiant list_of_etudiant[10000];

    list_of_etudiant[0].matricule = 1234;
    list_of_etudiant[0].abonnement = 'e';
    list_of_etudiant[0].penalite = 2;



    printf("\n\n                                              bienvenue dans votre programme \n");
    printf("===================================================================================================================================================================================================================\n\n");
    printf("                                             !!comment nous pouvons t'aider!!\n\n");
    printf("01 ==> Ajouter des ouvrages \n");
    printf("02 ==> Consulter la liste de tous les ouvrages \n");
    printf("03 ==> Supprimer un ouvrage \n");
    printf("04 ==> Verifier la disponibilite des exemplaires \n");
    printf("05 ==> Ajouter des etudiants \n");
    printf("06 ==> Consulter un membre \n");
    printf("07 ==> Supprimer un membre \n");
    printf("08 ==> Modifier un membre \n");
    printf("09 ==> Ajouter des emprunts \n");
    printf("10 ==> Consulter un emprunt \n");
    printf("11 ==> Supprimer un emprunt \n");
    printf("12 ==> Modifier un emprunt \n");
    printf("13 ==> Retourner un emprunt \n");
    printf("14 ==> Ajouter une penalite \n");
    printf("15 ==> Supprimer une penalite \n");
    printf("16 ==> Consulter la liste des penalites \n");
    printf("17 ==> Definir la duree des empruntes \n");
    printf("18 ==> Definir le maximum d’ouvrage a emprunter \n");
    printf("19 ==> Pour quitter le programme\n\n");

    scanf("%d", &n);

    while(n==19){

            switch(n){

                    case 1 : ;
                        break;
                    case 2 : ;
                        break;
                    case 3 : ;
                        break;
                    case 4 : ;
                        break;
                    case 5 : ;
                        break;
                    case 6 : ;
                        break;
                    case 7 : ;
                        break;
                    case 8 : ;
                        break;
                    case 9 : ;
                        break;
                    case 10 : ;
                        break;
                    case 11: ;
                        break;
                    case 12 : ;
                        break;
                    case 13 : ;
                        break;
                    case 14 : ;
                        break;
                    case 15 : ;
                        break;
                    case 16 : ;
                        break;
                    case 17 : ;
                        break;
                    case 18 : ;
                        break;
                    case 19 : ;
                        break;


            }
    }



    FILE *outfile;
     
    // open file for writing
    outfile = fopen ("person.docs", "w");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit (1);
    }
 
    struct person input1 = {1, "rohan", "sharma"};
    struct person input2 = {2, "mahendra", "dhoni"};
     
    // write struct to file
    fwrite (&input1, sizeof(struct person), 1, outfile);
    fwrite (&input2, sizeof(struct person), 1, outfile);
    
    if(&fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");

    // close file
    fclose (outfile);
 

    return 0;
}



