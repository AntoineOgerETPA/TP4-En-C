#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


struct Choix1{
  char name[50];
  int poid;
};
typedef struct Choix1 choix1;

  void c1(){
    choix1 memoire = {"Memoire",8};
    choix1 antivirus = {"Anti-Virus",64};
    choix1 processeur = {"Processeur",156};

//Mémoire
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
    printf("|1|  | %s          %d G |\n",memoire.name,memoire.poid);
    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n");
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
            printf("     |   %d G   |\n",video002.poid);
            printf("     #~~~~~~~~~~#\n\n");
        //Img009
            printf("     #~~~~~~~~~~#\n");
            printf("     |          |  %s\n",img009.description );
            printf(" |3| |  %s  |\n",img009.name);
            printf("     |          |\n");
            printf("     |   %d G    |\n",img009.poid);
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
      
