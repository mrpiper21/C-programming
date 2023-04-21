#include <stdio.h>
//Multiple levels of indirection

int main(void){

    char *wardrobe[] = {"shorts", "Hoddy", "jeans", "long-sleeves", "pyjamas", "bumpers", "polo-power", "side-pockets","singlets"};

    char **tops[4];
    char **downs[4];
    char **top_down[1];

    tops[0] = &wardrobe[1];
    tops[1] = &wardrobe[3];
    tops[2] = &wardrobe[6];
    tops[3] = &wardrobe[9];

    downs[0] = &wardrobe[0];
    downs[1] = &wardrobe[2];
    downs[2] = &wardrobe[5];
    downs[3] = &wardrobe[7];

    printf("%s\n", *tops[1]);
    return (0);
}