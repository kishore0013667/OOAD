
#ifndef CUSTOMER_CLASS_H
#define CUSTOMER_CLASS_H
#include "registration_class.h"

#include <string>

/**
  * class customer_class
  * 
  */

class customer_class : public registration_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer_class ();

  /**
   * Empty Destructor
   */
  virtual ~customer_class ();

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
  void add_customer ()
  {
  }


  /**
   */
  void edit_customer ()
  {
  }


  /**
   */
  void selete_customer ()
  {
  }


  /**
   */
  void search_customer ()
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

  void customer_id;
  void customer_name;
  void customer_moblie;
  void customer_email_id;
  void customer_address;
  void customer_username;
  void customer_password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customer_id
   * @param new_var the new value of customer_id
   */
  void setCustomer_id (void new_var)   {
      customer_id = new_var;
  }

  /**
   * Get the value of customer_id
   * @return the value of customer_id
   */
  void getCustomer_id ()   {
    return customer_id;
  }

  /**
   * Set the value of customer_name
   * @param new_var the new value of customer_name
   */
  void setCustomer_name (void new_var)   {
      customer_name = new_var;
  }

  /**
   * Get the value of customer_name
   * @return the value of customer_name
   */
  void getCustomer_name ()   {
    return customer_name;
  }

  /**
   * Set the value of customer_moblie
   * @param new_var the new value of customer_moblie
   */
  void setCustomer_moblie (void new_var)   {
      customer_moblie = new_var;
  }

  /**
   * Get the value of customer_moblie
   * @return the value of customer_moblie
   */
  void getCustomer_moblie ()   {
    return customer_moblie;
  }

  /**
   * Set the value of customer_email_id
   * @param new_var the new value of customer_email_id
   */
  void setCustomer_email_id (void new_var)   {
      customer_email_id = new_var;
  }

  /**
   * Get the value of customer_email_id
   * @return the value of customer_email_id
   */
  void getCustomer_email_id ()   {
    return customer_email_id;
  }

  /**
   * Set the value of customer_address
   * @param new_var the new value of customer_address
   */
  void setCustomer_address (void new_var)   {
      customer_address = new_var;
  }

  /**
   * Get the value of customer_address
   * @return the value of customer_address
   */
  void getCustomer_address ()   {
    return customer_address;
  }

  /**
   * Set the value of customer_username
   * @param new_var the new value of customer_username
   */
  void setCustomer_username (void new_var)   {
      customer_username = new_var;
  }

  /**
   * Get the value of customer_username
   * @return the value of customer_username
   */
  void getCustomer_username ()   {
    return customer_username;
  }

  /**
   * Set the value of customer_password
   * @param new_var the new value of customer_password
   */
  void setCustomer_password (void new_var)   {
      customer_password = new_var;
  }

  /**
   * Get the value of customer_password
   * @return the value of customer_password
   */
  void getCustomer_password ()   {
    return customer_password;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_CLASS_H
