
#ifndef REGISTRATION_CLASS_H
#define REGISTRATION_CLASS_H
#include "driving_license_class.h"

#include <string>

/**
  * class registration_class
  * 
  */

class registration_class : public driving_license_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  registration_class ();

  /**
   * Empty Destructor
   */
  virtual ~registration_class ();

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
  void add_registration ()
  {
  }


  /**
   */
  void edit_registration ()
  {
  }


  /**
   */
  void delete_registration ()
  {
  }


  /**
   */
  void search_registration ()
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

  void registration_id;
  void registration_customer_id;
  void registration_number;
  void registration_type;
  void registration_discription;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of registration_id
   * @param new_var the new value of registration_id
   */
  void setRegistration_id (void new_var)   {
      registration_id = new_var;
  }

  /**
   * Get the value of registration_id
   * @return the value of registration_id
   */
  void getRegistration_id ()   {
    return registration_id;
  }

  /**
   * Set the value of registration_customer_id
   * @param new_var the new value of registration_customer_id
   */
  void setRegistration_customer_id (void new_var)   {
      registration_customer_id = new_var;
  }

  /**
   * Get the value of registration_customer_id
   * @return the value of registration_customer_id
   */
  void getRegistration_customer_id ()   {
    return registration_customer_id;
  }

  /**
   * Set the value of registration_number
   * @param new_var the new value of registration_number
   */
  void setRegistration_number (void new_var)   {
      registration_number = new_var;
  }

  /**
   * Get the value of registration_number
   * @return the value of registration_number
   */
  void getRegistration_number ()   {
    return registration_number;
  }

  /**
   * Set the value of registration_type
   * @param new_var the new value of registration_type
   */
  void setRegistration_type (void new_var)   {
      registration_type = new_var;
  }

  /**
   * Get the value of registration_type
   * @return the value of registration_type
   */
  void getRegistration_type ()   {
    return registration_type;
  }

  /**
   * Set the value of registration_discription
   * @param new_var the new value of registration_discription
   */
  void setRegistration_discription (void new_var)   {
      registration_discription = new_var;
  }

  /**
   * Get the value of registration_discription
   * @return the value of registration_discription
   */
  void getRegistration_discription ()   {
    return registration_discription;
  }
private:


  void initAttributes () ;

};

#endif // REGISTRATION_CLASS_H
