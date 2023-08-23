
#ifndef ROLE_CLASS_H
#define ROLE_CLASS_H

#include <string>

/**
  * class role_class
  * 
  */

class role_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  role_class ();

  /**
   * Empty Destructor
   */
  virtual ~role_class ();

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
  void add_role ()
  {
  }


  /**
   */
  void edit_role ()
  {
  }


  /**
   */
  void delete_role ()
  {
  }


  /**
   */
  void search_role ()
  {
  }


  /**
   */
  void new_operationassign_role ()
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

  void role_id;
  void role_tittle;
  void role_discription;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of role_id
   * @param new_var the new value of role_id
   */
  void setRole_id (void new_var)   {
      role_id = new_var;
  }

  /**
   * Get the value of role_id
   * @return the value of role_id
   */
  void getRole_id ()   {
    return role_id;
  }

  /**
   * Set the value of role_tittle
   * @param new_var the new value of role_tittle
   */
  void setRole_tittle (void new_var)   {
      role_tittle = new_var;
  }

  /**
   * Get the value of role_tittle
   * @return the value of role_tittle
   */
  void getRole_tittle ()   {
    return role_tittle;
  }

  /**
   * Set the value of role_discription
   * @param new_var the new value of role_discription
   */
  void setRole_discription (void new_var)   {
      role_discription = new_var;
  }

  /**
   * Get the value of role_discription
   * @return the value of role_discription
   */
  void getRole_discription ()   {
    return role_discription;
  }
private:


  void initAttributes () ;

};

#endif // ROLE_CLASS_H
