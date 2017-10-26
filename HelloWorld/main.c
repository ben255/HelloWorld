//
//  main.c
//  HelloWorld
//
//  Created by Benjamin Kararic on 2017-08-29.
//  Copyright © 2017 Benjamin Kararic. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    printf("Hello, World!\n");
    
    char myFavoritChar; //skapar variablen myFavoritChar som ska lagra en bokstav eller tecken
    printf("Skriv ditt favorittecken: ");
    myFavoritChar = getchar(); // programmet väntar på att man ska skriva sitt tecken
    printf("Tack då vet jag att ditt favoritteckan är: %c\n", myFavoritChar); // skriver ut tecknet i slutet
    
    char myFirstName[20];// skaparen char array med 20 platser
    printf("vad heter du i förnamn?: ");
    scanf("%s", myFirstName);
    printf("tack då vet jag att ditt förnamn är: %s \n", myFirstName);
    
    getchar();
    return 0;
}
