#ifndef FLOW_TEST_HPP
#define FLOW_TEST_HPP
#include "../../../src/Flow.hpp"
using namespace std;
/**
 * @brief Exponential flow class derived from flow.
 *
 * Represents a exponential interaction beetween systems, where the value
 * taken from and given to the classes are exponential.
 * Its only purpose is to implement the pure virutal method run(), from flow.
 * 
 */
class ExponentialFlow : public Flow {

    public:

        /**
         * @brief ExponentialFlow default constructor.
         *
         * Calls the flow default constructor to instance a derived class object.
         * 
         */
        ExponentialFlow();

        /**
         * @brief ExponentialFlow complete constructor.
         *
         * Calls the flow complete constructor to instance a derived class object.
         * 
         */
        ExponentialFlow(string name, double stock, System* source, System* target);

        /**
         * @brief run method override.
         *
         * Takes a set stock defined by a simple math equation from the source System and returns it.
         * 
         * @return returns the stock it got from the equation, used to update the Systems stocks.
         * 
         */
        double run();


};

/**
 * @brief Logistical flow class derived from flow.
 *
 * Represents a logistical interaction beetween systems, flow is sort of inverted,
 * taking the stock from the target System and transfering it to the source System.
 * Its only purpose is to implement the pure virutal method run(), from flow.
 * 
 */
class LogisticalFlow : public Flow {

    public:

        /**
         * @brief LogisticalFlow default constructor.
         *
         * Calls the flow default constructor to instance a derived class object.
         * 
         */
        LogisticalFlow();

        /**
         * @brief LogisticalFlow complete constructor.
         *
         * Calls the flow complete constructor to instance a derived class object.
         * 
         */
        LogisticalFlow(string name, double stock, System* source, System* target);

        /**
         * @brief run method override.
         *
         * Takes a set stock defined by a more complex math equation from the target System and returns it.
         * 
         * @return returns the stock it got from the equation, used to update the Systems stocks.
         * 
         */
        double run();


};

/**
 * @brief Complex flow class derived from flow.
 *
 * Despite its name, it represents the simplest interaction beetween systems,
 * subtracting a constant stock from the source System and adding it to the target one.
 * Its only purpose is to implement the pure virutal method run(), from flow.
 * 
 */
class ComplexFlow : public Flow {

    public:

        /**
         * @brief ComplexFlow default constructor.
         *
         * Calls the flow default constructor to instance a derived class object.
         * 
         */
        ComplexFlow();

        /**
         * @brief ComplexFlow default constructor.
         *
         * Calls the flow complete constructor to instance a derived class object.
         * 
         */
        ComplexFlow(string name, double stock, System* source, System* target);

        /**
         * @brief run method override.
         *
         * Takes a set stock defined by a simple math equation from the source System and returns it.
         * Currently the same equation as the exponentialFlow implementation.
         * 
         * @return returns the stock it got from the equation, used to update the Systems stocks.
         * 
         */
        double run();


};
#endif