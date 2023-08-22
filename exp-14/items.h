
#ifndef ITEMS_H
#define ITEMS_H

#include <string>

/**
  * class items
  * 
  */

class items
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  items ();

  /**
   * Empty Destructor
   */
  virtual ~items ();

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
  void new_attributecategory;
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
   * Set the value of new_attributecategory
   * @param new_var the new value of new_attributecategory
   */
  void setNew_attributecategory (void new_var)   {
      new_attributecategory = new_var;
  }

  /**
   * Get the value of new_attributecategory
   * @return the value of new_attributecategory
   */
  void getNew_attributecategory ()   {
    return new_attributecategory;
  }
private:


  void initAttributes () ;

};

#endif // ITEMS_H
