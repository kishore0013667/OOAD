
#ifndef CENTRAL_MANAGEMENT_SYSTEM_H
#define CENTRAL_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class central_management_system
  * 
  */

class central_management_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  central_management_system ();

  /**
   * Empty Destructor
   */
  virtual ~central_management_system ();

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
  void storing ()
  {
  }


  /**
   */
  void updating_the_details ()
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

  void member_details;
  void functions_details;
  void details_of_staff_allocation;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of member_details
   * @param new_var the new value of member_details
   */
  void setMember_details (void new_var)   {
      member_details = new_var;
  }

  /**
   * Get the value of member_details
   * @return the value of member_details
   */
  void getMember_details ()   {
    return member_details;
  }

  /**
   * Set the value of functions_details
   * @param new_var the new value of functions_details
   */
  void setFunctions_details (void new_var)   {
      functions_details = new_var;
  }

  /**
   * Get the value of functions_details
   * @return the value of functions_details
   */
  void getFunctions_details ()   {
    return functions_details;
  }

  /**
   * Set the value of details_of_staff_allocation
   * @param new_var the new value of details_of_staff_allocation
   */
  void setDetails_of_staff_allocation (void new_var)   {
      details_of_staff_allocation = new_var;
  }

  /**
   * Get the value of details_of_staff_allocation
   * @return the value of details_of_staff_allocation
   */
  void getDetails_of_staff_allocation ()   {
    return details_of_staff_allocation;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_MANAGEMENT_SYSTEM_H
