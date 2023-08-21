
#ifndef RSGISTRATION_H
#define RSGISTRATION_H

#include <string>

/**
  * class rsgistration
  * 
  */

class rsgistration
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  rsgistration ();

  /**
   * Empty Destructor
   */
  virtual ~rsgistration ();

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

  void reg_no;
  void course_opted;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of reg_no
   * @param new_var the new value of reg_no
   */
  void setReg_no (void new_var)   {
      reg_no = new_var;
  }

  /**
   * Get the value of reg_no
   * @return the value of reg_no
   */
  void getReg_no ()   {
    return reg_no;
  }

  /**
   * Set the value of course_opted
   * @param new_var the new value of course_opted
   */
  void setCourse_opted (void new_var)   {
      course_opted = new_var;
  }

  /**
   * Get the value of course_opted
   * @return the value of course_opted
   */
  void getCourse_opted ()   {
    return course_opted;
  }
private:


  void initAttributes () ;

};

#endif // RSGISTRATION_H
