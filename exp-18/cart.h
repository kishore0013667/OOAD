
#ifndef CART_H
#define CART_H

#include <string>
#include vector



/**
  * class cart
  * 
  */

class cart
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  cart ();

  /**
   * Empty Destructor
   */
  virtual ~cart ();

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

  void id;
  void number_of_product;
  void product_1;
  void product_2;
  void price_;
  void total_price;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of number_of_product
   * @param new_var the new value of number_of_product
   */
  void setNumber_of_product (void new_var)   {
      number_of_product = new_var;
  }

  /**
   * Get the value of number_of_product
   * @return the value of number_of_product
   */
  void getNumber_of_product ()   {
    return number_of_product;
  }

  /**
   * Set the value of product_1
   * @param new_var the new value of product_1
   */
  void setProduct_1 (void new_var)   {
      product_1 = new_var;
  }

  /**
   * Get the value of product_1
   * @return the value of product_1
   */
  void getProduct_1 ()   {
    return product_1;
  }

  /**
   * Set the value of product_2
   * @param new_var the new value of product_2
   */
  void setProduct_2 (void new_var)   {
      product_2 = new_var;
  }

  /**
   * Get the value of product_2
   * @return the value of product_2
   */
  void getProduct_2 ()   {
    return product_2;
  }

  /**
   * Set the value of price_
   * @param new_var the new value of price_
   */
  void setPrice_ (void new_var)   {
      price_ = new_var;
  }

  /**
   * Get the value of price_
   * @return the value of price_
   */
  void getPrice_ ()   {
    return price_;
  }

  /**
   * Set the value of total_price
   * @param new_var the new value of total_price
   */
  void setTotal_price (void new_var)   {
      total_price = new_var;
  }

  /**
   * Get the value of total_price
   * @return the value of total_price
   */
  void getTotal_price ()   {
    return total_price;
  }
private:


  void initAttributes () ;

};

#endif // CART_H
