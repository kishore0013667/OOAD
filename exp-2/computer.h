
#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

/**
  * class computer
  * 
  */

class computer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  computer ();

  /**
   * Empty Destructor
   */
  virtual ~computer ();

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
  void maintance_student_record ()
  {
  }


  /**
   */
  void enter_issue ()
  {
  }


  /**
   */
  void order_new_auther ()
  {
  }


  /**
   */
  void check_availability ()
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

  void student_record;
  void booklist;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of student_record
   * @param new_var the new value of student_record
   */
  void setStudent_record (void new_var)   {
      student_record = new_var;
  }

  /**
   * Get the value of student_record
   * @return the value of student_record
   */
  void getStudent_record ()   {
    return student_record;
  }

  /**
   * Set the value of booklist
   * @param new_var the new value of booklist
   */
  void setBooklist (void new_var)   {
      booklist = new_var;
  }

  /**
   * Get the value of booklist
   * @return the value of booklist
   */
  void getBooklist ()   {
    return booklist;
  }
private:


  void initAttributes () ;

};

#endif // COMPUTER_H
