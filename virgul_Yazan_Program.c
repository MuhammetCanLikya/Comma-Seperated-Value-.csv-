#include <stdio.h>
int main(){
	int i=0, x=0;
	int s=1;
	
	while(s==1){
	printf("Lutfen virgul sayisini giriniz:\n");
	scanf("%d",&x);
		for (i=0;i<x;i++)
		{
			printf(",\n");
		}
		printf("\nLutfen Ustteki Virgulleri (Ctrl+C ile) Kopyalayin.\n\n");
	printf("Tekrar virgul girmek icin '1' yazip enter'a tiklayin\n\nProgramdan cikmak icin herhangi bir deger girin\n");
	scanf("%d",&s);
	}
	return 0;
}
