
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class admin
  * 
  */

class admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admin ();

  /**
   * Empty Destructor
   */
  virtual ~admin ();

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
  void verify_students_id ()
  {
  }


  /**
   */
  void check_for_book_availability ()
  {
  }


  /**
   */
  void issue_books ()
  {
  }


  /**
   */
  void order_for_new_auther ()
  {
  }


  /**
   */
  void maintain_student_details ()
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
  void booklist;
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

#endif // ADMIN_H
