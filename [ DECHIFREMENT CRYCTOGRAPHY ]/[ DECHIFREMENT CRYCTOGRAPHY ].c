#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{   //=============== AFFICHAGE
        system("color 60"); system("Title DECRYPTOGRAPHY [ DAN ]"); system("mode con cols=145 lines=25");
        char ch;
        FILE *fic=fopen("Graf.aff","r");
        do {        fscanf(fic,"%c",&ch);
                    if ( ch == '|') { break; }
                    else { printf("%c",ch); }
                    Sleep(2);
        }while (!feof(fic));
        fclose(fic);
        system("pause>nul");
    //============= FIN AFFICHAGE
    for(;;){
    system("cls");
    int i,j,start=0,sum=0,rep;
    char tableau_temp[87],tableau_user[1000];
    char tableau1[88]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','@','*','&','!','<','>','é','(',')','$','?','/',';',',','+','-',':','"','[',']','{','}','=','^','0','1','2','3','4','5','6','7','8','9'};
    char tableau2[88]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' ','@','*','&','!','<','>','é','(',')','$','?','/',';',',','+','-',':','"','[',']','{','}','=','^','0','1','2','3','4','5','6','7','8','9'};
    printf("\n\n\t\t [ DECHIFREMENT CRYCTOGRAPHY ]\n");
    printf("\n\t\t Metter votre Message \n\t\t ==> ");
    gets(tableau_user);
    //============= DETECTION DE LA CLE PAR LA PREMIERE LETTRE
    for (i=0;i<strlen(tableau1);i++)
            {
            if ( tableau_user[0] != tableau1[i]){ start=start+1; }
            else { break; }
            }
    //============= FIN AFFICHAGE
    for (i=0;i<101;i++){    system("cls");  printf("\n\n\n\t");
                            for (j=0;j<i;j++) { printf("\xB2"); }
                            printf("\n\t\t\t\t\t\tLOADING [ %d %% ]",i);
                            Sleep(strlen(tableau_user)*2);
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
            printf("\n\n\t | Size of your SMS [ %d ] |\n\n\t ==> ",strlen(tableau_user));
            sum=0;
            for (j=1;j<strlen(tableau_user)+1;j++)// calculer le tabeau entre de l'utilisateur
                    {
                        for (i=0;i<strlen(tableau1);i++)// calculer la position de l'index dans le tableau1||Pour avoir la possition de l'index du tablea1
                        {
                            if ( tableau_user[j] == tableau_temp[i])
                                    {
                                    printf("%c",tableau1[i]); sum=sum+1;
                                    Sleep(100);
                                    }
                        }
                    }printf("\n\n\t Nombre des caracteres sortant : [ %d ] \n",sum);
                    system("pause>nul");
                    }
    return 0;
}
