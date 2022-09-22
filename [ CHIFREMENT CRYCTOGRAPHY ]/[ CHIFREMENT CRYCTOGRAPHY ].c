#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{   //=============== AFFICHAGE
        system("color 60"); system("Title CRYPTOGRAPHY [ DAN ]"); system("mode con cols=125 lines=25");
        system("echo					BIENVENU CHEZ COOPERATIVE DAN>S.s1"); system("Stexte S.s1 100 on");
        char ch;
        FILE *fic=fopen("backg.aff","r");
        do {        fscanf(fic,"%c",&ch);
                    if ( ch == '|') { break; }
                    else { printf("%c",ch); }
                    Sleep(1);
        }while (!feof(fic));
        system("INFO.bat");
    //============= FIN AFFICHAGE
    for(;;){
    int i,j,start,sum=0,rep;
    char tableau_temp[87],tableau_user[1000];
    char tableau1[88]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','@','*','&','!','<','>','é','(',')','$','?','/',';',',','+','-',':','"','[',']','{','}','=','^','0','1','2','3','4','5','6','7','8','9'};
    char tableau2[88]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','@','*','&','!','<','>','é','(',')','$','?','/',';',',','+','-',':','"','[',']','{','}','=','^','0','1','2','3','4','5','6','7','8','9'};
    system("call Syst.bat");
    FILE *f=fopen("Random.code","r");
    fscanf(f,"%d",&start);
    fclose(f);
    printf("\n\n\t\t [ CHIFREMENT CRYCTOGRAPHY ]\n");
    printf("\n\t\t Metter votre Message \n\t\t ==> ");
    gets(tableau_user);
    for (i=0;i<101;i++){    system("cls");
                            printf("\n\n\n\t");
                            for (j=0;j<i;j++) { printf("\xB2"); }
                            printf("\n\t\t\t\t\t\tLOADING [ %d %% ]",i);
                            Sleep(strlen(tableau_user));
                        }
    for (j=start;j<start+1;j++)// pour calculer le tableau2 [ Qui est le tableau de la difference ]
            {
                for (i=0;i<strlen(tableau1);i++) // pour calculer le tableau1 [ Qui est le tableau fixe  ]
                     {
                     if ( tableau1[j] != NULL && sum != 88 )// si le tableau ou case contient un elements dedans cad on est pas à la fin tableau
                            {
                            tableau_temp[i]=tableau2[j];
                            sum=sum+1;
                            j++;
                            }
                      else if ( tableau1[j] == NULL && sum != 88 )// Si une fois la case devient vide
                            {
                            for (j=0;j<87-sum;j++)//c est pour renintialiser les tableau2 à O pour continuer l'operation.
                                    {
                                        for (i=sum;i<87;i++)// Mettre le contenu dans le tableau 2, Avec la limite de c dernier
                                            {
                                            tableau_temp[i]=tableau2[j];
                                            j++;
                                            }
                                    }
                            }
                        }
            }//================== WHRITTEN CARACTERS
            printf("\n\n\t\t\t | Size of your SMS [ %d ]   \t     |\n\n\t\t\t ==> ",strlen(tableau_user));
            sum=0;
            printf("%c",tableau1[start]);// Affichage de la cle dans la chaine
            for (j=0;j<strlen(tableau_user);j++)// calculer le tabeau entre de l'utilisateur
                    {
                        for (i=0;i<strlen(tableau1);i++)// calculer la position de l'index dans le tableau1
                        {
                            if (tableau_user[j] == tableau1[i])
                                    {
                                    printf("%c",tableau_temp[i]); sum=sum+1;
                                    Sleep(150);
                                    }
                        }
                    }
                    printf("\n\n\t\t\t Nombre des caracteres sortant : [ %d ] \n",sum+1);
                    getch();
                    }
    return 0;
}
