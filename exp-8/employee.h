
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

/**
  * class employee
  * 
  */

class employee
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  employee ();

  /**
   * Empty Destructor
   */
  virtual ~employee ();

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
  void training ()
  {
  }


  /**
   */
  void salary_ ()
  {
  }


  /**
   */
  void performance ()
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

  void commitment;
  void bank_account;
  void regularity;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of commitment
   * @param new_var the new value of commitment
   */
  void setCommitment (void new_var)   {
      commitment = new_var;
  }

  /**
   * Get the value of commitment
   * @return the value of commitment
   */
  void getCommitment ()   {
    return commitment;
  }

  /**
   * Set the value of bank_account
   * @param new_var the new value of bank_account
   */
  void setBank_account (void new_var)   {
      bank_account = new_var;
  }

  /**
   * Get the value of bank_account
   * @return the value of bank_account
   */
  void getBank_account ()   {
    return bank_account;
  }

  /**
   * Set the value of regularity
   * @param new_var the new value of regularity
   */
  void setRegularity (void new_var)   {
      regularity = new_var;
  }

  /**
   * Get the value of regularity
   * @return the value of regularity
   */
  void getRegularity ()   {
    return regularity;
  }
private:


  void initAttributes () ;

};

#endif // EMPLOYEE_H
