#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
   double rayon = 6.0;
   double aire = M_PI * rayon * rayon;
   double perimetre = 2 * M_PI * rayon;


   printf("Rayon du cercle : %.2f\n", rayon);
   printf("Aire du cercle : %.4f\n", aire);
   printf("Perimetre du cercle : %.4f\n", perimetre);
}
