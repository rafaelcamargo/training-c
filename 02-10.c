#include <stdio.h>

void main(){

	int nums[3], i, j, temp;

	printf("Informe tres valores inteiros:\n");
	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
			if(nums[i] < nums[j]){
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	for(i = 2; i >= 0; i--)
		printf("%d\n", nums[i]);

}