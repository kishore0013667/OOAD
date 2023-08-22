
#ifndef USER_ACCOUNT_H
#define USER_ACCOUNT_H

#include <string>

/**
  * class user_account
  * 
  */

class user_account
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user_account ();

  /**
   * Empty Destructor
   */
  virtual ~user_account ();

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


  /**
   */
  void update ()
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
  void account_number;
  void user_name;
  void password;
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
   * Set the value of account_number
   * @param new_var the new value of account_number
   */
  void setAccount_number (void new_var)   {
      account_number = new_var;
  }

  /**
   * Get the value of account_number
   * @return the value of account_number
   */
  void getAccount_number ()   {
    return account_number;
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
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // USER_ACCOUNT_H
