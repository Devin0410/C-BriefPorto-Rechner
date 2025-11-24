
#include <stdio.h>


int main() {

    // Variablen deklarieren und initialiseren
    double preis = 0.0;
    double gewicht = 0;
    double laenge = 0.0;

    // Eingabe
    printf("Bitte geben Sie das Gewicht ein (in Gramm): ");
    scanf("%lf", &gewicht);
    printf("Bitte geben Sie die Laenge ein (in CM): ");
    scanf("%lf", &laenge);

    // Verarbeitung
    if(gewicht <= 30) {
        if(laenge <= 15) {
            preis = gewicht * laenge * 0.005; 
        } 
        else {
            preis = gewicht * laenge * 0.0075;
        }
    }
    else {
        if(laenge <= 15) {
            preis = gewicht * laenge * 0.010; 
        } 
        else {
            preis = gewicht * laenge * 0.025;
        }
    }

    // Ausgabe
    printf("Der Preis des Briefes betraegt: %.2lf EUR", preis);
    
    return 0;
}