
#ifndef CREW_H
#define CREW_H

#include <string>

/**
  * class crew
  * 
  */

class crew
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  crew ();

  /**
   * Empty Destructor
   */
  virtual ~crew ();

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
  void year ()
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
private:


  void initAttributes () ;

};

#endif // CREW_H
