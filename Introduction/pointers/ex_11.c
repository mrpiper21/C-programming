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

    char *fridge[] = {"Coca-cola", "Sprite", "Don-simon", "Welch's", "Malt", "salmon", "madfish", "Tilapia", "Redfish", "Beef", "Chicken-wings", "Chicken-breast", "Eggs"};

    char **drinks[5];
    char **meats[3];
    char **fish[4];
    char **Eggs[1];

    drinks[0] = &fridge[0];
    drinks[1] = &fridge[1];
    drinks[2] = &fridge[2];
    drinks[3] = &fridge[3];

    meats[0] = &fridge[10];
    meats[1] = &fridge[11];
    meats[2] = &fridge[9];

    fish[0] = &fridge[6];
    fish[1] = &fridge[5];
    fish[2] = &fridge[7];
    fish[4] = &fridge[8];
    Eggs[0] = &fridge[13];

    printf("%s\n", *meats[2]);
    return (0);
}