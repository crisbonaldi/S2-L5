#include <stdio.h>



void menu ()                          
                                     
                                  
{
	printf ("\n\nBenvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("\n\nCome posso aiutarti?\n");
	printf ("\nA >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}

void moltiplica ()
{
	int  a,b = 0;                               
    
	printf ("\nInserisci i due numeri da moltiplicare:\n");
	scanf ("%d", &a);                                
  
	scanf ("%d", &b);                                

	int prodotto = a * b;                     

	printf ("\nIl prodotto tra %d e %d e':\n %d", a,b,prodotto);   

}


void dividi ()
{
        float  a,b = 0;         
        printf ("\nInserisci il numeratore:\n");    
        scanf ("%2f", &a);     
	    printf ("\nInserisci il denumeratore:\n");    
        scanf ("%2f", &b);         

        float divisione = a / b;       

        printf ("\nLa divisione tra %f e %f e': %f", a,b,divisione);   
                                                                      
}


void ins_string ()                    
{
	char stringa[50];                
        printf ("\nInserisci la stringa:\n");    
        scanf ("%s", &stringa);     
}


int main ()              


                        
{                                                           
	char scelta;       
                 
	menu ();                    
	                            
                                
	scanf ("%c", &scelta);     
                               
                               

	                        
    switch (scelta)                                         
	{                                                                        
		case 'A':                 
		        moltiplica();             
		break;                    
		case 'B':                 
                dividi();         
        break;            
		case 'C':                 
                ins_string();     
        break;       
        default: 
    
        printf("\nPerdonami ma non ho capito\n");
        scelta = 0;                                   
	}
    while (scelta == 0)
                                                               
return 0;

}                        
                                    



