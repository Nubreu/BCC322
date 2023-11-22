#ifndef SYSTEM_HPP
#define SYSTEM_HPP
#include <string>
#include <iostream>
using namespace std;

/**
 * @class System
 * @brief Represents a system with stock and a name.
 */
class System
{
    double stock; /**< Stock of the system. */
    std::string name; /**< Name of the system. */

public:

    // CONSTRUCTOR AND DESTRUCTOR

    /**
     * @brief Constructor for the System class.
     * @param stock Initial stock of the system.
     * @param name Name of the system.
     */
    System(double stock, std::string name);

    /**
     * @brief Copy constructor for the System class.
     * @param system Another System object to copy.
     */
    System(const System& system);

    /**
     * @brief Destructor for the System class.
     */
    virtual ~System(){};

    // GETS AND SETS

    /**
     * @brief Sets the stock of the system.
     * @param stock The new stock value.
     */
    void setStock(double stock);

    /**
     * @brief Gets the stock of the system.
     * @return The stock of the system.
     */
    double getStock(void);

    /**
     * @brief Sets the name of the system.
     * @param name The new name value.
     */
    void setName(std::string name);

    /**
     * @brief Gets the name of the system.
     * @return The name of the system.
     */
    std::string getName(void);

    // METHODS

    /**
     * @brief Updates the stock and name of the system.
     * @param stock New stock value.
     * @param name New name value.
     */
    void update(double stock, std::string name);

    // OPERATORS

    /**
     * @brief Assignment operator overload for the System class.
     * @param system Another System object to assign.
     * @return Reference to the assigned System object.
     */
    System& operator = (const System& system);
};

#endif /* SYSTEM_HPP_ */
