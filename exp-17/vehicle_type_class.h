
#ifndef VEHICLE_TYPE_CLASS_H
#define VEHICLE_TYPE_CLASS_H
#include "registration_class.h"

#include <string>

/**
  * class vehicle_type_class
  * 
  */

class vehicle_type_class : public registration_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  vehicle_type_class ();

  /**
   * Empty Destructor
   */
  virtual ~vehicle_type_class ();

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
  void add_vehicle_typr ()
  {
  }


  /**
   */
  void adit_vehicle_type ()
  {
  }


  /**
   */
  void delete_vehicle_type ()
  {
  }


  /**
   */
  void search_vehicle_type ()
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

  void vehicle_type_id;
  void vehicle_type_customer;
  void vehicle_type_number;
  void vehicle_type_description;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of vehicle_type_id
   * @param new_var the new value of vehicle_type_id
   */
  void setVehicle_type_id (void new_var)   {
      vehicle_type_id = new_var;
  }

  /**
   * Get the value of vehicle_type_id
   * @return the value of vehicle_type_id
   */
  void getVehicle_type_id ()   {
    return vehicle_type_id;
  }

  /**
   * Set the value of vehicle_type_customer
   * @param new_var the new value of vehicle_type_customer
   */
  void setVehicle_type_customer (void new_var)   {
      vehicle_type_customer = new_var;
  }

  /**
   * Get the value of vehicle_type_customer
   * @return the value of vehicle_type_customer
   */
  void getVehicle_type_customer ()   {
    return vehicle_type_customer;
  }

  /**
   * Set the value of vehicle_type_number
   * @param new_var the new value of vehicle_type_number
   */
  void setVehicle_type_number (void new_var)   {
      vehicle_type_number = new_var;
  }

  /**
   * Get the value of vehicle_type_number
   * @return the value of vehicle_type_number
   */
  void getVehicle_type_number ()   {
    return vehicle_type_number;
  }

  /**
   * Set the value of vehicle_type_description
   * @param new_var the new value of vehicle_type_description
   */
  void setVehicle_type_description (void new_var)   {
      vehicle_type_description = new_var;
  }

  /**
   * Get the value of vehicle_type_description
   * @return the value of vehicle_type_description
   */
  void getVehicle_type_description ()   {
    return vehicle_type_description;
  }
private:


  void initAttributes () ;

};

#endif // VEHICLE_TYPE_CLASS_H
