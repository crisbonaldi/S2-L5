#include <stdio.h>

void menu ();            //funzioni di tipo void non restituiscono alcun valore ma non è dichiarato il contenuto
void moltiplica ();
void dividi ();
void ins_string();    


int main ()                 //CORRETTO


                            //*********************************************** */

{                                   //CORRETTO                            
	char scelta = {'\0'};       //variabile 'scelta' di tipo character     //contenuto tra parentesi errato
                                    //sintassi errata, char scelta = '\0' o char scelta = 0
	menu ();                    //variabile menu non può essere letta perchè non 
	                            //è specificato il suo contenuto. Avrebbe avuto senso se il void menu fosse 
                                    //stato dichiarato.
	scanf ("%d", &scelta);     //input dove l'utente fa la sua scelta, non richiamo un numero intero ma un %c, tra
                                  //A,B,C (case sotto).
                               //corretta allocazione in &scelta

	                        //************************************************* */
    
    switch (scelta)               //CORRETTO                          
	{                                                                        
		case 'A':                 //CORRETTO
		moltiplica();             //CORRETTO ma non legge niente
		break;                    //CORRETTO
		case 'B':                 //CORRETTO
                dividi();         //stesso per 'moltiplica'
                break;            //CORRETTO
		case 'C':                 //CORRETTO
                ins_string();     //stesso per 'moltiplica' e 'dividi'
                break;                                          
	}
                                                               
return 0;

}
                             //*********************************************** */

void menu ()                          //CORRETTO, dichiaro la variabile di tipo void e ne specifico funzione
                                      // e contenuto per permetterle di essere richiamata. Andrebbe sostituita
                                    //con il void menu iniziale
                                      
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}

                              //********************************************* */
void moltiplica ()
{
	short int  a,b = 0;                                //corretto, short int?    =0 init
                                                           //o int 
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%f", &a);                                //%f richiama un float, non un intero, corretta allocazione
                                                         //%d se dichiaro una variabile intero sopra
	scanf ("%d", &b);                                //corretto

	short int prodotto = a * b;                     //ci sta, magari int o long 

	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);   
}


void dividi ()
{
        int  a,b = 0;         //corretto, float??
        printf ("Inserisci il numeratore:");    //corretto, magari \n 
        scanf ("%d", &a);     //corretta allocazione, ma float?
	printf ("Inserisci il denumeratore:");   //corretto, ma \n   
        scanf ("%d", &b);         // %f? allocazione ok

        int divisione = a % b;       //float divisione = a/b   why %?

        printf ("La divisione tra %d e %d e': %d", a,b,divisione);   //la divisione tra %f e %f è 
                                                                    
}





void ins_string ()                    //corretto
{
	char stringa[10];                //ok, magari aumentare spazio
        printf ("Inserisci la stringa:");    //corretto, \n
        scanf ("%s", &stringa);     //corretto
}

