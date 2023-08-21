
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

/**
  * class student
  * 
  */

class student
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  student ();

  /**
   * Empty Destructor
   */
  virtual ~student ();

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
  void request_for_books ()
  {
  }


  /**
   */
  void return_previous_books ()
  {
  }


  /**
   */
  void register ()
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

  void student_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of student_details
   * @param new_var the new value of student_details
   */
  void setStudent_details (void new_var)   {
      student_details = new_var;
  }

  /**
   * Get the value of student_details
   * @return the value of student_details
   */
  void getStudent_details ()   {
    return student_details;
  }
private:


  void initAttributes () ;

};

#endif // STUDENT_H
