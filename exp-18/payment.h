
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include vector



/**
  * class payment
  * 
  */

class payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment ();

  /**
   * Empty Destructor
   */
  virtual ~payment ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void customer_id;
  void name;
  void card_type;
  void card_no;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of customer_id
   * @param new_var the new value of customer_id
   */
  void setCustomer_id (void new_var)   {
      customer_id = new_var;
  }

  /**
   * Get the value of customer_id
   * @return the value of customer_id
   */
  void getCustomer_id ()   {
    return customer_id;
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

  /**
   * Set the value of card_type
   * @param new_var the new value of card_type
   */
  void setCard_type (void new_var)   {
      card_type = new_var;
  }

  /**
   * Get the value of card_type
   * @return the value of card_type
   */
  void getCard_type ()   {
    return card_type;
  }

  /**
   * Set the value of card_no
   * @param new_var the new value of card_no
   */
  void setCard_no (void new_var)   {
      card_no = new_var;
  }

  /**
   * Get the value of card_no
   * @return the value of card_no
   */
  void getCard_no ()   {
    return card_no;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
