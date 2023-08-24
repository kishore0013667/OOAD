
#ifndef HOUSE_H
#define HOUSE_H

#include <string>

/**
  * class house
  * 
  */

class house
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  house ();

  /**
   * Empty Destructor
   */
  virtual ~house ();

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
  void get_title ()
  {
  }


  /**
   */
  void get_no_of_room ()
  {
  }


  /**
   */
  void get_amount ()
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

  void titlr;
  void no_of_room;
  void amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of titlr
   * @param new_var the new value of titlr
   */
  void setTitlr (void new_var)   {
      titlr = new_var;
  }

  /**
   * Get the value of titlr
   * @return the value of titlr
   */
  void getTitlr ()   {
    return titlr;
  }

  /**
   * Set the value of no_of_room
   * @param new_var the new value of no_of_room
   */
  void setNo_of_room (void new_var)   {
      no_of_room = new_var;
  }

  /**
   * Get the value of no_of_room
   * @return the value of no_of_room
   */
  void getNo_of_room ()   {
    return no_of_room;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (void new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  void getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // HOUSE_H
