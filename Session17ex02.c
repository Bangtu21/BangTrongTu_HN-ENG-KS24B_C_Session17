#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chuoi(char *str);
void inRa(char *str);
int chuCai(char *str, int length);
int chuSo(char *str, int length);
int dacBiet(char *str, int length);
int main(){
	int menu;
	char str[100];
	int length=sizeof(str)/sizeof(char);
	do{
		printf("MENU\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi\n");
		printf("3. Dem so luong chu cai trong chuoi va in ra\n");
		printf("4. Dem so luong chu so trong chuoi va in ra\n");
		printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				chuoi(str);
				break;
			case 2:
				inRa(str);
				break;
			case 3:
				chuCai(str, length);
				break;
			case 4:
				chuSo(str, length);
				break;
			case 5:
				dacBiet(str, length);
				break;
		}
	}while(menu!=6);
}
chuoi(char *str){
	printf("Hay nhap chuoi cua ban: ");
	getchar();
	fgets(str, 100, stdin);
	printf("\n");
}
inRa(char *str){
	printf("%s", str);
	printf("\n");
}
chuCai(char *str, int length){
	int count3=0;
	for(int i=0; i<length; i++){
		if(isalpha(*(str+i))){
			count3++;
		}
	}
	printf("So luong chu cai co trong chuoi la %d\n", count3);
	printf("\n");
}
chuSo(char *str, int length){
	int count4=0;
	for(int i=0; i<length; i++){
		if(isdigit(*(str+i))){
			count4++;
		}
	}
	printf("so luong chu so co trong chuoi la %d\n\n", count4);
}
dacBiet(char *str, int length){
	int temp=0;
	int count5=0;
	for(int i=0; i<length; i++){
		if(isalpha(*(str+i)) || isdigit(*(str+i))){
			temp++;
		}
	}
	count5=length-temp-1-90;
	printf("so luong ky tu dac biet co trong chuoi la %d\n\n", count5);
}
