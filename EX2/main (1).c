#include <stdio.h>

int main() {
    
    int array1[] = {1, 2, 3};
    float array2[] = {4.5, 6.7, 8.9};
    char array3[] = {'a', 'b', 'c'};


    FILE *file = fopen("a.bin", "wb");
    
    
    fwrite(array1, sizeof(int), 3, file);
    fwrite(array2, sizeof(float), 3, file);
    fwrite(array3, sizeof(char), 3, file);

    
    fclose(file);

    
    file = fopen("a.bin", "rb");
    

    int readArray1[3];
    float readArray2[3];
    char readArray3[3];

    
    fread(readArray1, sizeof(int), 3, file);
    fread(readArray2, sizeof(float), 3, file);
    fread(readArray3, sizeof(char), 3, file);

  
    fclose(file);

   
    for (int i = 0; i < 3; i++) {
        printf("%d ", readArray1[i]);
    }
    printf("\n");

    
    for (int i = 0; i < 3; i++) {
        printf("%f ", readArray2[i]);
    }
    printf("\n");

  
    for (int i = 0; i < 3; i++) {
        printf("%c ", readArray3[i]);
    }
    printf("\n");

    return 0;
}