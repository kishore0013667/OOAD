
#ifndef USER_H
#define USER_H

#include <string>
#include vector



/**
  * class user
  * 
  */

class user
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user ();

  /**
   * Empty Destructor
   */
  virtual ~user ();

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

  void course_taken;
  void year_handeled;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of course_taken
   * @param new_var the new value of course_taken
   */
  void setCourse_taken (void new_var)   {
      course_taken = new_var;
  }

  /**
   * Get the value of course_taken
   * @return the value of course_taken
   */
  void getCourse_taken ()   {
    return course_taken;
  }

  /**
   * Set the value of year_handeled
   * @param new_var the new value of year_handeled
   */
  void setYear_handeled (void new_var)   {
      year_handeled = new_var;
  }

  /**
   * Get the value of year_handeled
   * @return the value of year_handeled
   */
  void getYear_handeled ()   {
    return year_handeled;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
