
#ifndef RECEPTION_H
#define RECEPTION_H
#include "donor.h"

#include <string>
#include vector



/**
  * class reception
  * 
  */

class reception : public donor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reception ();

  /**
   * Empty Destructor
   */
  virtual ~reception ();

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
  void verify_blood_group ()
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

  void request_blood;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of request_blood
   * @param new_var the new value of request_blood
   */
  void setRequest_blood (void new_var)   {
      request_blood = new_var;
  }

  /**
   * Get the value of request_blood
   * @return the value of request_blood
   */
  void getRequest_blood ()   {
    return request_blood;
  }
private:


  void initAttributes () ;

};

#endif // RECEPTION_H
