
#ifndef TENENT_H
#define TENENT_H

#include <string>

/**
  * class tenent
  * 
  */

class tenent
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  tenent ();

  /**
   * Empty Destructor
   */
  virtual ~tenent ();

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
  void get_name ()
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

  void firstname;
  void lastname;
  void tenet_id;
  void phone_no;
  void email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of firstname
   * @param new_var the new value of firstname
   */
  void setFirstname (void new_var)   {
      firstname = new_var;
  }

  /**
   * Get the value of firstname
   * @return the value of firstname
   */
  void getFirstname ()   {
    return firstname;
  }

  /**
   * Set the value of lastname
   * @param new_var the new value of lastname
   */
  void setLastname (void new_var)   {
      lastname = new_var;
  }

  /**
   * Get the value of lastname
   * @return the value of lastname
   */
  void getLastname ()   {
    return lastname;
  }

  /**
   * Set the value of tenet_id
   * @param new_var the new value of tenet_id
   */
  void setTenet_id (void new_var)   {
      tenet_id = new_var;
  }

  /**
   * Get the value of tenet_id
   * @return the value of tenet_id
   */
  void getTenet_id ()   {
    return tenet_id;
  }

  /**
   * Set the value of phone_no
   * @param new_var the new value of phone_no
   */
  void setPhone_no (void new_var)   {
      phone_no = new_var;
  }

  /**
   * Get the value of phone_no
   * @return the value of phone_no
   */
  void getPhone_no ()   {
    return phone_no;
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

#endif // TENENT_H
