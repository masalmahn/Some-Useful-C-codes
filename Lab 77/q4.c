#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, type;
    float pi= 3.14;
    printf("Please Enter The Radius: ");
    scanf("%d",&r);
    printf("If you want the perimeter please enter 1 if you want the area please enter 2: ");
    scanf("%d",&type);
    if (type == 1) {
        r = 2*r*pi;
        printf("The Perimeter of the Circle Is %d", r);
    } else
    if (type == 2) {
        r = pi*r*r;
        printf("The area of the Circle Is %d", r);
    } else {
        printf("Wrong Input Please Enter 1 or 2");
    }
    return 0;
}
