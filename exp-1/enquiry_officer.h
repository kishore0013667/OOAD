
#ifndef ENQUIRY_OFFICER_H
#define ENQUIRY_OFFICER_H

#include <string>

/**
  * class enquiry_officer
  * 
  */

class enquiry_officer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  enquiry_officer ();

  /**
   * Empty Destructor
   */
  virtual ~enquiry_officer ();

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
  void passport_issue ()
  {
  }


  /**
   */
  void new_operation ()
  {
  }


  /**
   */
  void passport_renewal ()
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

  void verification_of_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of verification_of_details
   * @param new_var the new value of verification_of_details
   */
  void setVerification_of_details (void new_var)   {
      verification_of_details = new_var;
  }

  /**
   * Get the value of verification_of_details
   * @return the value of verification_of_details
   */
  void getVerification_of_details ()   {
    return verification_of_details;
  }
private:


  void initAttributes () ;

};

#endif // ENQUIRY_OFFICER_H
