#ifndef RANDOMIZER.H
#define RANDOMIZER.H

#include <random>

class Randomizer {

// declara-se os atributos (que não são métodos) como privados
private:
        double errorProbability; // ajusta a probabilidade do erro
        double maxErrorMagnitude; // ajusta a tolerância do erro
        std::default_random_engine generator; // gerador de números aleatórios
        std::normal_distribution<double> gaussian; // distribuição normal

public:
        // constructor para iniciar valores
        Randomizer(double errorProb, double maxError);

        // função de decisão de erro
        bool isError();

        // gerador de erro
        double errorGen(double calcValue);

        // set magnitude
        void setErrorprobability(double prob);
        void setMaxErrorMagnitude(double mag);
};

#endif
