#include <stdio.h>



int main(){
	int num,k;
	scanf("%d", &num);
	scanf("%d",&k);    

	int sum=0;

	int arr[num];
	for(int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	
	int front = 0;
	int rear = num-1;

	while(front<rear && k>0){
		if(arr[front]>=arr[rear]){
			sum+=arr[front++];
			k--;
		}else{
			break;
		}
	}

	while(front<rear && k>0){
		sum+=arr[rear--];
		k--;
	}

	
	printf("%d",sum);
	return 0;
}
