
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class customer
  * 
  */

class customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer ();

  /**
   * Empty Destructor
   */
  virtual ~customer ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void payment ()
  {
  }


  /**
   */
  void feedback ()
  {
  }

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

  void name;
  void purchacce_the_product;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of purchacce_the_product
   * @param new_var the new value of purchacce_the_product
   */
  void setPurchacce_the_product (void new_var)   {
      purchacce_the_product = new_var;
  }

  /**
   * Get the value of purchacce_the_product
   * @return the value of purchacce_the_product
   */
  void getPurchacce_the_product ()   {
    return purchacce_the_product;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
