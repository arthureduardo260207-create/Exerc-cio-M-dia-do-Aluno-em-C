#include <stdio.h> 
 
int main() { 
 
    float n1,n2,exame;
    float media, mediaFinal; 
 
    printf("Digite a primeira nota: "); 
    scanf("%f", &n1); 
 
    printf("Digite a segunda nota: "); 
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Media: %.2f\n", media);
    
    if (media>= 7.0) { 
    
        printf("aprovado\n");
    
    }

    else{

    printf("digite a nota do exame final:");
    scanf("%f", &exame);
    
    mediaFinal = (media+ exame) / 2;

    printf("Media final: %.2f\n", mediaFinal);

    if (mediaFinal >= 7.0){
        printf("APROVADOO\n");
    }
    else{
        printf("REPROVADO\n");
    }

}

    return 0;

}