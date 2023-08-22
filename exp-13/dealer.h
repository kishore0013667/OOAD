
#ifndef DEALER_H
#define DEALER_H

#include <string>

/**
  * class dealer
  * 
  */

class dealer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  dealer ();

  /**
   * Empty Destructor
   */
  virtual ~dealer ();

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
  void payment ()
  {
  }


  /**
   */
  void delivery ()
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

  void name_;
  void availability;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name_
   * @param new_var the new value of name_
   */
  void setName_ (void new_var)   {
      name_ = new_var;
  }

  /**
   * Get the value of name_
   * @return the value of name_
   */
  void getName_ ()   {
    return name_;
  }

  /**
   * Set the value of availability
   * @param new_var the new value of availability
   */
  void setAvailability (void new_var)   {
      availability = new_var;
  }

  /**
   * Get the value of availability
   * @return the value of availability
   */
  void getAvailability ()   {
    return availability;
  }
private:


  void initAttributes () ;

};

#endif // DEALER_H
