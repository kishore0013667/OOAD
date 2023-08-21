
#ifndef PASSANGR_H
#define PASSANGR_H

#include <string>

/**
  * class passangr
  * 
  */

class passangr
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  passangr ();

  /**
   * Empty Destructor
   */
  virtual ~passangr ();

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
  void veiw_train_details ()
  {
  }


  /**
   */
  void request_form ()
  {
  }


  /**
   */
  void submit_form ()
  {
  }


  /**
   */
  void reserve ()
  {
  }


  /**
   */
  void credit_card_details ()
  {
  }


  /**
   */
  void cancellation ()
  {
  }


  /**
   */
  void paying_cash ()
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
  void age;
  void address;
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
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (void new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  void getAge ()   {
    return age;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (void new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // PASSANGR_H
