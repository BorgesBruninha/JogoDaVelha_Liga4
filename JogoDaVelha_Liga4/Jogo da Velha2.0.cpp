#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()

{
    setlocale(LC_ALL,"portuguese");

    int x, pos, b = 0, g = 0, contGanha1 = 0, contGanha2 = 0, contadorgeral = 0;   // var x = escolha do x ou O ; pos = posição ;  b = é p linha ; g = p coluna.

    char j1, j2, var = ' ';

    while(contadorgeral < 3 && contGanha1 != 2 && contGanha2 != 2) //Condição melhor de 3
    {
        int ganha = 0, ganhou=false, cont = 0;
        contadorgeral++;

        char m[3][3]; //Preenche o vetor com espaços em branco
        for( int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                m[i][j] = ' ';
            }
        } //Termina de preencher o vetor

        if(contadorgeral % 2 != 0)  //Se impar o jogador 1 inicia a rodada
        {
            cout << "Olá, jogador 1! " << endl;
            cout << "Digite 1 para escolher X, ou 2 para escolher O!" << endl;
            cin >> x; //Digitar 1 ou 2 para escolher x ou o

            while (x < 1 || x > 2)
            {
                cout << "Comando inválido! Escolha entre as opções 1 ou 2: " << endl;
                cin >> x;
            } //Caso o usuário digite um número inválido
            if(x == 1)
            {
                j1 = 'X'; //se jogador 1 escolher a opção 1 ele fica com x e o jogador 2 com o
                j2 = 'O';
            }
            else if(x == 2)
            {
                j1 = 'O'; //se jogador 1 escolher a opção 2 ele fica com o e o jogador 2 com x
                j2 = 'X';
            }
        }
        else
        { //Se não for par o jogador 2 que inicia a jogada
            cout << "Olá, jogador 2! " << endl;
            cout << "Digite 1 para escolher X, ou 2 para escolher O!" << endl;
            cin >> x; //Digitar 1 ou 2 para escolher x ou o

            while (x < 1 || x > 2)
            {
                cout << "Comando inválido! Escolha entre as opções 1 ou 2: " << endl;
                cin >> x;
            } //Caso o usuário digite um número inválido
            if(x == 2)
            {
                j1 = 'X'; //se jogador 1 escolher a opção 1 ele fica com x, e o jogador 2 com O
                j2 = 'O';
            }
            else if(x == 1)
            {
                j1 = 'O'; //se jogador 1 escolher a opção 2 ele fica com O, e o jogador 2 com X
                j2 = 'X';
            }
        }
        system("cls"); //Limpar tela

        do
        {
            cont++; // contador pra saber quando é a vez de cada jogador

            cout << "                                         -------     " << endl;
            cout << "                                         EXEMPLO     " << endl; //Esse daqui é um exemplo pra mostrar ao usuário como preencher
            cout << "                                         -------     " << endl;

            for (int i = 2; i >= 0; i--)  //Esse for aqui é pra imprimir a matriz e o exemplo de jogo
            {
                if(i == 2)
                {
                    cout << endl << "     |      |                            |     |";
                }
                cout << endl;

                for (int k = 0; k < 3; k++)
                {
                    cout << " " << m[i][k] << "   ";
                    if(k < 2)
                    {
                        cout << "| ";
                    }

                }
                if(i == 0)
                {
                    cout << "                   " << i+1 << "  |  " << i+2 << "  |  " << i+3; //Preenchendo linhas do exemplo
                }
                else if(i == 1)
                {
                    cout << "                   " << i+3 << "  |  " << i+4 << "  |  " << i+5; //Preenchendo linhas do exemplo
                }
                else if(i == 2)
                {
                    cout << "                   " << i+5 << "  |  " << i+6 << "  |  " << i+7; //Preenchendo linhas do exemplo
                }

                if(i > 0)

                {
                    cout << endl << "_____|______|_____                  _____|_____|_____";
                }
                cout << endl << "     |      |                            |     |";
            } //Até aqui é imprimindo a matriz e o exemplo de jogo

            if(contadorgeral%2!=0) //Condição para indicar vez do jogador ganhar
            {
                if(cont %2 != 0)   // contador impar = vez do jogador 1; contt par = vez do jogador 2
                {
                    var = j1; //Aqui quando o contador for impar var recebe a variável do jogador um, por exemplo, x de j1 for x
                    cout << endl << "Jogador 1,  ";
                }
                else
                {
                    var = j2; //Aqui é pra jogadas impares, ou seja, vez do jogador 2
                    cout << endl << "Jogador 2, ";
                }

            }
            else
            {
                if(cont %2 != 0)   // contador impar = vez do jogador 1; contt par = vez do jogador 2
                {
                    var = j2; //Aqui quando o contador for impar var recebe a variável do jogador um, por exemplo, x de j1 for x
                    cout << endl << "Jogador 2,  ";
                }
                else
                {
                    var = j1; //Aqui é pra jogadas impares, ou seja, vez do jogador 2
                    cout << endl << "Jogador 1, ";
                }
            }

            do
            {
                cout << "digite a posição de 1 a 9, baseado no exemplo dado: "; //Aqui pede pra o usuário digitar o lugar onde ele quer jogar
                cin >> pos;

                switch(pos)
                {
                //p dar um valor a b e g
                case 1:
                    b = g = 0;
                    break;
                case 2:
                    b = 0;
                    g = 1;
                    break;
                case 3:
                    b = 0;
                    g = 2;
                    break;
                case 4:
                    b = 1;
                    g = 0;
                    break;
                case 5:
                    b = 1;
                    g = 1;
                    break;
                case 6:
                    b = 1;
                    g = 2;
                    break;
                case 7:
                    b = 2;
                    g = 0;
                    break;
                case 8:
                    b = 2;
                    g = 1;
                    break;
                case 9:
                    b = 2;
                    g = 2;
                    break;
                default:
                    b = 10;
                }
            }
            while(pos < 1 || pos > 9 || m[b][g] != ' ');  //  vai rodar até o usuario jogar uma pos válida.

            m[b][g] = var; // p preencher onde o usuário quer jogar
            //Linha
            if((m[0][0] == m[0][1]) && (m[0][1] == m[0][2]) && (m[0][0] != ' ')) //Se primeira linha for igual
            {
                if(m[0][0] == j1) //Se primeira linha for completa pela variavel do jogador 1
                {
                    contGanha1++; //Seu contador recebe 1 ponto
                    ganha = 1; //Indica que o jogador 1 ganhou
                }
                else
                {//Se primeira linha for completp pela variavel do jogador 2
                    contGanha2++; //Seu contador recebe 1 ponto
                    ganha = 2; //Indica que o jogador 1 ganhou
                }
                ganhou = true; //A variável ganhou se torna verdadeira, para sair de dentro do while
            }
            else if((m[1][0] == m[1][1]) && (m[1][1] == m[1][2]) && (m[1][0] != ' ')) //Se segunda linha for completa
            {
                if(m[1][0] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            else if((m[2][0] == m[2][1]) && (m[2][1] == m[2][2]) && (m[2][0] != ' '))//Se terceira linha for completa
            {
                if(m[2][0] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            //Coluna
            else if((m[0][0] == m[1][0]) && (m[1][0] == m[2][0]) && (m[0][0] != ' ')) //Se primeira coluna for completa
            {
                if(m[0][0] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            else if((m[0][1] == m[1][1]) && (m[1][1] == m[2][1]) && (m[0][1] != ' '))//Se segunda coluna for completa
            {
                if(m[0][1] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            else if((m[0][2] == m[1][2]) && (m[1][2] == m[2][2]) && (m[0][2] != ' ')) //Se terceira coluna for completa
            {
                if(m[0][2] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            //Diagonal
            else if((m[0][2] == m[1][1]) && (m[1][1] == m[2][0]) && (m[0][2] != ' ')) //Se Diagonal for completa
            {
                if(m[0][2] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            else if((m[0][0] == m[1][1]) && (m[1][1] == m[2][2]) && (m[0][0] != ' ')) //Se Diagonal for completa 1
            {
                if(m[0][0] == j1)
                {
                    contGanha1++;
                    ganha = 1;
                }
                else
                {
                    contGanha2++;
                    ganha = 2;
                }
                ganhou = true;
            }
            system("cls");
        }
        while(ganhou != true && cont < 9); //Se ganhar ou o todas as posições forem preenchidas ele sai do while

        for (int i = 2; i >= 0; i--) // Mostra o jogo(tabuleiro) finalizado
        {
            if(i == 2) //Imprime a matriz completa
            {
                cout << endl << "     |      |     ";
            }
            cout << endl;
            for (int k = 0; k < 3; k++)
            {
                cout << " " << m[i][k] << "   ";
                if(k < 2)
                {
                    cout << "| ";
                }
            }
            if(i > 0)
            {
                cout << endl << "_____|______|____";
            }
            cout << endl << "     |      |     ";
        }
        //Termina

        if(ganhou == true)
        {
            if(ganha == 1)
            {
                cout << endl;
                cout << endl << "PARABÉNS, JOGADOR 1! VOCÊ GANHOU ESSA RODADA!" << endl;
                cout << "---------------------------------------------" << endl << endl;
            }
            else if(ganha == 2)
            {
                cout << endl;
                cout << endl << "PARABÉNS, JOGADOR 2! VOCÊ GANHOU ESSA RODADA!" << endl;
                cout << "---------------------------------------------" << endl << endl;
            }
        }
        else
        {
            cout << endl;
            cout << endl << "Velha!" << endl;
            cout << "------ " << endl << endl;
        }
    }
    cout << "- ------- - ------- - ------" << endl;
    cout << "O jogador 1 marcou: " << contGanha1 << " pontos" << endl;
    cout << "O jogador 2 marcou: " << contGanha2 << " pontos" << endl;
    cout << "- ------- - ------- - ------ " << endl;

    if(contGanha1 > contGanha2)
    {
        cout << endl;
        cout << " --- -- -----" << endl;
        cout << " FIM DE JOGO!" << endl;
        cout << " --- -- -----" << endl;
        cout << endl;
        cout << "PARABÉNS, JOGADOR 1! VOCÊ FOI O CAMPEÃO!" << endl;
        cout << "--------- ------- -- ---- --- - --------" << endl;
        cout << endl;
    }

    else if(contGanha2 > contGanha1)
    {
        cout << endl;
        cout << " --- -- -----" << endl;
        cout << " FIM DE JOGO!" << endl;
        cout << " --- -- -----" << endl;
        cout << endl;
        cout << "PARABÉNS, JOGADOR 2! VOCÊ FOI O CAMPEÃO!" << endl;
        cout << "--------- ------- -- ---- --- - --------" << endl;

    }
    else if(contGanha1 == contGanha2)
    {

        cout << endl;
        cout << " --- -- -----" << endl;
        cout << " FIM DE JOGO!" << endl;
        cout << " --- -- -----" << endl << endl;
        cout << endl;
        cout << "JOGO EMPATADO!" << endl;
        cout << "---- ---------";

    }

}




