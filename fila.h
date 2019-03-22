#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename T>
struct Fila
{
    T *v;
    int inicio, fim, quantidade, tamanho;

    Fila(int tam)
    {
        tamanho = tam;
        v = new T[tamanho];
        inicio = 0;
        fim = -1;
        quantidade = 0;
    }
    ~Fila()
    {
        delete v;
    }
    void insere(T x)
    {
        fim++;
        if(fim == tamanho)
            fim = 0;
        v[fim] = x;
        quantidade++;
    }
    T remover()
    {
        T temp = v[inicio];
        inicio++;
        if(inicio == tamanho)
            inicio = 0;
        quantidade--;
        return temp;
    }
    T acesso()
    {
        return v[inicio];
    }
    bool filaVazia()
    {
        return quantidade == 0;
    }
    bool filaCheia()
    {
        return quantidade == tamanho;
    }
};

#endif // FILA_H_INCLUDED
