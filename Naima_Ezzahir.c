#include <stdio.h>

int main() {
  int hauteur;
  int base;
  int aire;
  int parim;
  printf(" donner hauteur de triangle: ");
       scanf("%d",&hauteur);
  printf(" donner hauteur de triangle: ");
       scanf("%d",&base);
      aire=(base*hauteur)/2;
      printf(" l aire detriangle %d: ",aire);
  parim=3*base;
printf(" l parim detriangle %d: ",parim);
    return 0;
}



#include <stdio.h>

int main() {
  float temperature;
  printf(" donner la temperature corporelle: ");
  scanf("%d",&temperature);
  if(temperature>=38){
printf("vous aver de la fievre:",temperature);
      
  }else{
   printf("votre temperature et normal:",temperature);

}
    return 0;
}






#include <stdio.h>

int main() {
    int n;
  printf(" entre un nombre: ");
  scanf("%d",&n);

  do{
      if(n/2) {
 printf(" ce n est pas un nombre premier%d:",n);
      } else{
          printf("c est un nombre premier%d:",n);
      }while (n/2&&n/n-1);
  }
 
 return 0;
}





#include <stdio.h>

int main() {

int max;
    int min;
    int a, b;
    
    printf(" sesir le element de tabeleau : ");
    scanf("%d",&a);
    
    int tab[a];
    
    for (int i=0 ;i<a ;i++){
        printf("Entrer la valeur : ");
        scanf("%d",&b);
        tab[i] =b;
    }
          
    min=tab[0];
    
    for (int i=0 ;i<a ;i++){
          if(min>tab[i]){
            min=tab[i];
          }
          
    }
    printf("basse temperature %d: ",min);
    
    for (int i=0 ;i>a ;i++){
        printf("Entrer la valeur : ");
        scanf("%d",&b);
        tab[i] =b;
    }
          
    max=tab[0];
    
    for (int i=0 ;i<a ;i++){
          if(max<tab[i]){
            max=tab[i];
          }
          
    }
    printf(" haute temperature %d: ",max);
    
    
 


    return 0;
}