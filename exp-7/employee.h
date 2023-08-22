
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

  void branch;
  void staff_id;
  void staff_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of branch
   * @param new_var the new value of branch
   */
  void setBranch (void new_var)   {
      branch = new_var;
  }

  /**
   * Get the value of branch
   * @return the value of branch
   */
  void getBranch ()   {
    return branch;
  }

  /**
   * Set the value of staff_id
   * @param new_var the new value of staff_id
   */
  void setStaff_id (void new_var)   {
      staff_id = new_var;
  }

  /**
   * Get the value of staff_id
   * @return the value of staff_id
   */
  void getStaff_id ()   {
    return staff_id;
  }

  /**
   * Set the value of staff_details
   * @param new_var the new value of staff_details
   */
  void setStaff_details (void new_var)   {
      staff_details = new_var;
  }

  /**
   * Get the value of staff_details
   * @return the value of staff_details
   */
  void getStaff_details ()   {
    return staff_details;
  }
private:


  void initAttributes () ;

};

#endif // EMPLOYEE_H
