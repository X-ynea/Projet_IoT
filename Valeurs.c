#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int tomate, sol, temps, humidite, horodatage;

    int frequence;
    float quantite;
    char ligne[5];

    FILE *fichier1 = fopen("./Data/Tomate.txt", "r");
    FILE *fichier2 = fopen("./Data/Sol.txt", "r");
    FILE *fichier3 = fopen("./Data/Temp.txt", "r");
    FILE *fichier4 = fopen("./Data/Humidite.txt", "r");
    FILE *fichier5 = fopen("./Data/Horodatage.txt", "r");


    // Lecture du fichier Tomate.txt pour mettre la valeur dans "tomate"
    while (fgets(ligne, sizeof(ligne), fichier1) != NULL) {
        tomate = atoi(ligne);
    }

    // Lecture du fichier Sol.txt pour mettre la valeur dans "sol"
    while (fgets(ligne, sizeof(ligne), fichier2) != NULL) {
        sol = atoi(ligne);
    }
    
    // Lecture du fichier Temps.txt pour mettre la valeur dans "temps"
    while (fgets(ligne, sizeof(ligne), fichier3) != NULL) {
        temps = atoi(ligne);
    }

    // Lecture du fichier Humidite.txt pour mettre la valeur dans "humidite"
    while (fgets(ligne, sizeof(ligne), fichier4) != NULL) {
        humidite = atoi(ligne);
    }

    // Lecture du fichier Horodatage.txt pour mettre la valeur dans "horodatage"
    while (fgets(ligne, sizeof(ligne), fichier4) != NULL) {
        horodatage = atoi(ligne);
    }


    if (sol == 1) {     // Argileux
        if (tomate == 1) {     // Coeur de boeuf
            switch (temps) {
                case 1 :     // Normal
                    frequence = 1;
                    quantite = 2.5;
                    break;
                case 2 :     // Humide
                    frequence = 1;
                    quantite = 1.5;
                    break;
                case 3 :     // Sec
                    frequence = 1;
                    quantite = 3;
                    break;
                case 4 :     // Canniculaire
                    frequence = 2;
                    quantite = 3.5;
                    break;
            }
        }

        if (tomate == 2) {     // Cerise
            switch (temps) {
                case 1 :     // Normal
                    frequence = 1;
                    quantite = 1.5;
                    break;
                case 2 :     // Humide
                    frequence = 1;
                    quantite = 0.5;
                    break;
                case 3 :     // Sec
                    frequence = 1;
                    quantite = 2;
                    break;
                case 4 :     // Canniculaire
                    frequence = 1;
                    quantite = 2.5;
                    break;
            }
        }

        if (tomate == 3) {     // Ananas
            switch (temps) {
                case 1 :     // Normal
                    frequence = 1;
                    quantite = 2.5;
                    break;
                case 2 :     // Humide
                    frequence = 1;
                    quantite = 1.5;
                    break;
                case 3 :     // Sec
                    frequence = 2;
                    quantite = 3.5;
                    break;
                case 4 :     // Canniculaire
                    frequence = 2;
                    quantite = 4.5;
                    break;
            }
        }
    }

    if (sol == 2) {     // Sablonneux
        if (tomate == 1) {     // Coeur de boeuf
            switch (temps) {
                case 1 :     // Normal
                    frequence = 1;
                    quantite = 2.5;
                    break;
                case 2 :     // Humide
                    frequence = 1;
                    quantite = 1.5;
                    break;
                case 3 :     // Sec
                    frequence = 2;
                    quantite = 3.5;
                    break;
                case 4 :     // Canniculaire
                    frequence = 2;
                    quantite = 4.5;
                    break;
            }
        }

        if (tomate == 2) {     // Cerise
            switch (temps) {
                case 1 :     // Normal
                    frequence = 1;
                    quantite = 2;
                    break;
                case 2 :     // Humide
                    frequence = 1;
                    quantite = 1;
                    break;
                case 3 :     // Sec
                    frequence = 2;
                    quantite = 3;
                    break;
                case 4 :     // Canniculaire
                    frequence = 2;
                    quantite = 4;
                    break;
            }
        }

        if (tomate == 3) {     // Ananas
            switch (temps) {
                case 1 :     // Normal
                    frequence = 1;
                    quantite = 3.5;
                    break;
                case 2 :     // Humide
                    frequence = 1;
                    quantite = 2.5;
                    break;
                case 3 :     // Sec
                    frequence = 2;
                    quantite = 4.5;
                    break;
                case 4 :     // Canniculaire
                    frequence = 2;
                    quantite = 5.5;
                    break;
            }
        }
    }

    // Modification avec l'humidite
    if (humidite <= 30 ) {
        frequence += 1;
    }
    else if (humidite >= 70 ) {
        frequence -= 1;
    }

    // Modification par la phase de croissance
    if (horodatage > 42 && horodatage <= 77){
        frequence += 1;
    }

    fprintf(stdout, "%d,%.1f", frequence, quantite);
    //fprintf(stdout, "tomate : %d, sol : %d, temps : %d", tomate, sol, temps);


    // Ferme les fichiers
    fclose(fichier1);
    fclose(fichier2);
    fclose(fichier3);
    fclose(fichier4);
    fclose(fichier5);


    return 0;
}