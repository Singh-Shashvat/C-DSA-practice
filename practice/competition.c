#include<stdio.h>
struct SSIPMT
{
    char collegename[100];
    char particepentname[50];
    int age;
    float weight;
};
int main(){
    struct SSIPMT participent[10];
    struct SSIPMT *AGRISITA;
    AGRISITA=participent;
    printf("enter particepent details:\n");
    for (int i = 0; i < 10; i++)
    {   printf("enter details of particpent %d\n",i+1);
        printf("college name:\t");
        scanf("%s",AGRISITA->collegename);
        printf("Particepent name:\t");
        scanf("%s",AGRISITA->particepentname);
        printf("particepent age:\t");
        scanf("%d",&AGRISITA->age);
        printf("Particepent weight:\t");
        scanf("%f",&AGRISITA->weight);
        AGRISITA++;
        printf("\n");
    }
    printf("SSIPMT is organizing a techfest named AGRESITA in which there is a Wrestling Competition");
    printf("The particepent details are");
    AGRISITA=participent;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Particepent name:\t%s\n",AGRISITA->particepentname);
        printf("particepent age:\t%d\n",AGRISITA->age);
        printf("Particepent weight:\t%f\n",AGRISITA->weight);
        printf("from college :\t%s\n",AGRISITA->collegename);
        AGRISITA++;
    }
    
}
