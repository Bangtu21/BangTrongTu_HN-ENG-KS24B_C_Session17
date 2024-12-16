#include<stdio.h>
void sapXep(int *n, int *arr);
void hienThi(int n, int *arr);
int doDaiMang(int n, int *arr);
int tong(int n, int *arr, int sum);
int lonNhat(int n, int *arr, int max);
int main(){
	int menu;
	int n=0, arr[100];
	int length;
	int sum=0;
	int max;
	do{
		printf("MENU\n");
		printf("1. Nhap vao so phan tu va tung phan tu.\n");
		printf("2. Hien thi cac phan tu trong mang.\n");
		printf("3. Tinh do dai mang.\n");
		printf("4. Tinh tong cac phan tu trong mang.\n");
		printf("5. Hien thi phan tu lon nhat.\n");
		printf("6. Thoat.\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				sapXep(&n, arr);
				break;
			case 2:				
				hienThi(n, arr);
				break;
			case 3:
				doDaiMang(n, arr);
				break;
			case 4:
				tong(n, arr, sum);
				break;
			case 5:
				lonNhat(n, arr, max);
				break;
		}
	}while(menu!=6);
}
sapXep(int *n, int *arr){
	printf("Hay nhap do dai: ");
	scanf("%d", n);
	for(int i=0; i<*n; i++){
		printf("Hay nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
}
hienThi(int n, int *arr){
	for(int i=0; i<n; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	printf("\n");
}
doDaiMang(int n, int *arr){
	printf("Mang co do dai la %d\n", n);
	printf("\n");
}
tong(int n, int *arr, int sum){
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	printf("Tong cac phan tu co trong mang la: %d\n", sum);
	printf("\n");
}
lonNhat(int n, int *arr, int max){
	max=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Phan tu lon nhat trong mang la: %d", max);
	printf("\n\n");
}
