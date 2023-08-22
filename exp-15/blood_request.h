
#ifndef BLOOD_REQUEST_H
#define BLOOD_REQUEST_H
#include "blood_bank.h"

#include <string>
#include vector



/**
  * class blood_request
  * 
  */

class blood_request : public blood_bank
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  blood_request ();

  /**
   * Empty Destructor
   */
  virtual ~blood_request ();

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
  void add ()
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

  void int;
  void name;
  void details;
  void date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of int
   * @param new_var the new value of int
   */
  void setInt (void new_var)   {
      int = new_var;
  }

  /**
   * Get the value of int
   * @return the value of int
   */
  void getInt ()   {
    return int;
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
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (void new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  void getDetails ()   {
    return details;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (void new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  void getDate ()   {
    return date;
  }
private:


  void initAttributes () ;

};

#endif // BLOOD_REQUEST_H
