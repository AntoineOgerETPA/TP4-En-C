#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}

struct Choix1{
  char name[50];
  int poid;
};
typedef struct Choix1 choix1;

  void c1(){
    choix1 memoire = {"Memoire",8};
    choix1 antivirus = {"Anti-Virus",64};
    choix1 cartemere = {"Carte Mere",267};
    choix1 processeur = {"Processeur",156};

//Mémoire
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
    printf("|1|  | %s          %d G |\n",memoire.name,memoire.poid);
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n");
//Anti-Virus
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
    printf("|2|  | %s      %d G |\n",antivirus.name,antivirus.poid);
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n");
//Carte Mère
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
    printf("|3|  | %s     %d G |\n",cartemere.name,cartemere.poid);
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n");
//Processeur
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
    printf("|4|  | %s     %d G |\n",processeur.name,processeur.poid);
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n\n");
  }
struct Memoire1{
  char name[50];
  char description[200];
  int poid;
};
typedef struct Memoire1 memoire1;

  void m1(){
    memoire1 video001 = {"Video001","Mise en route de mon pogramme de vue.",2};
    memoire1 video002 = {"Video002","Mon createur n'a pas reussi a me faire bouger les jambes, il fait un geste brusque qui fait tomber tout ce qu'il y a sur la table, Pourquoi ?",62};
    memoire1 img009 = {"Img009","Un petit chiens",2};
    memoire1 img015 = {"Img015","La porte de sortie vers le monde",1};

    //Video001
        printf("     #~~~~~~~~~~#\n");
        printf("     |          |  %s\n",video001.description );
        printf(" |1| | %s |\n",video001.name);
        printf("     |          |\n");
        printf("     |   %d G    |\n",video001.poid);
        printf("     #~~~~~~~~~~#\n\n");
    //Video002
        printf("     #~~~~~~~~~~#\n");
        printf("     |          |  %s\n",video002.description );
        printf(" |2| | %s |\n",video002.name);
        printf("     |          |\n");
        printf("     |   %d G    |\n",video002.poid);
        printf("     #~~~~~~~~~~#\n\n");
    //Img009
        printf("     #~~~~~~~~~~#\n");
        printf("     |          |  %s\n",img009.description );
        printf(" |3| |  %s  |\n",img009.name);
        printf("     |          |\n");
        printf("     |   %d G   |\n",img009.poid);
        printf("     #~~~~~~~~~~#\n\n");
    //Img015
        printf("     #~~~~~~~~~~#\n");
        printf("     |          |  %s\n",img015.description );
        printf(" |4| |  %s  |\n",img015.name);
        printf("     |          |\n");
        printf("     |   %d G    |\n",img015.poid);
        printf("     #~~~~~~~~~~#\n\n");
  }

