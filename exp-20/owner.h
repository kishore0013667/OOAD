
#ifndef OWNER_H
#define OWNER_H

#include <string>

/**
  * class owner
  * 
  */

class owner
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  owner ();

  /**
   * Empty Destructor
   */
  virtual ~owner ();

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
  void get_first_name ()
  {
  }


  /**
   */
  void get_last_name ()
  {
  }


  /**
   */
  void get_id ()
  {
  }


  /**
   */
  void get_phone_no ()
  {
  }


  /**
   */
  void get_email ()
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

  void first_name;
  void last_name;
  void owner_id;
  void phone_number;
  void email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of first_name
   * @param new_var the new value of first_name
   */
  void setFirst_name (void new_var)   {
      first_name = new_var;
  }

  /**
   * Get the value of first_name
   * @return the value of first_name
   */
  void getFirst_name ()   {
    return first_name;
  }

  /**
   * Set the value of last_name
   * @param new_var the new value of last_name
   */
  void setLast_name (void new_var)   {
      last_name = new_var;
  }

  /**
   * Get the value of last_name
   * @return the value of last_name
   */
  void getLast_name ()   {
    return last_name;
  }

  /**
   * Set the value of owner_id
   * @param new_var the new value of owner_id
   */
  void setOwner_id (void new_var)   {
      owner_id = new_var;
  }

  /**
   * Get the value of owner_id
   * @return the value of owner_id
   */
  void getOwner_id ()   {
    return owner_id;
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
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (void new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  void getEmail ()   {
    return email;
  }
private:


  void initAttributes () ;

};

#endif // OWNER_H
