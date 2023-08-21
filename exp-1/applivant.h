
#ifndef APPLIVANT_H
#define APPLIVANT_H

#include <string>

/**
  * class applivant
  * 
  */

class applivant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  applivant ();

  /**
   * Empty Destructor
   */
  virtual ~applivant ();

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
  void apply_passport ()
  {
  }


  /**
   */
  void proof_submission ()
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

  void applicant_name;
  void applicant_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of applicant_name
   * @param new_var the new value of applicant_name
   */
  void setApplicant_name (void new_var)   {
      applicant_name = new_var;
  }

  /**
   * Get the value of applicant_name
   * @return the value of applicant_name
   */
  void getApplicant_name ()   {
    return applicant_name;
  }

  /**
   * Set the value of applicant_details
   * @param new_var the new value of applicant_details
   */
  void setApplicant_details (void new_var)   {
      applicant_details = new_var;
  }

  /**
   * Get the value of applicant_details
   * @return the value of applicant_details
   */
  void getApplicant_details ()   {
    return applicant_details;
  }
private:


  void initAttributes () ;

};

#endif // APPLIVANT_H
