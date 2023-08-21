
#ifndef RAILWAY_CONTROLLER_H
#define RAILWAY_CONTROLLER_H

#include <string>

/**
  * class railway_controller
  * 
  */

class railway_controller
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  railway_controller ();

  /**
   * Empty Destructor
   */
  virtual ~railway_controller ();

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
  void cancel_ticket ()
  {
  }


  /**
   */
  void reserve_ticket ()
  {
  }


  /**
   */
  void update_train_details ()
  {
  }


  /**
   */
  void receive_cash ()
  {
  }


  /**
   */
  void check_onboard ()
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
  void adderss;
  void age;
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
   * Set the value of adderss
   * @param new_var the new value of adderss
   */
  void setAdderss (void new_var)   {
      adderss = new_var;
  }

  /**
   * Get the value of adderss
   * @return the value of adderss
   */
  void getAdderss ()   {
    return adderss;
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
private:


  void initAttributes () ;

};

#endif // RAILWAY_CONTROLLER_H
