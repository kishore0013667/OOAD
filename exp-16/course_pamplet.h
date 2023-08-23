
#ifndef COURSE_PAMPLET_H
#define COURSE_PAMPLET_H

#include <string>

/**
  * class course_pamplet
  * 
  */

class course_pamplet
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  course_pamplet ();

  /**
   * Empty Destructor
   */
  virtual ~course_pamplet ();

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
  void view ()
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

  void course_name;
  void course_number;
  void time_period;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of course_name
   * @param new_var the new value of course_name
   */
  void setCourse_name (void new_var)   {
      course_name = new_var;
  }

  /**
   * Get the value of course_name
   * @return the value of course_name
   */
  void getCourse_name ()   {
    return course_name;
  }

  /**
   * Set the value of course_number
   * @param new_var the new value of course_number
   */
  void setCourse_number (void new_var)   {
      course_number = new_var;
  }

  /**
   * Get the value of course_number
   * @return the value of course_number
   */
  void getCourse_number ()   {
    return course_number;
  }

  /**
   * Set the value of time_period
   * @param new_var the new value of time_period
   */
  void setTime_period (void new_var)   {
      time_period = new_var;
  }

  /**
   * Get the value of time_period
   * @return the value of time_period
   */
  void getTime_period ()   {
    return time_period;
  }
private:


  void initAttributes () ;

};

#endif // COURSE_PAMPLET_H
