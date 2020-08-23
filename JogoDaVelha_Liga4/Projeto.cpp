#include<iostream>

#include <stdlib.h>

using namespace std;



int main()
{
    int n1, n2, n3, n4, n5, n6, jvelha;
    int m[3][3];


    //TELA 1//
    cout << "1: Jogar" << endl << "2: Sair" << endl;
    cout << "Digite a opção desejada: ";
    cin >> n1;
    cout << endl;

    while (n1 < 1 || n1 > 2)
    {
        cout << "Opcao invalida, escolha entre a opcao 1 e 2:";
        cin >> n1;
    }

    if(n1 == 1) // TELA 2
    {
        system("cls");
        cout << "1: Jogo 1" << endl << "2: Jogo 2" << endl;
        cout << "Digite a opção desejada: ";
        cin >> n2;
        cout << endl;

        while (n2 < 1 || n2 > 2)
        {
            cout << "Opcao invalida, escolha entre a opcao 1 e 2:";
            cin >> n2;
        }


            if(n2 == 1) //TELA 3 JOGO 1
            {
                system("cls");
                cout << "Instrucoes" << endl;

                cout << "1: Continuar" << endl << "2: Sair" << endl;
                cout << "Digite a opção desejada: ";
                cin >> n3;
                cout << endl;

                while (n3 < 1 || n3 > 2)
                {
                    cout << "Opcao invalida, escolha entre a opcao 1 e 2:";
                    cin >> n3;
                }

                    if(n3 == 1)
                        {
                        //INICIA JOGO 1

                        cout << "Olá jogador 1! Se deseja jogar com X digite 1, se deseja jogar com O digite 2?";
                        cin << jvelha;

                        while (jvelha < 1 || jvelha > 2)
                        {
                            cout << "Opcao invalida, escolha entre a opcao 1 e 2:";
                            cin >> jvelha;
                        }




                    }
                    else if(n3 == 2)
                        {
                        //SAIR
                        system("exit");
                        }


            }
            else if(n2 == 2) // TELA 3 JOGO 2
            {
                system("cls");
                cout << "Instrucoes" << endl;

                cout << "1: Continuar" << endl << "2: Sair" << endl;
                cout << "Digite a opção desejada: ";
                cin >> n5;
                cout << endl;

                while (n5 < 1 || n5 > 2)
                {
                    cout << "Opcao invalida, escolha entre a opcao 1 e 2:";
                    cin >> n5;
                }

                    if(n5 == 1)
                    {
                        //INICIA JOGO 2
                    }
                    else if(n5 == 2)
                    {
                        //SAIR
                    system("exit");
                    }
        }

    }
    else if (n1 == 2)//TELA 1
    {
        //SAIR
        system("exit");
    }
}
