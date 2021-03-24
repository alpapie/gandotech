#include<stdio.h>
main(){
	int movd,dnr,rend;
	int bv,bd,bc,pd,pu;
	printf("entrer le montant des achats en euro:");
	scanf("%d",&movd);
	printf("entrer le montant donner en euro:");
	scanf("%d",&dnr);
	rend=dnr-movd;
	bv=rend/20;
	bd=(rend%20)/10;
	bc=((rend%20)%10)/5;
	pd=(((rend%20)%10)%5)/2;
	pu=((((rend%20)%10)%5)%2)/1; 
	if (rend<0){
    printf("la somme donner est manquante");
	}else if(rend>0){
		printf("--------Rendue de monnaie=%d euro--------\n",rend);
		if(bv>0){
			printf("%d billet de 20 euro\n",bv);
		}
		if(bd>0){
			printf("%d billet de 10 euro\n",bd);
		}
		if(bc>0){
			printf("%d billet de 5 euro\n",bc);
		}
		if(pd>0){
			printf("%d billet de 2 euro\n",pd);
		}
		if(pu>0){
			printf("%d billet de 1 euro\n",pu);
		}
	}else{
		printf("La somme donner est egale a la somme acheter .........merci a bientot:)");
	}
}
