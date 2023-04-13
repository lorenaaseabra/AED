#include <stdio.h>

int main() {
    int temp, hour , min, sec;
    
    scanf("%i", &temp);
    
    hour = temp / 3600;
    temp -= hour * 3600;
    min = temp / 60;
    temp -= min * 60;
    
    printf("%i:%i:%i\n", hour, min, temp);
    
    return 0;
}