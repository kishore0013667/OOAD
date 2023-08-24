
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include vector



/**
  * class librarian
  * 
  */

class librarian
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  librarian ();

  /**
   * Empty Destructor
   */
  virtual ~librarian ();

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
  void search_book ()
  {
  }


  /**
   */
  void verify_member ()
  {
  }


  /**
   */
  void issue_book ()
  {
  }


  /**
   */
  void calculate_fine_fee ()
  {
  }


  /**
   */
  void create_bill ()
  {
  }


  /**
   */
  void return_book ()
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

#endif // LIBRARIAN_H
