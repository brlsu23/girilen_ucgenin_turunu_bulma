#include<stdio.h>
#include<locale.h>// türkçeyi rahat kullanmak için.

int main(){
	setlocale(LC_ALL,"Turkish");
	 //a2= b2 + c2
	 //a2<b2+c2
	 //a2>b2+c2
	  int a,b,c;
	  char en_uzunun_kenar;
	  
	  printf("Üçgenin kenarlarını giriniz:\n  ");
	  scanf("%d%d%d", &a,&b,&c);
	  
	  if (a>b && a>c){
	  	
	  	en_uzunun_kenar = 'a';
	  	
	  }else if(b>a && b>c){
	  	
	  	en_uzunun_kenar = 'b';
	  	
	  }else{
	  	
	  	en_uzunun_kenar = 'c';
	  	
	  }
	
	
	if(en_uzunun_kenar == 'a'){
		
		if(a * a == b * b + c * c){
			
			printf("Dik açılı üçgen.\n ");
			
		}else if(a * a > b * b + c * c){
			printf("Dar açılı üçgen.\n ");
			
		}else if(a * a < b * b + c * c){
		
		printf("Dik açılı üçgen. \n");
		
		}else{
		printf("Girilen kenar bir üçgen oluşturamaz!\n");
        }
        
	}else if(en_uzunun_kenar == 'b'){
		
		if(b* b == a * a + c * c){
			printf("Dik açılı üçgen. \n");
			
		}else if(b * b > a * a + c * c){
			printf("Dar açılı üçgen.\n ");
			
		}else if(b * b < a * a + c * c){
		printf("Dik açılı üçgen.\n ");
		
	    }else{
		printf("Girilen kenar bir üçgen oluşturamaz!\n ");
	    }
    } else {
		if(c * c == a * a + b * b){
			printf("Dik açılı üçgen.\n ");
			
		}else if(c * c == a * a + b * b){
			printf("Dar açılı üçgen.\n ");
			
		}else if(c * c == a * a + b * b){
		printf("Dik açılı üçgen.\n ");
		
    	}else{
		printf("Girilen kenar bir üçgen oluşturamaz!\n ");
	}  
	
	
}
	
	
	
	return 0;
}
