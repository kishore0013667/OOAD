
#ifndef SHIPPING_INFO_H
#define SHIPPING_INFO_H

#include <string>

/**
  * class shipping_info
  * 
  */

class shipping_info
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  shipping_info ();

  /**
   * Empty Destructor
   */
  virtual ~shipping_info ();

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
  void update_shipping_info ()
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

  void shipping_id;
  void shipping_type;
  void shipping_address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of shipping_id
   * @param new_var the new value of shipping_id
   */
  void setShipping_id (void new_var)   {
      shipping_id = new_var;
  }

  /**
   * Get the value of shipping_id
   * @return the value of shipping_id
   */
  void getShipping_id ()   {
    return shipping_id;
  }

  /**
   * Set the value of shipping_type
   * @param new_var the new value of shipping_type
   */
  void setShipping_type (void new_var)   {
      shipping_type = new_var;
  }

  /**
   * Get the value of shipping_type
   * @return the value of shipping_type
   */
  void getShipping_type ()   {
    return shipping_type;
  }

  /**
   * Set the value of shipping_address
   * @param new_var the new value of shipping_address
   */
  void setShipping_address (void new_var)   {
      shipping_address = new_var;
  }

  /**
   * Get the value of shipping_address
   * @return the value of shipping_address
   */
  void getShipping_address ()   {
    return shipping_address;
  }
private:


  void initAttributes () ;

};

#endif // SHIPPING_INFO_H
