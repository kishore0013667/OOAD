
#ifndef UNIVERSITY_DATABASE_H
#define UNIVERSITY_DATABASE_H

#include <string>

/**
  * class university_database
  * 
  */

class university_database
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  university_database ();

  /**
   * Empty Destructor
   */
  virtual ~university_database ();

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
  void storing_registration ()
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

  void exam_details;
  void reg_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of exam_details
   * @param new_var the new value of exam_details
   */
  void setExam_details (void new_var)   {
      exam_details = new_var;
  }

  /**
   * Get the value of exam_details
   * @return the value of exam_details
   */
  void getExam_details ()   {
    return exam_details;
  }

  /**
   * Set the value of reg_details
   * @param new_var the new value of reg_details
   */
  void setReg_details (void new_var)   {
      reg_details = new_var;
  }

  /**
   * Get the value of reg_details
   * @return the value of reg_details
   */
  void getReg_details ()   {
    return reg_details;
  }
private:


  void initAttributes () ;

};

#endif // UNIVERSITY_DATABASE_H
