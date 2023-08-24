
#ifndef PATIENT_H
#define PATIENT_H

#include <string>

/**
  * class patient
  * 
  */

class patient
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  patient ();

  /**
   * Empty Destructor
   */
  virtual ~patient ();

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
  void enable_user ()
  {
  }


  /**
   */
  void disable_user ()
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

  void category;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of category
   * @param new_var the new value of category
   */
  void setCategory (void new_var)   {
      category = new_var;
  }

  /**
   * Get the value of category
   * @return the value of category
   */
  void getCategory ()   {
    return category;
  }
private:


  void initAttributes () ;

};

#endif // PATIENT_H
