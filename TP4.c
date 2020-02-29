#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
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
  int victoire = 2;

  srand(time(NULL));

  //PROCESSEUR
  int choixP = 0;
  int cable = 5;
  int inventaire = 0;
  int choixINV = 0;
  int choixFIN = 0;


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
		//Processeur
			printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
			printf("|2|  | %s     %d G |\n",processeur.name,processeur.poid);
			printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n\n");
	//Anti-Virus
	    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n");
	    printf("|3|  | %s      %d G |\n",antivirus.name,antivirus.poid);
	    printf("     #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n");

			printf("Ouvrir le module : ");
			scanf("%d", &choixJoueur);
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


  printf("\n\n\n\n\n\n\n\n               ********************************************\n");
  printf("               |                                          |\n");
  printf("               |           CONSOLE  X-BOW  B457           |\n");
  printf("               |                                          |\n");
  printf("               ********************************************\n\n\n\n\n");
  printf("Bienvenue dans la console de X-BOW\nVous etes un chercheur et vous travailler sur un systeme d'intelligence artificielle\nVotre but ici est de reparer les anomalies de ce model\nPour cela il vous faudrat parcourir les differents composants de X-BOW\nBon courage !\n\nPour un meilleur fonctionnement du jeu faites les reparations dans l'ordre( soit 1, 2, 3)\n\nMettez la console en pleine ecran :)");
  printf("\n\n\n\nAcces au module de reparation . . .\n\n\n\n");
  c1();
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
  }

  if (choixJoueur == 2){
    printf("\n\nChargement du module Processeur . . .\n\n");
    printf("Bienvenue dans le module du processeur,\nIci tu vas devoir changer le processeur entier mais avant cela il te faut le debrancher,\nTon but est simple débranche les 5 cables dans le bon ordres et change le processeur.\nBon courage la vie de X-BOW est en jeu !\n\n");
    printf("(Ah une derniere chose, j'espere que tu connais l'ordres des lettres dans l'aphabet cela te sera surment utile)\n\n\n\n\n");


    printf("      CABLE NOIR  |1|       \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~                                   CABLE ROUGE   |2|   \n");
    printf("                         |                            ~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                         |                           |\n");
    printf("                         |                           |\n");
    printf("                         |                           |\n");
    printf("                         |                           |\n");
    printf("                         |           ________________|______________        \n");
    printf("                         |           |                             |        \n");
    printf("                         |           |                             |        \n");
    printf("                         |__________ |                             |        \n");
    printf("                                     |         PROCESSEUR          |        \n");
    printf("                                     |                             |_________________        \n");
    printf("                              _______|                             |                 |\n");
    printf("                             |       |_____________________________|                 |\n");
    printf("                           C |                      |                                |\n");
    printf("                           A |                      | C                              |\n");
    printf("                           B |                 |4|  | A                              |~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("                           L | |3|                  | B                                    CABLE BLEU  |5|   \n");
    printf("                           E |                   B  | L\n");
    printf("                             | V                 L  | E\n");
    printf("                             | E                 A  |\n");
    printf("                             | R                 N  |\n");
    printf("                             | T                 C  |\n\n\n");
    while(cable != 4){
    printf("Quelle cable souhaite tu debrancher ? \n\n");
    printf("Le cable |");
    scanf("%d|\n", &choixP);
    if (choixP == 4) {
      printf("Et de 1 !\n");
      cable = cable - 1;
    }
    else {
        printf("Fait attention ! c'est pas le bon heureusement que je t'ai prevenu avant\n");
    }
  }
  while(cable != 3){
  printf("Quelle cable souhaite tu debrancher ? \n\n");
  printf("Le cable |");
  scanf("%d|\n", &choixP);
  if (choixP == 5) {
    printf("Et de 2 !\n");
    cable = cable - 1;
  }
  else {
      printf("Fait attention ! c'est pas le bon heureusement que je t'ai prevenu avant\n");
  }
}
while(cable != 2){
printf("Quelle cable souhaite tu debrancher ? \n\n");
printf("Le cable |");
scanf("%d|\n", &choixP);
if (choixP == 1) {
  printf("Et de 3 !\n");
  cable = cable - 1;
}
else {
    printf("Fait attention ! c'est pas le bon heureusement que je t'ai prevenu avant\n");
}
}
while(cable != 1){
printf("Quelle cable souhaite tu debrancher ? \n\n");
printf("Le cable |");
scanf("%d|\n", &choixP);
if (choixP == 2) {
  printf("Et de 4 !\n");
  cable = cable - 1;
}
else {
    printf("Fait attention ! c'est pas le bon heureusement que je t'ai prevenu avant\n");
}
}
while(cable != 0){
printf("Quelle cable souhaite tu debrancher ? \n\n");
printf("Le cable |");
scanf("%d|\n", &choixP);
if (choixP == 3) {
  printf("Et de 5, Bien jouer !\n");
  cable = cable - 1;
}
else {
    printf("Fait attention ! c'est pas le bon heureusement que je t'ai prevenu avant\n");
}
}
printf("tu n'a pas endomager X-BOW c'est tres bien maintenant il te reste plus qu'a changer le processeur\nPour cela vas dans ton inventaire( |9| ) et change le !\n");
printf("Allez dans l'inventaire |");
scanf("%d|\n\n\n\n", &inventaire);

if (inventaire == 9) {
  printf("                              #~~~~~~~~~~~~~~~~~~~~~~#\n");
  printf("                              |      INVENTAIRE      |\n");
  printf("                              #~~~~~~~~~~~~~~~~~~~~~~#\n\n\n\n");
  printf("    __\n");
  printf("   (__)  Processeur |  Quantite : 1  |  Etat : Neuf \n\n\n\n");
  printf("Changer de processeur ?  OUI |1|     NON |2| \n");
  scanf("%d|\n",&choixINV);
  if (choixINV == 1) {
    printf("Le processeura bien ete changer !\n");
  }
  else {
    printf("Si tu ne change pas le processeur X-BOW vas etre deffectueux. . . \nJe ne suis pas sur que c'est ce que tu vieulle. . . .\n");
    printf("je te laisse une derniere chance :\n");
    printf("Changer de processeur ?  OUI |1|     NON |2| \n");
    scanf("%d|\n",&choixINV);
    }
	printf("\n\n\n\nAcces au module de reparation . . .\n\n\n\n");
	c1();
}
}
if (choixJoueur == 3){
	printf("\n\nChargement du module Anti-Virus . . .\n\n");
	printf("Ici le but est simple tu doit aider l'anti-virus a combattre contre un virus qui endommage X-BOW\n\n");
	for(i=100; i>=0; i--){
		choixM = rand_a_b(1, 4);
			if ( ptdevieJ <= 0){
					printf("Les virus ont gagner . . . ");
					break;

			}
			if ( ptdevieM <= 0){
				printf("Tu a reussi a combattre contre le virus,\nBien jouer a toi");
				printf("Redemarrage serveur . . .\nX-BOW en service.");
				printf("Bravo ! tu a reparer X-BOW merci a toi de m'avoir aider.\n");
				break;
				}
			printf("|1| Attaque        |2| Défence ;\n");
			scanf("%d|", &choixj);
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
							}
}
}
