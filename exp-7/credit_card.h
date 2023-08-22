
#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>
#include vector



/**
  * class credit_card
  * 
  */

class credit_card
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  credit_card ();

  /**
   * Empty Destructor
   */
  virtual ~credit_card ();

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
  void create ()
  {
  }


  /**
   */
  void update ()
  {
  }


  /**
   */
  void terminate ()
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

  void code;
  void owner;
  void date;
  void status;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of owner
   * @param new_var the new value of owner
   */
  void setOwner (void new_var)   {
      owner = new_var;
  }

  /**
   * Get the value of owner
   * @return the value of owner
   */
  void getOwner ()   {
    return owner;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (void new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  void getDate ()   {
    return date;
  }

  /**
   * Set the value of status
   * @param new_var the new value of status
   */
  void setStatus (void new_var)   {
      status = new_var;
  }

  /**
   * Get the value of status
   * @return the value of status
   */
  void getStatus ()   {
    return status;
  }
private:


  void initAttributes () ;

};

#endif // CREDIT_CARD_H
