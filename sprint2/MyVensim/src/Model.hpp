#ifndef MODEL_HPP
#define MODEL_HPP

#include "System.hpp"
#include "Flow.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @class Model
 * @brief Represents a simulation model with systems and flows.
 */
class Model
{
    std::vector<System*> system_container; /**< Container for storing System objects. */
    std::vector<Flow*> flow_container; /**< Container for storing Flow objects. */

public:

    /**
     * @brief Default constructor for the Model class.
     */
    Model();

    /**
     * @brief Copy constructor for the Model class.
     * @param model Another Model object to copy.
     */
    Model(Model &model);

    /**
     * @brief Generates a report based on the current state of the model.
     */
    void report();

    /**
     * @brief Adds a Flow object to the model.
     * @param flow Pointer to the Flow object to be added.
     */
    void add(Flow* flow);

    /**
     * @brief Adds a System object to the model.
     * @param system Pointer to the System object to be added.
     */
    void add(System* system);

    /**
     * @brief Executes the simulation model within a specified time range.
     * @param t_start Start time of the simulation.
     * @param t_end End time of the simulation.
     * @param shift Time shift for the simulation.
     */
    void execute(int t_start, int t_end, int shift);

    /**
     * @brief Sets the container of Flow objects for the model.
     * @param flowContainer Vector containing Flow objects.
     */
    void setFlowContainer(const std::vector<Flow*>& flowContainer);

    /**
     * @brief Sets the container of System objects for the model.
     * @param systemContainer Vector containing System objects.
     */
    void setSystemContainer(const std::vector<System*>& systemContainer);

    /**
     * @brief Gets the container of Flow objects in the model.
     * @return Reference to the container of Flow objects.
     */
    const std::vector<Flow*>& getFlowContainer() const;

    /**
     * @brief Gets the container of System objects in the model.
     * @return Reference to the container of System objects.
     */
    const std::vector<System*>& getSystemContainer() const;

    /**
     * @brief Assignment operator overload for the Model class.
     * @param model Another Model object to assign.
     * @return Reference to the assigned Model object.
     */
    Model& operator = (const Model& model);
};

#endif /* MODEL_HPP_ */
