
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	int zar1;
	int zar2;
	int puan;
	
	srand(time(NULL));	
	
	
    zar1 = (1 + rand() % 6) ;
    zar2 = (1 + rand() % 6) ;
    int ilk_toplam = zar1+zar2;
    printf("Gelen zarlar: %d, %d\n",zar1,zar2);
    printf("Gelen zarlar toplami:  %d\n", ilk_toplam);
			

	if( ilk_toplam == 7 || ilk_toplam == 11 ){
		printf(" kazandiniz!");
		return;
	}
	else if (ilk_toplam == 2|| ilk_toplam ==3 ||ilk_toplam ==12){
	    printf(" kaybettiniz!");
	    return;
	    
    }
    else {
    	
    	zar1 = (1 + rand() % 6) ;
        zar2 = (1 + rand() % 6) ;
        int tekrar_atisi = zar1+zar2;
    	
    	printf( "puaniniz: %d \n\n", ilk_toplam);
    	
    	while(tekrar_atisi != ilk_toplam)
		{
			
			
            zar1 = (1 + rand() % 6) ;
            zar2 = (1 + rand() % 6) ;
            int son_toplam = zar1 + zar2;
            printf( "son_toplam: %d \n\n", son_toplam);
            
			if(zar1+zar2 == ilk_toplam)
		    	{  		
                printf("Kazandiniz!");
                break;
            }
        
   
        }
      
	return 0 ;
	}
    
    

      
	
}



