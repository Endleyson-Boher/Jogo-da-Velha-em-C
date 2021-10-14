#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include <windows.h>

int a, b, c, d, jogada, posicao;
char tabuleiro[4][3]= {' '};
char simbolo;


verificaPosicaoX()
{

    if((posicao==7)&&(tabuleiro[3][0]==0))
    {
        tabuleiro[3][0]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==8)&&(tabuleiro[0][1]==0))
    {
        tabuleiro[0][1]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==9)&&(tabuleiro[0][2]==0))
    {
        tabuleiro[0][2]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==4)&&(tabuleiro[1][0]==0))
    {
        tabuleiro[1][0]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==5)&&(tabuleiro[1][1]==0))
    {
        tabuleiro[1][1]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==6)&&(tabuleiro[1][2]==0))
    {
        tabuleiro[1][2]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==1)&&(tabuleiro[2][0]==0))
    {
        tabuleiro[2][0]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==2)&&(tabuleiro[2][1]==0))
    {
        tabuleiro[2][1]='X';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==3)&&(tabuleiro[2][2]==0))
    {
        tabuleiro[2][2]='X';
    }

}

/*--------------------------------------------------------------------------------------------------------------------------------------------------*/

verificaPosicaoO()
{

    if((posicao==7)&&(tabuleiro[3][0]==0))
    {
        tabuleiro[3][0]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==8)&&(tabuleiro[0][1]==0))
    {
        tabuleiro[0][1]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==9)&&(tabuleiro[0][2]==0))
    {
        tabuleiro[0][2]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==4)&&(tabuleiro[1][0]==0))
    {
        tabuleiro[1][0]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==5)&&(tabuleiro[1][1]==0))
    {
        tabuleiro[1][1]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==6)&&(tabuleiro[1][2]==0))
    {
        tabuleiro[1][2]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==1)&&(tabuleiro[2][0]==0))
    {
        tabuleiro[2][0]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==2)&&(tabuleiro[2][1]==0))
    {
        tabuleiro[2][1]='O';
    }
    /*-------------------------------------------------------------------------*/
    if((posicao==3)&&(tabuleiro[2][2]==0))
    {
        tabuleiro[2][2]='O';
    }

}

/*--------------------------------------------------------------------------------------------------------------------------------------------------*/


