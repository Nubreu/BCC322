#include "System.hpp"

// CONSTRUCTOR AND DESTRUCTOR
System::System(double stock = 0, string name = "\0")
{
  this->stock = stock;
  this->name = name;
}
System::System(const System& system)
{
  stock = system.stock;
  name = system.name;
}
//Corrigir: Destrutpr deve ser virtual
//System::~System(){}
//GETS AND SETS
void System::setStock(double stock)
{
  this->stock = stock;
}
double System::getStock(void)
{
  return stock;
}
void System::setName(string name)
{
  this->name = name;
}
string System::getName(void)
{
  return name;
}
//METHODS
void System::update(double stock, string name)
{
  setStock(stock);
  setName(name);
}
//OPERATORS
System& System::operator = (const System& system)
{
  if(&system == this)
    return *this;
  setStock(system.stock);
  setName(system.name);
  return *this;
}