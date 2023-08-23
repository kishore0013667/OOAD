
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include vector



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
  void buy_food ()
  {
  }


  /**
   */
  void view_manu ()
  {
  }


  /**
   */
  void get_registered ()
  {
  }


  /**
   */
  void make_payment ()
  {
  }


  /**
   */
  void add_to_cart ()
  {
  }


  /**
   */
  void delete_from_cart ()
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
  void address;
  void phone_number;
  void email_;
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
   * Set the value of phone_number
   * @param new_var the new value of phone_number
   */
  void setPhone_number (void new_var)   {
      phone_number = new_var;
  }

  /**
   * Get the value of phone_number
   * @return the value of phone_number
   */
  void getPhone_number ()   {
    return phone_number;
  }

  /**
   * Set the value of email_
   * @param new_var the new value of email_
   */
  void setEmail_ (void new_var)   {
      email_ = new_var;
  }

  /**
   * Get the value of email_
   * @return the value of email_
   */
  void getEmail_ ()   {
    return email_;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
