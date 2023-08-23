
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

/**
  * class registration
  * 
  */

class registration
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  registration ();

  /**
   * Empty Destructor
   */
  virtual ~registration ();

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
  void display ()
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

  void new_attributereg_no;
  void course_option;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of new_attributereg_no
   * @param new_var the new value of new_attributereg_no
   */
  void setNew_attributereg_no (void new_var)   {
      new_attributereg_no = new_var;
  }

  /**
   * Get the value of new_attributereg_no
   * @return the value of new_attributereg_no
   */
  void getNew_attributereg_no ()   {
    return new_attributereg_no;
  }

  /**
   * Set the value of course_option
   * @param new_var the new value of course_option
   */
  void setCourse_option (void new_var)   {
      course_option = new_var;
  }

  /**
   * Get the value of course_option
   * @return the value of course_option
   */
  void getCourse_option ()   {
    return course_option;
  }
private:


  void initAttributes () ;

};

#endif // REGISTRATION_H
