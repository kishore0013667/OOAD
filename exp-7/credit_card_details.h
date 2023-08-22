
#ifndef CREDIT_CARD_DETAILS_H
#define CREDIT_CARD_DETAILS_H

#include <string>
#include vector



/**
  * class credit_card_details
  * 
  */

class credit_card_details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  credit_card_details ();

  /**
   * Empty Destructor
   */
  virtual ~credit_card_details ();

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
  void automate ()
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
  void pin;
  void dugration;
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
   * Set the value of pin
   * @param new_var the new value of pin
   */
  void setPin (void new_var)   {
      pin = new_var;
  }

  /**
   * Get the value of pin
   * @return the value of pin
   */
  void getPin ()   {
    return pin;
  }

  /**
   * Set the value of dugration
   * @param new_var the new value of dugration
   */
  void setDugration (void new_var)   {
      dugration = new_var;
  }

  /**
   * Get the value of dugration
   * @return the value of dugration
   */
  void getDugration ()   {
    return dugration;
  }
private:


  void initAttributes () ;

};

#endif // CREDIT_CARD_DETAILS_H
