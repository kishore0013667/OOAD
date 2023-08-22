
#ifndef ORDER_H
#define ORDER_H

#include <string>

/**
  * class order
  * 
  */

class order
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  order ();

  /**
   * Empty Destructor
   */
  virtual ~order ();

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

  void order_id;
  void order_no;
  void date_ordered;
  void date_created;
  void order_status;
  void customer_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of order_id
   * @param new_var the new value of order_id
   */
  void setOrder_id (void new_var)   {
      order_id = new_var;
  }

  /**
   * Get the value of order_id
   * @return the value of order_id
   */
  void getOrder_id ()   {
    return order_id;
  }

  /**
   * Set the value of order_no
   * @param new_var the new value of order_no
   */
  void setOrder_no (void new_var)   {
      order_no = new_var;
  }

  /**
   * Get the value of order_no
   * @return the value of order_no
   */
  void getOrder_no ()   {
    return order_no;
  }

  /**
   * Set the value of date_ordered
   * @param new_var the new value of date_ordered
   */
  void setDate_ordered (void new_var)   {
      date_ordered = new_var;
  }

  /**
   * Get the value of date_ordered
   * @return the value of date_ordered
   */
  void getDate_ordered ()   {
    return date_ordered;
  }

  /**
   * Set the value of date_created
   * @param new_var the new value of date_created
   */
  void setDate_created (void new_var)   {
      date_created = new_var;
  }

  /**
   * Get the value of date_created
   * @return the value of date_created
   */
  void getDate_created ()   {
    return date_created;
  }

  /**
   * Set the value of order_status
   * @param new_var the new value of order_status
   */
  void setOrder_status (void new_var)   {
      order_status = new_var;
  }

  /**
   * Get the value of order_status
   * @return the value of order_status
   */
  void getOrder_status ()   {
    return order_status;
  }

  /**
   * Set the value of customer_name
   * @param new_var the new value of customer_name
   */
  void setCustomer_name (void new_var)   {
      customer_name = new_var;
  }

  /**
   * Get the value of customer_name
   * @return the value of customer_name
   */
  void getCustomer_name ()   {
    return customer_name;
  }
private:


  void initAttributes () ;

};

#endif // ORDER_H
