
#ifndef BILL_H
#define BILL_H

#include <string>
#include vector



/**
  * class bill
  * 
  */

class bill
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  bill ();

  /**
   * Empty Destructor
   */
  virtual ~bill ();

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
  void create_bill ()
  {
  }


  /**
   */
  void update_bill ()
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

  void bill_no;
  void date;
  void amount;
  void member;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of bill_no
   * @param new_var the new value of bill_no
   */
  void setBill_no (void new_var)   {
      bill_no = new_var;
  }

  /**
   * Get the value of bill_no
   * @return the value of bill_no
   */
  void getBill_no ()   {
    return bill_no;
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

  /**
   * Set the value of member
   * @param new_var the new value of member
   */
  void setMember (void new_var)   {
      member = new_var;
  }

  /**
   * Get the value of member
   * @return the value of member
   */
  void getMember ()   {
    return member;
  }
private:


  void initAttributes () ;

};

#endif // BILL_H
