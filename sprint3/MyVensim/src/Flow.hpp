#ifndef FLOW_HPP
#define FLOW_HPP

#include "System.hpp"
#include <string>
#include <iostream>
using namespace std;

/**
 * @class Flow
 * @brief Represents a flow between two systems.
 */
class Flow
{
protected:
    System* source; /**< Pointer to the source system of the flow. */
    System* target; /**< Pointer to the target system of the flow. */
    std::string name; /**< Name of the flow. */

public:

    // CONSTRUCTOR AND DESTRUCTOR

    /**
     * @brief Destructor for the Flow class.
     */
    virtual ~Flow(){};

    /**
     * @brief Default constructor for the Flow class.
     */
    Flow();

    /**
     * @brief Constructor for the Flow class.
     * @param source Pointer to the source system of the flow.
     * @param target Pointer to the target system of the flow.
     * @param name Name of the flow.
     */
    Flow(System* source, System* target, std::string name);

    /**
     * @brief Copy constructor for the Flow class.
     * @param flow Another Flow object to copy.
     */
    Flow(const Flow& flow);

    // GETS AND SETS

    /**
     * @brief Sets the source system of the flow.
     * @param source Pointer to the new source system.
     */
    void setSource(System* source);

    /**
     * @brief Gets the source system of the flow.
     * @return Pointer to the source system.
     */
    System* getSource(void);

    /**
     * @brief Sets the target system of the flow.
     * @param target Pointer to the new target system.
     */
    void setTarget(System* target);

    /**
     * @brief Gets the target system of the flow.
     * @return Pointer to the target system.
     */
    System* getTarget(void);

    /**
     * @brief Sets the name of the flow.
     * @param name New name for the flow.
     */
    void setName(std::string name);

    /**
     * @brief Gets the name of the flow.
     * @return Name of the flow.
     */
    std::string getName(void);

    // METHODS

    /**
     * @brief Connects the flow between a source and target system with a specified name.
     * @param source Pointer to the source system.
     * @param target Pointer to the target system.
     */
    void connect(System* source, System* target);

    /**
     * @brief Updates the flow with a new source, target, and name.
     * @param source Pointer to the new source system.
     * @param target Pointer to the new target system.
     * @param name New name for the flow.
     */
    void update(System* source, System* target, std::string name);

    /**
     * @brief Pure virtual function representing the equation of the flow.
     * @return The result of the flow equation.
     */
    virtual double equation() = 0;

    // OPERATORS

    /**
     * @brief Assignment operator overload for the Flow class.
     * @param flow Another Flow object to assign.
     * @return Reference to the assigned Flow object.
     */
    Flow& operator = (const Flow& flow);
};

#endif /* FLOW_HPP_ */
