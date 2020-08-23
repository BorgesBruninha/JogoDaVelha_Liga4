#include <iostream>
#include <locale.h> //        system("cls");
#include <windows.h> // p mudar cor

using namespace std;

int main()
{
    //system("color F0");

    setlocale(LC_ALL,"portuguese");

    int ganhar = false, cont = 0, col, contTopo = 0, contTopo2 = 0, contTopo3 = 0, contTopo4 = 0, contTopo5 = 0, contTopo6 = 0, contTopo7 = 0, vencedor;

    // cont para determinar a vez de cd jogador, impar = j1, par=j2

    char j1 = 'B', j2 = 'P', var;

    //var p receber a posição de cd jogador

    char m[6][7]; //char pq vai entrar uma letra

    for (int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            m[i][j] = ' '; //implementar o tbuleiro c vazios
        }
    }
    do
    {
        cont++;

        cout << "   1     2     3     4     5     6     7   "; //numeração das colunas

        for (int i = 0; i < 6; i++) //Esse for aqui é pra imprimir a matriz
        {
            if(i == 0)
            {
                cout << endl << "|     |     |     |     |     |     |     |"; //nap imeira linha poe isso
            }
            cout << endl;
            for (int k = 0; k < 7; k++)
            {
                cout << "|  " << m[i][k] << "  "; //preenche a coluna c |

                if(k == 6)
                {
                    cout << "|";
                }
            }
            cout << endl << "|_____|_____|_____|_____|_____|_____|_____|";

            if(i < 5)  //se por 6, aparece +1 embaixo
            {
                cout << endl << "|     |     |     |     |     |     |     |";
            }
        } //Até aqui é imprimindo a matriz

        do
        {
            if(cont%2!=0)  //if p determinar a vez de cd jogador
            {
                cout << endl << endl << "Jogador 1, ";
                var = j1;
            }
            else
            {
                cout << endl << endl << "Jogador 2, ";
                var = j2;
            }

            cout << "escolha a coluna!" << endl;
            cin >> col;

            while(col < 1 || col > 7)
            {
                cout << "Errou! escolha a coluna!" << endl;
                cin >> col;
            }


            if(col == 1)
            {
                contTopo++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
            else if(col == 2)
            {
                contTopo2++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
            else if(col == 3)
            {
                contTopo3++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
            else if (col == 4)
            {
                contTopo4++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
            else if(col == 5)
            {
                contTopo5++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
            else if(col == 6)
            {
                contTopo6++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
            else if(col == 7)
            {
                contTopo7++;
                if(m[5][col-1] == ' ')
                {
                    m[5][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] == ' ')
                {
                    m[4][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] == ' ')
                {
                    m[3][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] == ' ')
                {
                    m[2][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] == ' ')
                {
                    m[1][col-1] = var;
                }
                else if(m[5][col-1]!= ' ' && m[4][col-1] != ' ' && m[3][col-1] != ' ' && m[2][col-1] != ' ' && m[1][col-1] != ' ' && m[0][col-1])
                {
                    m[0][col-1] = var;
                }
            }
        }
        while((col == 1 && contTopo >= 7) || (col == 2 && contTopo2 >= 7) || (col == 3 && contTopo3 >= 7) || (col == 4 && contTopo4 >= 7) || (col == 5 && contTopo5 >= 7) || (col == 6 && contTopo6 >= 7) || (col == 7 && contTopo7 >= 7));

        //coluna

        for(int i = 0; i < 7; i++){

        if(m[0][i] == m[1][i] && m[1][i] == m[2][i] && m[2][i] == m[3][i] && (m[0][i] != ' '))
    {
        ganhar = true;
        if(m[0][i] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[1][i] == m[2][i] && m[2][i] == m[3][i] && m[3][i] == m[4][i] && (m[1][i] != ' '))
    {
        ganhar = true;
        if(m[1][i] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[2][i] == m[3][i] && m[3][i] == m[4][i] && m[4][i] == m[5][i] && (m[2][i] != ' '))
    {
        ganhar = true;
        if(m[2][i] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[3][i] == m[4][i] && m[4][i] == m[5][i] && m[5][i] == m[6][i] && (m[3][i] != ' '))
    {
        ganhar = true;
        if(m[3][i] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }

        }

        //linha

        for(int i = 0; i < 6; i++){

        if(m[i][0] == m[i][1] && m[i][1] == m[i][2] && m[i][2] == m[i][3] && (m[i][0] != ' '))
    {
        ganhar = true;
        if(m[i][0] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i][1] == m[i][2] && m[i][2] == m[i][3] && m[i][3] == m[i][4] && (m[i][1] != ' '))
    {
        ganhar = true;
        if(m[i][1] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i][2] == m[i][3] && m[i][3] == m[i][4] && m[i][4] == m[i][5] && (m[i][2] != ' '))
    {
        ganhar = true;
        if(m[i][1] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i][3] == m[i][4] && m[i][4] == m[i][5] && m[i][5] == m[i][6] && (m[i][3] != ' '))
    {
        ganhar = true;
        if(m[i][1] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }

        }

        //Diagonal


        //Diagonal secundaria

        //Diagonal com 6 quadrados
        for(int i = 0; i < 3; i++){

        if(m[i][i] == m[i+1][i+1] && m[i+1][i+1] == m[i+2][i+2] && m[i+2][i+2] == m[i+3][i+3] && (m[i][i] != ' '))
    {
        ganhar = true;
        if(m[i][i] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i][i+1] == m[i+1][i+2] && m[i+1][i+2] == m[i+2][i+3] && m[i+2][i+3] == m[i+3][i+4] && (m[i][i+1] != ' '))
    {
        ganhar = true;
        if(m[i][i+1] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }

        }
        //Diagonal com 5 quadrados
        for(int i = 0; i < 2; i++){
         if(m[i][i+2] == m[i+1][i+3] && m[i+1][i+3] == m[i+2][i+4] && m[i+2][i+4] == m[i+3][i+5] && (m[i][i+2] != ' '))
    {
        ganhar = true;
        if(m[i][i+2] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i+1][i] == m[i+2][i+1] && m[i+2][i+1] == m[i+3][i+2] && m[i+3][i+2] == m[i+4][i+3] && (m[i+1][i] != ' '))
    {
        ganhar = true;
        if(m[i+1][i] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }
        }

        //Diagonal com 4 quadrados
        if(m[2][0] == m[3][1] && m[3][1] == m[4][2] && m[4][2] == m[5][3] && (m[2][0] != ' '))
    {
        ganhar = true;
        if(m[2][0] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[0][3] == m[1][4] && m[1][4] == m[2][5] && m[2][5] == m[3][6] && (m[0][3] != ' '))
    {
        ganhar = true;
        if(m[0][3] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }

        //Diagonal secundária

        //Com 6 quadrados
        for(int i = 0; i < 3; i++){
            for(int j = 6; j > 3; j--){
                 if(m[i][j] == m[i+1][j-1] && m[i+1][j-1] == m[i+2][j-2] && m[i+2][j-2] == m[i+3][j-3] && (m[i][j] != ' '))
    {
        ganhar = true;
        if(m[i][j] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i][j-1] == m[i+1][j-2] && m[i+1][j-2] == m[i+2][j-3] && m[i+2][j-3] == m[i+3][j-4] && (m[i][j-1] != ' '))
    {
        ganhar = true;
        if(m[i][j-1] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
            }
        }
        }

        //com 5 quadrados

        for(int i = 0; i < 2; i++){
            for(int j = 6; j > 4; j--){
                 if(m[i][j-2] == m[i+1][j-3] && m[i+1][j-3] == m[i+2][j-4] && m[i+2][j-4] == m[i+3][j-5] && (m[i][j-2] != ' '))
    {
        ganhar = true;
        if(m[i][j-2] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[i+1][j] == m[i+2][j-1] && m[i+2][j-1] == m[i+3][j-2] && m[i+3][j-2] == m[i+4][j-3] && (m[i+1][j] != ' '))
    {
        ganhar = true;
        if(m[i+1][j] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
            }
        }
        }

        //Com 4 quadrados

        if(m[0][3] == m[1][2] && m[1][2] == m[2][1] && m[2][1] == m[3][0] && (m[0][3] != ' '))
    {
        ganhar = true;
        if(m[0][3] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
        }else if(m[2][6] == m[3][5] && m[3][5] == m[4][4] && m[4][4] == m[5][3] && (m[2][6] != ' '))
    {
        ganhar = true;
        if(m[2][6] == j1)
            {
                vencedor = 1;
            }
            else
            {
                vencedor = 2;
            }
            }
        //cls

        system("cls");
    }
    while(ganhar == false);

    cout << "   1     2     3     4     5     6     7   "; //numeração das colunas

        for (int i = 0; i < 6; i++) //Esse for aqui é pra imprimir a matriz
        {
            if(i == 0)
            {
                cout << endl << "|     |     |     |     |     |     |     |"; //nap imeira linha poe isso
            }
            cout << endl;
            for (int k = 0; k < 7; k++)
            {
                cout << "|  " << m[i][k] << "  "; //preenche a coluna c |

                if(k == 6)
                {
                    cout << "|";
                }
            }
            cout << endl << "|_____|_____|_____|_____|_____|_____|_____|";

            if(i < 5)  //se por 6, aparece +1 embaixo
            {
                cout << endl << "|     |     |     |     |     |     |     |";
            }
        }

        if(vencedor == 1){
            cout << endl << "PARABÉNS JOGADOR 1" << endl;
        }else{
            cout << endl << "PARABÉNS JOGADOR 2" << endl;
        }
}

