#include "pesqBin.cpp"

int main() {
    int myArray[] = {1, 2, 3, 4, 5, 6, 7};
    int size = ARRAY_SIZE(myArray);
    int target = 4;
    int result = searchBin(myArray, size, target);
    
    if (result != -1) {
        printf("Elemento encontrado no indice: %d\n", result);
    } else {
        printf("Elemento não encontrado no array\n");
    }
    
    return 0;
}
