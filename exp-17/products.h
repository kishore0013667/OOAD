
#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <string>

/**
  * class products
  * 
  */

class products
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  products ();

  /**
   * Empty Destructor
   */
  virtual ~products ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void id;
  void name;
  void group;
  void subgroup;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of group
   * @param new_var the new value of group
   */
  void setGroup (void new_var)   {
      group = new_var;
  }

  /**
   * Get the value of group
   * @return the value of group
   */
  void getGroup ()   {
    return group;
  }

  /**
   * Set the value of subgroup
   * @param new_var the new value of subgroup
   */
  void setSubgroup (void new_var)   {
      subgroup = new_var;
  }

  /**
   * Get the value of subgroup
   * @return the value of subgroup
   */
  void getSubgroup ()   {
    return subgroup;
  }
private:


  void initAttributes () ;

};

#endif // PRODUCTS_H