int main() {

  int choixJoueur = 0;
  int choixJoueurM = 0;
  int fichier = 4;
  //combat Anti-Virus
  int attaqueM = 10;
  int ptdevieM = 100;
  int attaqueJ = 20;
  int ptdevieJ = 100;
  int i = 100;
  int choixj = 0;
  int degatsM = attaqueM;
  int degatsJ = attaqueJ;
  int a = 1;
  int b = 3;
  int choixM;

  srand(time(NULL));


  printf("\n\n\n\n\n\n\n\n               ********************************************\n");
  printf("               |                                          |\n");
  printf("               |           CONSOLE  X-BOW  B457           |\n");
  printf("               |                                          |\n");
  printf("               ********************************************\n\n\n\n\n");
  printf("Bienvenue dans la console de X-BOW\nVous etes un chercheur et vous travailler sur un systeme d'intelligence artificielle\nVotre but ici est de reparer les anomalies de ce model\nPour cela il vous faudrat parcourir les differents composants de X-BOW\nBon courage !\nMettez la console en pleine ecran :)");
  printf("\n\n\n\nAcces au module de reparation . . .\n\n\n\n");
  c1();
  printf("Ouvrir le module : ");
  scanf("%d", &choixJoueur);
  if (choixJoueur == 1){
    printf("\n\nChargement du module Memoire . . .\n\n");
    printf("Bienvenue,\nIci tu vas devoir trouver les morceaux de memoire qui genes X-BOW a se comporter comme un robot\nPour cela regarde la description de chaque image ou video et supprime les bonnes.\n");
    m1();
    while (fichier != 2) {
      printf("Quelles souvenir voulez-vous supprimer : ");
      scanf("%d", &choixJoueurM);
      printf("\nSuppression du fichier . . .\n\n");
      if (choixJoueurM == 2) {
        printf("Tu a supprimer un bon fichier bien jouer a toi !\n");
        fichier = fichier - 1;
      }
      if (choixJoueurM == 1) {
        printf("Tu n'a supprimer le bon fichier, fait attention tu pourrai l'endomager gravement !\n");
      }
      if (choixJoueurM == 3) {
        printf("Tu n'a supprimer le bon fichier, fait attention tu pourrai l'endomager gravement !\n");
      }
      if (choixJoueurM == 4) {
        printf("Tu a supprimer un bon fichier bien jouer a toi !\n");
        fichier = fichier - 1;
      }
    }
    printf("\nBien jouer a toi une parti de faite deja\nNe reste plus qu'a reparer le reste");
    printf("\n\n\n\nAcces au module de reparation . . .\n\n\n\n");
    c1();
    printf("Ouvrir le module : ");
    scanf("%d", &choixJoueur);
  }
  if (choixJoueur == 2){
    printf("\n\nChargement du module Anti-Virus . . .\n\n");
    printf("Ici le but est simple tu doit aider l'anti-virus a combattre contre des virus qui endommage X-BOW\n\n");
    for(i=100; i>=0; i--){
      choixM = rand_a_b(1, 4);
        if ( ptdevieJ <= 0){
            printf("Les virus ont gagner . . . ");
            break;
        }
        printf("|1| Attaque        |2| Défence ;\n");
        scanf("%d", &choixj);
        if( choixj == 1){
                switch (choixM) {
                  case 1 :
                  //Attaque du Joueur :
                      printf("Tu attaque le virus %d \n", attaqueJ);
                      printf("Le Virus a perdu %d PV \n", degatsJ);
                      printf("Vie du Virus %d \n", ptdevieM -= degatsJ);
                      printf("Ta vie = %d \n", ptdevieJ);
                  //Attaque du Virus :
                      printf("Attaque du Virus %d \n", attaqueM);
                      printf("Tu a perdu %d PV \n", degatsM);
                      printf("Ta vie = %d \n", ptdevieJ -= degatsM);
                      break;
                  case 2 :
                    //Defence du Virus :
                        printf("Le Virus se protege \n");
                    //Attaque du Joueur :
                        printf("Tu Attaque %d \n", attaqueJ/4);
                        printf("Le Virus a perdu %d PV \n", degatsJ/4);
                        printf("Vie du Virus %d \n", ptdevieM -= degatsJ/4);
                        printf("Ta vie = %d \n", ptdevieJ);
                        break;
                    }
                }
                if( choixj == 2){
        					switch (choixM) {
        						case 1 :
                    //Défence du Joueur :
                        printf("Tu te protege \n");
                    //Attaque du Virus :
                        printf("Attaque du Virus %d \n", attaqueM/4);
                        printf("Tu a perdu %d PV \n", degatsM/4);
                        printf("Ta vie = %d \n", ptdevieJ -= degatsM/4);
                    		break;
        						case 2 :
                    //Défence du Joueur :
                        printf("Le joueur se protege \n");
                    //Defence du Virus :
                        printf("Le Virus se protege \n");
        								break;
        					}
                }
                if ( ptdevieM <= 0){
                    printf("Tu a reussi a combattre contre le virus,\nBien jouer a toi");
                    printf("\n\n\n\nAcces au module de reparation . . .\n\n\n\n");
                    c1();
                    printf("Ouvrir le module : ");
                    scanf("%d", &choixJoueur);
                }
          }

  }
  if (choixJoueur == 3){
    printf("\n\nChargement du module Carte Mere . . .\n\n");

  }
  if (choixJoueur == 4){
    printf("\n\nChargement du module Processeur . . .\n\n");

  }
}
