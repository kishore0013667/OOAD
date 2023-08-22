
#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

#include <string>
#include vector



/**
  * class blood_bank
  * 
  */

class blood_bank
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  blood_bank ();

  /**
   * Empty Destructor
   */
  virtual ~blood_bank ();

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
  void request_processing ()
  {
  }


  /**
   */
  void validate_blood_transaction ()
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

  void id;
  void name;
  void details;
  void address;
  void contact_number;
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
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (void new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress ()   {
    return address;
  }

  /**
   * Set the value of contact_number
   * @param new_var the new value of contact_number
   */
  void setContact_number (void new_var)   {
      contact_number = new_var;
  }

  /**
   * Get the value of contact_number
   * @return the value of contact_number
   */
  void getContact_number ()   {
    return contact_number;
  }
private:


  void initAttributes () ;

};

#endif // BLOOD_BANK_H
