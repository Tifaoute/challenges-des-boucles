#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,i ;
     printf("Entrer un nombre :");
     scanf("%d",&n);
     i=0;
     while(n!=0){
        i=(i*10)+(n%10);
        n=n/10;
     }
    printf("l'inverse est : %d\n",i);

    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ int n,r,i;
    printf("Entrer un nombre:");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        r = r * i;
        printf("%d*%d=%d \n",n,i,r);
    }
   return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ int s,n,i;
    printf("Entrer un nombre:");
    scanf("%d",&n);

    s = 0;
   for(i=1;i<=n;i++){
      s = s + i;
    }
    printf(" la somme est : %d",s);

  return 0;
}


#include<stdio.h>
#include<stdlib.h>

int main()
{ int b,e,R,i;
    printf("Entrer un nombre b:");
    scanf("%d",&b);
    printf("Entrer un nombre e:");
    scanf("%d",&e);
    R = 1;
  for(i=1;i<=e;i++){
    R=R*b;
    printf("%d",R);
   }
   return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ int n,r;
  int i =0;
    printf("Entrer un nombre:");
    scanf("%d",&n);
    while(n!=0){
        r = n /10;
        i=i*10 ;
        i=i*10+r;
        n=n/10;
        printf("l'inverse de numero est:%d \n",i);
    }
   return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ int s,n,i;
    printf("Entrer un nombre:");
    scanf("%d",&n);
    s = 0;
   for(i=1;i<=n;i++){
      s = s + i;
    }
    printf(" la somme est : %d",s);

  return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{ int b,e,R,i;
    printf("Entrer un nombre b:");
    scanf("%d",&b);
    printf("Entrer un nombre e:");
    scanf("%d",&e);
    R = 1;
  for(i=1;i<=e;i++){
    R=R*b;
    printf("%d",R);
   }
   return 0;
}
