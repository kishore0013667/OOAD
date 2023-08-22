
#ifndef TRADING_MANAGEMENT_SYSEM_H
#define TRADING_MANAGEMENT_SYSEM_H

#include <string>

/**
  * class trading_management_sysem
  * 
  */

class trading_management_sysem
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  trading_management_sysem ();

  /**
   * Empty Destructor
   */
  virtual ~trading_management_sysem ();

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
  void transportation ()
  {
  }


  /**
   */
  void product_delivery ()
  {
  }


  /**
   */
  void amount_transfer ()
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

  void verify_product;
  void amount_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of verify_product
   * @param new_var the new value of verify_product
   */
  void setVerify_product (void new_var)   {
      verify_product = new_var;
  }

  /**
   * Get the value of verify_product
   * @return the value of verify_product
   */
  void getVerify_product ()   {
    return verify_product;
  }

  /**
   * Set the value of amount_
   * @param new_var the new value of amount_
   */
  void setAmount_ (void new_var)   {
      amount_ = new_var;
  }

  /**
   * Get the value of amount_
   * @return the value of amount_
   */
  void getAmount_ ()   {
    return amount_;
  }
private:


  void initAttributes () ;

};

#endif // TRADING_MANAGEMENT_SYSEM_H
