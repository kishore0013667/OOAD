
#ifndef PASSPORT_MANAGEMENT_SYSTEM_H
#define PASSPORT_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class passport_management_system
  * 
  */

class passport_management_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  passport_management_system ();

  /**
   * Empty Destructor
   */
  virtual ~passport_management_system ();

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
  void passport_issue ()
  {
  }


  /**
   */
  void passport_verification ()
  {
  }


  /**
   */
  void passport_cancellation ()
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

  void view_details;
  void store_proof;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of view_details
   * @param new_var the new value of view_details
   */
  void setView_details (void new_var)   {
      view_details = new_var;
  }

  /**
   * Get the value of view_details
   * @return the value of view_details
   */
  void getView_details ()   {
    return view_details;
  }

  /**
   * Set the value of store_proof
   * @param new_var the new value of store_proof
   */
  void setStore_proof (void new_var)   {
      store_proof = new_var;
  }

  /**
   * Get the value of store_proof
   * @return the value of store_proof
   */
  void getStore_proof ()   {
    return store_proof;
  }
private:


  void initAttributes () ;

};

#endif // PASSPORT_MANAGEMENT_SYSTEM_H
