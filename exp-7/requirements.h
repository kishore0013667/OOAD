
#ifndef REQUIREMENTS_H
#define REQUIREMENTS_H

#include <string>
#include vector



/**
  * class requirements
  * 
  */

class requirements
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  requirements ();

  /**
   * Empty Destructor
   */
  virtual ~requirements ();

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
  void scan ()
  {
  }


  /**
   */
  void upload ()
  {
  }


  /**
   */
  void print ()
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
  void code;
  void details;
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
   * Set the value of code
   * @param new_var the new value of code
   */
  void setCode (void new_var)   {
      code = new_var;
  }

  /**
   * Get the value of code
   * @return the value of code
   */
  void getCode ()   {
    return code;
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
private:


  void initAttributes () ;

};

#endif // REQUIREMENTS_H
