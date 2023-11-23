#include "flow_test.hpp"

// Construtores do exponential flow
ExponentialFlow::ExponentialFlow():Flow() {}
ExponentialFlow::ExponentialFlow(string name, double stock, System* source, System* target)
    : Flow(source, target, name) {}

// sobrescrita do run para o exponential flow
double ExponentialFlow::run(){
    return 0.01 * getSource()->getStock();
}



// Construtores do logistical flow
LogisticalFlow ::LogisticalFlow():Flow() {}
LogisticalFlow ::LogisticalFlow(string name, double stock, System* source, System* target)
    : Flow(source, target, name) {}

// sobrescrita do run para o logistical flow
double LogisticalFlow ::run(){
    double stock = getTarget()->getStock();
    return 0.01 * stock * (1 - stock / 70);
}


// Construtores do complex flow
ComplexFlow ::ComplexFlow():Flow() {}
ComplexFlow ::ComplexFlow(string name, double stock, System* source, System* target)
    : Flow(source, target, name) {}

// sobrescrita do run para o logistical flow
double ComplexFlow ::run(){
    return 0.01 * getSource()->getStock();
}
