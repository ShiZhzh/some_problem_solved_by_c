#include <stdio.h>

void mergeArrays(int array1[], int array2[], int size1, int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;
    
    // 将两个有序数组按升序整合到mergedArray中
    while (i < size1 && j < size2) {
        if (array1[i] <= array2[j]) {
            mergedArray[k] = array1[i];
            i++;
        } else {
            mergedArray[k] = array2[j];
            j++;
        }
        k++;
    }
    
    // 将剩余的元素从array1复制到mergedArray
    while (i < size1) {
        mergedArray[k] = array1[i];
        i++;
        k++;
    }
    
    // 将剩余的元素从array2复制到mergedArray
    while (j < size2) {
        mergedArray[k] = array2[j];
        j++;
        k++;
    }
}

int main() {
	int n;
	scanf("%d",&n);
    int array1[n] ;
    int array2[n] ;
    for(int i=0;i<n;i++){
    	scanf("%d",&array1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&array2[i]);
	}
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int mergedArray[size1 + size2];
    
    mergeArrays(array1, array2, size1, size2, mergedArray);
    
    printf("整合后的数组：\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    
    return 0;
}
