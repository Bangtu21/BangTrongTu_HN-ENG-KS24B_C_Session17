#include<stdio.h>
int sapXep(int *arr, int *n);
int soChan(int *arr, int n);
int soNguyenTo(int *arr, int n);
int daoNguoc(int *arr, int n);
int tangDan(int *arr, int n);
int giamDan(int *arr, int n);
int search(int *arr, int n);
int main(){
	int menu;
	int arr[100], n;
	int choice;
	do{
		printf("MENU\n");
		printf("1. Nhap vao so phan tu va tung phan tu\n");
		printf("2. In ra cac phan tu la so chan\n");
		printf("3. In ra cac phan tu la so nguyen to\n");
		printf("4. Dao nguoc mang\n");
		printf("5. Sap xep mang\n");
		printf("6. Nhap vao mot phan tu va tim kiem phan tu trong mang\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				sapXep(arr, &n);
				break;
			case 2:
				soChan(arr, n);
				break;
			case 3:
				soNguyenTo(arr, n);
				break;
			case 4:
				daoNguoc(arr, n);
				break;
			case 5:
				printf("1. Tang dan\n");
				printf("2. Giam dan\n");
				printf("Lua chon cua ban: ");
				scanf("%d", &choice);
				if(choice==1){
					tangDan(arr, n);
				}else if(choice==2){
					giamDan(arr, n);
				}
				break;
			case 6:
				search(arr, n);
				break;
		}
	}while(menu!=7);
}
int sapXep(int *arr, int *n){
	printf("Hay nhap do dai: ");
	scanf("%d", n);
	for(int i=0; i<*n; i++){
		printf("Hay nhap phan tu thu arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\n");
	return 0;
}
int soChan(int *arr, int n){
	for(int i=0; i<n; i++){
		if(*(arr+i)%2==0){
			printf("So chan la %d\n", *(arr+i));
		}
	}
	printf("\n");
}
int soNguyenTo(int *arr, int n){
	for(int i=0; i<n; i++){
		int count=0;
		for(int j=1; j<=arr[i]; j++){
			if(arr[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d la so nguyen to\n", arr[i]);
		}
	}
	printf("\n");
}
int daoNguoc(int *arr, int n){
	for(int i=n-1; i>=0; i--){
		printf("%d", arr[i]);
	}
	printf("\n\n");
}
int tangDan(int *arr, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Mang sau khi tang dan la: ");
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	printf("\n\n");
}
int giamDan(int *arr, int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Mang sau khi giam dan la: ");
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	printf("\n\n");
}
int search(int *arr, int n){
	int tim=0;
	printf("Nhap phan tu ban muon tim: ");
	scanf("%d", &tim);
	for(int i=0; i<n; i++){
		if(arr[i]==tim){
			printf("Phan tu %d tim thay tai vi tri index=%d", tim, arr[i-1]);
		}
	}
	printf("\n\n");
}
