#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    int opc, valor;
    Fila<int> f(10);

    cout << "Fila Alocacao Sequencial\nJoao Victor Oliveira da Hora\nADS Manha - 3o Ciclo\n\n" << endl;

    do
    {
        cout << "Escolha uma opcao:\n1 - Inserir\n2 - Remover\n3 - Primeiro Item\n4 - Exibir Fila\n9 - Fim\nEscolha: ";
        cin >> opc; cout << "\n";

        switch(opc)
        {
        case 1:
            if(f.filaCheia())
                cout << "A fila esta cheia!" << endl;
            else
            {
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                f.insere(valor);
                cout << "\n";
            }
            break;
        case 2:
            if(f.filaVazia())
                cout << "A fila esta vazia!" << endl;
            else
                f.remover();
            break;
        case 3:
            cout << "Primeiro valor enfileirado: " << f.v[f.inicio] << endl;
            break;
        case 4:
            for(int i = f.inicio; i <= f.fim; i++)
            {
                cout << f.v[i] << endl;
            }
            break;
        case 9:
            cout << "FIM DA APLICACAO";
            break;
        }
    }while(opc != 9);
    return 0;
}
