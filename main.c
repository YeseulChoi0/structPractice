#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "header.h"

int main(){
  struct food f0;

  strcpy(f0.name, "pancakes");
  f0.price = 8;

  struct food *f1 = &f0;

  printf("\nPrinting an example of a food and price \n");
  printStruct(returnEx());


  printf("\nPrinting food\n");
  printStruct(f0);
  printf("\nPrinting food through reference\n");
  printStruct(*f1);

  printf("\n\nmodifying the struct using the reference \n");
  modifyStruct(f1, "mangoes", 6.0);
  printStruct(*f1);

  printf("\nChecking if the original struct changed\n");
  printStruct(f0);

  return 0;
}

struct food returnEx(){
  struct food f[5];

  strcpy(f[0].name, "oranges");
  f[0].price = 1.5;
  strcpy(f[1].name, "sandwiches");
  f[1].price = 4.5;
  strcpy(f[2].name, "fried chicken");
  f[2].price = 20;
  strcpy(f[3].name, "steak");
  f[3].price = 15;
  strcpy(f[4].name, "bagel");
  f[4].price = 1.75;

  srand(time(0));

  return f[rand() % 5];
}

int printStruct(struct food f){
  printf("Name of food: %s \t Price: $ %lf \n", f.name, f.price);
  return 0;
}

int modifyStruct(struct food *f, char newName[], double newPrice){
  strcpy((*f).name, newName);
  (*f).price = newPrice;
  return 0;
}
