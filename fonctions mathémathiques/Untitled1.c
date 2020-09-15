#include <stdio.h>
#include <math.h>
#define TAILLE_POLY 10
#define IS_EQUAL(a, b, precision) (fabs((a) - (b)) < (precision))
static void
calculer_derivee(double *derivee, double const *poly, size_t taille)
{
    if (derivee != NULL && poly != NULL)
    {
        size_t i;
        for (i = 0; i < taille -1; i++)
        {
            derivee[i] = poly[i + 1] * (i + 1);
        }
        derivee[taille - 1] = 0.0;
    }
}
static void
afficher_poly(double *poly, size_t taille)
{
    if (poly != NULL)
    {
        int i;
        for (i = taille - 1; i >= 0; i--)
        {
            if (IS_EQUAL(poly[i], 0.0, 1e-5) == 0)
            {
                printf("%+fx^%d", poly[i], i);
            }
        }
        printf("\n");
    }
}
int
main(void)
{
    /* -tc- poly[i] correspond au coefficient du terme de degre i */
    double poly[TAILLE_POLY] = {1, -3, 2};
    double derivee[TAILLE_POLY] = {0.0};
    calculer_derivee(derivee, poly, TAILLE_POLY);
    printf("Polynome: ");
    afficher_poly(poly, TAILLE_POLY);
    printf("Derivee: ");
    afficher_poly(derivee, TAILLE_POLY);
    return 0;
}
