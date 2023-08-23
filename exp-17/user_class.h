
#ifndef USER_CLASS_H
#define USER_CLASS_H
#include "customer_class.h"
#include "registration_class.h"

#include <string>

/**
  * class user_class
  * 
  */

class user_class : public customer_class, public registration_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user_class ();

  /**
   * Empty Destructor
   */
  virtual ~user_class ();

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
  void add_user ()
  {
  }


  /**
   */
  void edit_user ()
  {
  }


  /**
   */
  void delete_user ()
  {
  }


  /**
   */
  void sreach_user ()
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

  void user_id;
  void user_role_id;
  void user_name;
  void user_email_id;
  void user_address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of user_id
   * @param new_var the new value of user_id
   */
  void setUser_id (void new_var)   {
      user_id = new_var;
  }

  /**
   * Get the value of user_id
   * @return the value of user_id
   */
  void getUser_id ()   {
    return user_id;
  }

  /**
   * Set the value of user_role_id
   * @param new_var the new value of user_role_id
   */
  void setUser_role_id (void new_var)   {
      user_role_id = new_var;
  }

  /**
   * Get the value of user_role_id
   * @return the value of user_role_id
   */
  void getUser_role_id ()   {
    return user_role_id;
  }

  /**
   * Set the value of user_name
   * @param new_var the new value of user_name
   */
  void setUser_name (void new_var)   {
      user_name = new_var;
  }

  /**
   * Get the value of user_name
   * @return the value of user_name
   */
  void getUser_name ()   {
    return user_name;
  }

  /**
   * Set the value of user_email_id
   * @param new_var the new value of user_email_id
   */
  void setUser_email_id (void new_var)   {
      user_email_id = new_var;
  }

  /**
   * Get the value of user_email_id
   * @return the value of user_email_id
   */
  void getUser_email_id ()   {
    return user_email_id;
  }

  /**
   * Set the value of user_address
   * @param new_var the new value of user_address
   */
  void setUser_address (void new_var)   {
      user_address = new_var;
  }

  /**
   * Get the value of user_address
   * @return the value of user_address
   */
  void getUser_address ()   {
    return user_address;
  }
private:


  void initAttributes () ;

};

#endif // USER_CLASS_H
