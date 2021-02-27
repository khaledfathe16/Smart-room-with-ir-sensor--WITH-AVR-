#include<avr/io.h>
#include<avr/delay.h>
#include"BIT_MATH.h"
#include"STD_TYPES.h"

int main(void){
s8 r,r2,c;
SET_BIT(DDRA,0);
SET_BIT(PORTA,1);



while(1){
	r = GET_BIT(PINA,1);
	if(r2!=r){

		if(r2==0){
			c++;


		}


	}

	if(c%2==0){
		SET_BIT(PORTA,0);

	}else{CLR_BIT(PORTA,0);}
	r2=r;

}



return 0;
}
