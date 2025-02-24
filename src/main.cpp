/*
=== CALCULADORA QUE ERRA POR MUITO POUCO ===

 - Descrição: esta calculadora erra números inteiros em contas de qualquer ordem, com baixa
        probabilidade 

1. Adicionar as funções:
        adição
        subtração
        multiplicação
        divisão

2. Randomizar resultados:
        usar rand int com bias baixo

*/


#include "calculadora.h"
#include <iostream>
// #include <cstdlib>
// #include <ctime>
using namespace std;

int  main(){

        // criando uma instância da classe 
        Calculator calc;

        int opt;
        float a, b;

        while(true){
                cout << "Selecione uma opção: " << endl;
                cout << "1. Adição" << endl;
                cout << "2. Subtração" << endl;
                cout << "3. Multiplicação" << endl;
                cout << "4. Divisão" << endl;
                cout << "0. sair" << endl;
                cin >> opt;

                if (opt == 0) {
                        return 0;
                }

                cout << "Informe dois números:" << endl;
                cin >> a >> b;

                switch (opt){
                        case 1:
                                cout << calc.add(a, b) << endl;
                                break;
                        case 2:
                                cout << calc.sub(a, b) << endl;
                                break;
                        case 3:
                                cout << calc.mul(a, b) << endl;
                                break;
                        case 4:
                                cout << calc.idiv(a, b) << endl;
                                break;
                }
        }

        return 0;
}
