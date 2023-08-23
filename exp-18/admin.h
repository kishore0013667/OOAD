
#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include vector



/**
  * class admin
  * 
  */

class admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admin ();

  /**
   * Empty Destructor
   */
  virtual ~admin ();

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
  void view_food_ ()
  {
  }


  /**
   */
  void add_menu ()
  {
  }


  /**
   */
  void add_food ()
  {
  }


  /**
   */
  void delete_food ()
  {
  }


  /**
   */
  void modify_manu ()
  {
  }


  /**
   */
  void make_deliver ()
  {
  }


  /**
   */
  void confirm_delevery ()
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

  void id_;
  void name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id_
   * @param new_var the new value of id_
   */
  void setId_ (void new_var)   {
      id_ = new_var;
  }

  /**
   * Get the value of id_
   * @return the value of id_
   */
  void getId_ ()   {
    return id_;
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
private:


  void initAttributes () ;

};

#endif // ADMIN_H
