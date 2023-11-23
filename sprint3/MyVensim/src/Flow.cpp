#include "Flow.hpp"

//CONSTRUCTOR AND DESTRUCTOR

Flow::Flow()
{
  source = NULL;
  target = NULL;
  name = "\0";
}
Flow::Flow(System* source,System* target,string name)
{
  this->source = source;
  this->target = target;
  this->name = name;
}
Flow::Flow(const Flow& flow)
{
  source = flow.source;
  target = flow.target;
  name = flow.name;
}

//GETS AND SETS
void Flow::setSource(System* source)
{
  this->source = source;
}
System* Flow::getSource(void)
{
  return source;
}
void Flow::setTarget(System* target)
{
  this->target = target;
}
System* Flow::getTarget(void)
{
  return target;
}
void Flow::setName(string name)
{
  this->name = name;
}
string Flow::getName(void)
{
  return name;
}
//METHODS
void Flow::connect(System* source, System* target)
{
  setSource(source);
  setTarget(target);
}
void Flow::update(System* source, System* target, string name)
{
  setSource(source);
  setTarget(target);
  setName(name);
}

//OPERATORS
Flow& Flow::operator = (const Flow& flow)
{
  if(&flow == this)
    return *this;
  delete source;
  delete target;
  source = flow.source;
  target = flow.target;
  name = flow.name;
  return *this;
}