int main()
{

    setlocale(LC_ALL, "PORTUGUESE");

    printf("\n\n");
    printf("*JOGO DA VELHA* \n--------------------------------------------------------------------------------------------\n REGRAS:\n\n * Cada jogador deve digitar uma posição de acordo com os números no teclado;\n\n * O 'X' sempre virá primeiro; \n\n * SE O JOGADOR DIGITAR UMA POSIÇÃO QUE JA  ESTA OCUPADA SUA JOGADA SERÁ PULADA!!! \n--------------------------------------------------------------------------------------------\n");
    printf("____________________________\n\n");
    printf("+         |      |         +\n");
    printf("+     7   |   8  |  9      +\n");
    printf("+         |      |         +\n");
    printf("+   ------+------+------   +\n");
    printf("+         |      |         +\n");
    printf("+     4   |   5  |  6      +\n");
    printf("+         |      |         +\n");
    printf("+   ------+------+------   +\n");
    printf("+         |      |         +\n");
    printf("+     1   |   2  |  3      +\n");
    printf("+         |      |         +\n");
    printf("____________________________\n");
    printf(" \n");
    for(a=0; a<20; a++)
    {
        if(a%2==0)
        {
            simbolo='X';
            printf("'x':digite a posição: ");
            scanf("%i",&posicao);
            verificaPosicaoX();
            system("cls");
            printf("_______________________________________________________\n\n");
            printf("         |      |          +         |      |     \n");
            printf("     %c   |  %c   |  %c       +     7   |   8  |  9  \n", tabuleiro[3][0], tabuleiro[0][1], tabuleiro[0][2]);
            printf("         |      |          +         |      |     \n");
            printf("   ------+------+------    +   ------+------+------\n");
            printf("         |      |          +         |      |     \n");
            printf("     %c   |  %c   |  %c       +     4   |   5  |  6  \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
            printf("         |      |          +         |      |     \n");
            printf("   ------+------+------    +   ------+------+------\n");
            printf("         |      |          +         |      |     \n");
            printf("     %c   |  %c   |  %c       +     1   |   2  |  3  \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
            printf("         |      |          +         |      |     \n");
            printf("_______________________________________________________\n");
            printf(" \n");


            if((tabuleiro[3][0]=='X')&&(tabuleiro[0][1]=='X')&&(tabuleiro[0][2]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[1][0]=='X')&&(tabuleiro[1][1]=='X')&&(tabuleiro[1][2]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[2][0]=='X')&&(tabuleiro[2][1]=='X')&&(tabuleiro[2][2]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[3][0]=='X')&&(tabuleiro[1][0]=='X')&&(tabuleiro[2][0]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][1]=='X')&&(tabuleiro[1][1]=='X')&&(tabuleiro[2][1]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][2]=='X')&&(tabuleiro[1][2]=='X')&&(tabuleiro[2][2]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[3][0]=='X')&&(tabuleiro[1][1]=='X')&&(tabuleiro[2][2]=='X'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][2]=='X')&&(tabuleiro[1][1]=='X')&&(tabuleiro[2][0]=='X'))

            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            if((tabuleiro[3][0]!=0)&&(tabuleiro[0][1]!=0)&&(tabuleiro[0][2]!=0)&&(tabuleiro[1][0]!=0)&&(tabuleiro[1][1]!=0)&&(tabuleiro[1][2]!=0)&&(tabuleiro[2][0]!=0)&&(tabuleiro[2][1]!=0)&&(tabuleiro[2][2]!=0))
            {
                printf("Ops!!! Deu velha!!!");
                break;
            }

        }
        else
        {
            simbolo='O';
            printf("'o':digite a posição: ");
            scanf("%i",&posicao);
            verificaPosicaoO();
            system("cls");
            printf("_______________________________________________________\n\n");
            printf("         |      |          +         |      |     \n");
            printf("     %c   |  %c   |  %c       +     7   |   8  |  9  \n", tabuleiro[3][0], tabuleiro[0][1], tabuleiro[0][2]);
            printf("         |      |          +         |      |     \n");
            printf("   ------+------+------    +   ------+------+------\n");
            printf("         |      |          +         |      |     \n");
            printf("     %c   |  %c   |  %c       +     4   |   5  |  6  \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
            printf("         |      |          +         |      |     \n");
            printf("   ------+------+------    +   ------+------+------\n");
            printf("         |      |          +         |      |     \n");
            printf("     %c   |  %c   |  %c       +     1   |   2  |  3  \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
            printf("         |      |          +         |      |     \n");
            printf("_______________________________________________________\n");
            printf(" \n");


            if((tabuleiro[3][0]=='O')&&(tabuleiro[0][1]=='O')&&(tabuleiro[0][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[1][0]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[1][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[2][0]=='O')&&(tabuleiro[2][1]=='O')&&(tabuleiro[2][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[3][0]=='O')&&(tabuleiro[1][0]=='O')&&(tabuleiro[2][0]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][1]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[2][1]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[1][0]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[1][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[2][0]=='O')&&(tabuleiro[2][1]=='O')&&(tabuleiro[2][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[3][0]=='O')&&(tabuleiro[1][0]=='O')&&(tabuleiro[2][0]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][1]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[2][1]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][2]=='O')&&(tabuleiro[1][2]=='O')&&(tabuleiro[2][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[3][0]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[2][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][2]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[2][0]=='O'))

            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][2]=='O')&&(tabuleiro[1][2]=='O')&&(tabuleiro[2][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[3][0]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[2][2]=='O'))
            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            /*-------------------------------------------------------------------------------*/
            if((tabuleiro[0][2]=='O')&&(tabuleiro[1][1]=='O')&&(tabuleiro[2][0]=='O'))

            {
                printf("Parabéns!! Temos um ganhador!!!");
                break;
            }
            if((tabuleiro[3][0]!=0)&&(tabuleiro[0][1]!=0)&&(tabuleiro[0][2]!=0)&&(tabuleiro[1][0]!=0)&&(tabuleiro[1][1]!=0)&&(tabuleiro[1][2]!=0)&&(tabuleiro[2][0]!=0)&&(tabuleiro[2][1]!=0)&&(tabuleiro[2][2]!=0))
            {
                printf("Ops!!! Deu velha!!!");
                break;
            }

        }
    }
    Beep(660,100);
    Sleep(150);
    Beep(660,100);
    Sleep(300);
    Beep(660,100);
    Sleep( 300);
    Beep(510,100);
    Sleep( 100);
    Beep(660,100);
    Sleep( 300);
    Beep(770,100);
    Sleep( 550);
    Beep(380,100);
    Sleep( 575);
    Beep(510,100);
    Sleep( 450);
    Beep(380,100);
    Sleep( 400);
    Beep(320,100);
    Sleep( 500);
    Beep(440,100);
    Sleep( 300);
    Beep(480,80);
    Sleep( 330);
    Beep(450,100);
    Sleep( 150);
    Beep(430,100);
    Sleep( 300);
    Beep(380,100);
    Sleep( 200);
    Beep(660,80);
    Sleep( 200);
    Beep(760,50);
    Sleep( 150);
    Beep(860,100);
    Sleep( 300);
    Beep(700,80);
    Sleep( 150);
    Beep(760,50);
    Sleep( 350);
    Beep(660,80);
    Sleep( 300);
    Beep(520,80);
    Sleep( 150);
    Beep(580,80);
    Sleep( 150);
    Beep(480,80);
    Sleep( 500);
    Beep(510,100);
    Sleep( 450);
    Beep(380,100);
    Sleep( 400);
    Beep(320,100);
    Sleep( 500);
    Beep(440,100);
    Sleep( 300);
    Beep(480,80);
    Sleep( 330);
    Beep(450,100);
    Sleep( 150);
    Beep(430,100);
    Sleep( 300);
    Beep(380,100);
    Sleep( 200);
    Beep(660,80);
    Sleep( 200);
    Beep(760,50);
    Sleep( 150);
    Beep(860,100);
    Sleep( 300);
    Beep(700,80);
    Sleep( 150);
    Beep(760,50);
    Sleep( 350);
    Beep(660,80);
    Sleep( 300);
    Beep(520,80);
    Sleep( 150);
    Beep(580,80);
    Sleep( 150);
    Beep(480,80);
    Sleep( 500);
    Beep(500,100);
    Sleep( 300);
    Beep(760,100);
    Sleep( 100);
    Beep(720,100);
    Sleep( 150);
    Beep(680,100);
    Sleep( 150);
    Beep(620,150);
    Sleep( 300);
    Beep(650,150);
    Sleep( 300);
    Beep(380,100);
    Sleep( 150);
    Beep(430,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 300);
    Beep(430,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 100);
    Beep(570,100);
    Sleep( 220);
    Beep(500,100);
    Sleep( 300);
    Beep(760,100);
    Sleep( 100);
    Beep(720,100);
    Sleep( 150);
    Beep(680,100);
    Sleep( 150);
    Beep(620,150);
    Sleep( 300);
    Beep(650,200);
    Sleep( 300);
    Beep(1020,80);
    Sleep( 300);
    Beep(1020,80);
    Sleep( 150);
    Beep(1020,80);
    Sleep( 300);
    Beep(380,100);
    Sleep( 300);
    Beep(500,100);
    Sleep( 300);
    Beep(760,100);
    Sleep( 100);
    Beep(720,100);
    Sleep( 150);
    Beep(680,100);
    Sleep( 150);
    Beep(620,150);
    Sleep( 300);
    Beep(650,150);
    Sleep( 300);
    Beep(380,100);
    Sleep( 150);
    Beep(430,100);
    Sleep(150);
    Beep(500,100);
    Sleep(300);
    Beep(430,100);
    Sleep(150);
    Beep(500,100);
    Sleep( 100);
    Beep(570,100);
    Sleep(420);
    Beep(585,100);
    Sleep(450);
    Beep(550,100);
    Sleep( 420);
    Beep(500,100);
    Sleep(360);
    Beep(380,100);
    Sleep(300);
    Beep(500,100);
    Sleep(300);
    Beep(500,100);
    Sleep( 150);
    Beep(500,100);
    Sleep(300);
    Beep(500,100);
    Sleep(300);
    Beep(760,100);
    Sleep( 100);
    Beep(720,100);
    Sleep( 150);
    Beep(680,100);
    Sleep( 150);
    Beep(620,150);
    Sleep( 300);
    Beep(650,150);
    Sleep( 300);
    Beep(380,100);
    Sleep( 150);
    Beep(430,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 300);
    Beep(430,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 100);
    Beep(570,100);
    Sleep( 220);
    Beep(500,100);
    Sleep( 300);
    Beep(760,100);
    Sleep( 100);
    Beep(720,100);
    Sleep( 150);
    Beep(680,100);
    Sleep( 150);
    Beep(620,150);
    Sleep( 300);
    Beep(650,200);
    Sleep( 300);
    Beep(1020,80);
    Sleep( 300);
    Beep(1020,80);
    Sleep( 150);
    Beep(1020,80);
    Sleep( 300);
    Beep(380,100);
    Sleep( 300);
    Beep(500,100);
    Sleep( 300);
    Beep(760,100);
    Sleep( 100);
    Beep(720,100);
    Sleep( 150);
    Beep(680,100);
    Sleep( 150);
    Beep(620,150);
    Sleep( 300);
    Beep(650,150);
    Sleep( 300);
    Beep(380,100);
    Sleep( 150);
    Beep(430,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 300);
    Beep(430,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 100);
    Beep(570,100);
    Sleep( 420);
    Beep(585,100);
    Sleep( 450);
    Beep(550,100);
    Sleep( 420);
    Beep(500,100);
    Sleep( 360);
    Beep(380,100);
    Sleep( 300);
    Beep(500,100);
    Sleep( 300);
    Beep(500,100);
    Sleep( 150);
    Beep(500,100);
    Sleep( 300);
    Beep(500,60);
    Sleep( 150);
    Beep(500,80);
    Sleep( 300);
    Beep(500,60);
    Sleep( 350);
    Beep(500,80);
    Sleep( 150);
    Beep(580,80);
    Sleep( 350);
    Beep(660,80);
    Sleep( 150);
    Beep(500,80);
    Sleep( 300);
    Beep(430,80);
    Sleep( 150);
    Beep(380,80);
    Sleep( 600);
    Beep(500,60);
    Sleep( 150);
    Beep(500,80);
    Sleep( 300);
    Beep(500,60);
    Sleep( 350);
    Beep(500,80);
    Sleep( 150);
    Beep(580,80);
    Sleep( 150);
    Beep(660,80);
    Sleep( 550);
    Beep(870,80);
    Sleep( 325);
    Beep(760,80);
    Sleep( 600);
    Beep(500,60);
    Sleep( 150);
    Beep(500,80);
    Sleep( 300);
    Beep(500,60);
    Sleep( 350);
    Beep(500,80);
    Sleep( 150);
    Beep(580,80);
    Sleep( 350);
    Beep(660,80);
    Sleep( 150);
    Beep(500,80);
    Sleep( 300);
    Beep(430,80);
    Sleep( 150);
    Beep(380,80);
    Sleep( 600);
    Beep(660,100);
    Sleep( 150);
    Beep(660,100);
    Sleep( 300);
    Beep(660,100);
    Sleep( 300);
    Beep(510,100);
    Sleep( 100);
    Beep(660,100);
    Sleep( 300);
    Beep(770,100);
    Sleep( 550);
    Beep(380,100);
    Sleep( 575);
}
