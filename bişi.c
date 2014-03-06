#include"stdio.h"


void main()
{
char admin[100];
char sifre[100];
int sec,cikis;
printf("kullanıcı adını giriniz=");
scanf("%s",admin);
printf("şifreyi giriniz=");
scanf("%s",sifre);
if (strcmp(admin,"mehmet")==0 && strcmp(sifre,"1234")==0)

{
	   do {
	printf("türkiyedeki büyük sehirlerin nüfusu için 1'e");
	printf("\n");
	printf("türkiyedeki bölgeleri görmek için 2'ye");
	printf("\n");
	printf("türkiyedeki büyük gölleri görmek için 3'e");
	printf("\n");
	scanf("%d",&sec);

	printf("\n");
	 
	 switch (sec)
	 {
	case 1:
    printf("Sıra  Kent        2014 nüfus sayımı\n");
	printf(" 1    istanbul    14160467\n");
	printf(" 2    ankara       5045083\n");
	printf(" 3    izmir        4061074\n");
    printf(" 4    bursa        2740970\n");
    printf(" 5    adana        2149260\n");
	break;
	case 2:
	printf("akdeniz bölgesi\n");
	printf("ege bölgesi\n");
	printf("marmara bölgesi\n");
	printf("karadeniz bölgesi\n");
	printf("iç anadolu bölgesi\n");
	printf("doğu anadolu bölgesi\n");
	printf("güneydoğu anadolu bölgesi\n");
	break;
	case 3:
	printf("göladı   yüzölçümü  derinlik  \n ");
	printf("van      3713       451\n");
	printf("beyşehir 656        10\n");
	printf("tuz      587        1-2\n");
	printf("eğirdir  482        14\n");
	printf("iznik    308        80 \n");


	break;
	default:

	break;
	}
	printf("menüye dönmek için 4 e basınız=>\n");
	printf("cikis için 0 a basınız=>");
	scanf("%d",&cikis);
}while(cikis!=0);
}
else 
	printf("yanlış");
}
