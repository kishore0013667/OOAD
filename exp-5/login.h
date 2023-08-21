
#ifndef LOGIN_H
#define LOGIN_H

#include <string>

/**
  * class login
  * 
  */

class login
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  login ();

  /**
   * Empty Destructor
   */
  virtual ~login ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void username;
  void passeord;
  void email_id;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (void new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername ()   {
    return username;
  }

  /**
   * Set the value of passeord
   * @param new_var the new value of passeord
   */
  void setPasseord (void new_var)   {
      passeord = new_var;
  }

  /**
   * Get the value of passeord
   * @return the value of passeord
   */
  void getPasseord ()   {
    return passeord;
  }

  /**
   * Set the value of email_id
   * @param new_var the new value of email_id
   */
  void setEmail_id (void new_var)   {
      email_id = new_var;
  }

  /**
   * Get the value of email_id
   * @return the value of email_id
   */
  void getEmail_id ()   {
    return email_id;
  }
private:


  void initAttributes () ;

};

#endif // LOGIN_H
