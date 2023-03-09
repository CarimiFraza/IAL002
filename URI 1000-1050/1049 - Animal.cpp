#include <stdio.h>
#include <string.h>

main() {
    char vert[]="vertebrado", ave[22]="ave", mam[]="mamifero";
    char carn[]="carnivoro", oni[]="onivoro", herb[]="herbivoro";
    char ag[]="aguia", pom[]="pomba", hom[]="homem", vc[]="vaca";
    char inv[]="invertebrado", ins[]="inseto", ane[]="anelideo";
    char hema[]="hematofago", pul[]="pulga", lag[]="lagarta";
    char sang[]="sanguessuga", min[]="minhoca";
    char a[22], b[22], c[22];
    scanf("%s", a);
    if(0==strcmp(a,vert))
    {
        scanf("%s",b);
        if(0==strcmp(b,ave))
        {
            scanf("%s",c);
            if(0==strcmp(c,carn))
                printf("%s\n",ag);
            else if(0==strcmp(c,oni))
                printf("%s\n",pom);
        }
        if(0==strcmp(b,mam))
        {
            scanf("%s",&c);
            if(0==strcmp(c,oni))
                printf("%s\n",hom);
            else if(0==strcmp(c,herb))
                printf("%s\n",vc);
        }
    }
    else if(0==strcmp(a,inv))
    {
        scanf("%s",b);
        if(0==strcmp(b,ins))
        {
            scanf("%s",&c);
            if(0==strcmp(c,hema))
                printf("%s\n",pul);
            else if(0==strcmp(c,herb))
                printf("%s\n",lag);
        }
        if(0==strcmp(b,ane))
        {
            scanf("%s",&c);
            if(0==strcmp(c,hema))
                printf("%s\n",sang);
            else if(0==strcmp(c,oni))
                printf("%s\n",min);
        }
    }
}
