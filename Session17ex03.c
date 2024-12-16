#include<stdio.h>
#include<string.h>
#include<ctype.h>
int chuoi(char *str);
void daoNguoc(char *str, char *reverse);
void demTu(char *str);
void chuoiKhac(char *str);
void inHoa(char *str);
void noiChuoi(char *str);
int main(){
	int menu;
	char str[100];
	char reserve[100];
	int length=strlen(str);
	do{
		printf("MENU\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi dao nguoc\n");
		printf("3. Dem so luong tu trong chuoi\n");
		printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
		printf("5. In hoa tat ca cac chu cai trong chuoi\n");
		printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				chuoi(str);
				break;
			case 2:
				daoNguoc(str, reserve);
				break;
			case 3:
				demTu(str);
				break;
			case 4:
				chuoiKhac(str);
				break;
			case 5:
				inHoa(str);
				break;
			case 6:
				noiChuoi(str);
				break;
		}
	}while(menu!=7);
}
int chuoi(char *str){
	printf("Hay nhap chuoi cua ban: ");
	getchar();
	fgets(str, 100, stdin);
	printf("\n");
	return 0;
}
daoNguoc(char *str, char *reverse){
	int j=0;
	int length=strlen(str);
	for(int i=length-1; i>=0; i--){
		reverse[j]=str[i];
		j++;
	}
	printf("Chuoi da dao nguoc la: %s\n\n", reverse);
}
demTu(char *str){
	int count=1;
	int length=strlen(str);
	for(int i=0; i<length; i++){
		if(str[i]==' '){
			count++;
		}
	}
	printf("So tu co trong chuoi la %d\n\n", count);
}
chuoiKhac(char *str){
	char another[100];
	printf("Ban hay nhap vao mot chuoi khac: ");
	getchar();
	fgets(another, 100, stdin);
	fflush(stdin);
	if(strcmp(str, another)==0){
		printf("Hai chuoi nay giong nhau\n");
	}else{
		printf("Hai chuoi nay khac nhau\n");
	}
	printf("\n");
}
inHoa(char *str){
	int length=strlen(str);
	for(int i=0; i<length; i++){
		str[i]=toupper(str[i]);
	}
	printf("Chuoi sau khi in hoa la: %s\n\n", str);
}
noiChuoi(char *str){
	char newChuoi[100];
	printf("Ban hay nhap vao mot chuoi moi: ");
	getchar();
	fgets(newChuoi, 100, stdin);
	fflush(stdin);
	strcat(str, newChuoi);
	printf("Chuoi sau khi duoc noi la %s", str);
}
